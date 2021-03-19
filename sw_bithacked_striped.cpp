#include <iostream>  // std::cout
#include <string>
#include <vector>
#include <utility>
#include <algorithm> // for copy
#include <iterator> // for ostream_iterator
#include "traceback.cpp"


template < typename T >
    void sw_bithacked_striped(std::vector<std::pair< T, T >> const sequences){
        // TODO: Switch everything to unsigned ints
        unsigned int const quantity = sequences.size();

        for (unsigned int s =0; s< quantity; ++s) {

            T s1 = sequences[s].first;
            T s2 = sequences[s].second;
            unsigned int size = s1.size();
            std::vector<std::vector<int>> matrix(size + 1, std::vector<int>(size + 1, 0));

            int gaps(-2), mismatch(-2), match(3), max_element(0);
            unsigned int max_element_i(0), max_element_j(0);
            int diagonal_value, top_value, left_value;
            
            unsigned int stripe = 1u << 8;
            for (unsigned int s=1; s < size + 1; s += stripe) {
                for (unsigned int i=1; i < size + 1; ++i){
                    for(unsigned int j=0; j < stripe; ++j) {
                        diagonal_value = matrix[i-1][s + j - 1] + (s1[i - 1] == s2[s + j - 1] ? match : mismatch);
                        top_value = matrix[i-1][s + j] + gaps;
                        left_value = matrix[i][s + j - 1] + gaps;
                        int temp = top_value - ((top_value - left_value) & ((top_value - left_value) >> (sizeof(int) * 8 - 1)));
                        int target_value = diagonal_value - ((diagonal_value - temp) & ((diagonal_value - temp) >> (sizeof(int) * 8 - 1)));  // std::max(diagonal_value, std::max(top_value, left_value));
                        matrix[i][s + j] = target_value - (target_value & (target_value >> (sizeof(int) * 8 - 1)));  // (target_value > 0) ? target_value : 0;
                        // Bithacks to replace branching below:
                        // max_element = target_value - ((target_value - max_element) & ((target_value - max_element) >> (sizeof(int) * 8 - 1)));
                        // temp = int(target_value != max_element);
                        // int temp_i = temp * int(i);
                        // max_element_i = max_element_i - ((max_element_i - temp_i) & ((max_element_i - temp_i) >> (sizeof(int) * 8 - 1)));
                        // int temp_j = temp * int(j);
                        // max_element_j = max_element_j - ((max_element_j - temp_j) & ((max_element_j - temp_j) >> (sizeof(int) * 8 - 1)));
                        if (target_value > max_element) {
                            max_element = target_value;
                            max_element_i = i;
                            max_element_j = j;
                        }
                    }
                }
            }
            //std::cout << max_element << " " << max_element_i << " " << max_element_j << std::endl;
        }
        // // Traceback
        // traceback(matrix, max_element_i, max_element_j);
}
