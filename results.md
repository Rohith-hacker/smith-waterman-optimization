Performance counter stats for './benchmark_multicore-windowed.out multicore-windowed':

         1,534,064      cycles:u                                                      (39.27%)
         2,233,453      instructions:u            #    1.46  insn per cycle         
           174,202      L1-dcache-stores                                            
            27,051      L1-dcache-load-misses                                       
             1,351      LLC-load-misses                                             
            22,302      cache-misses:u            #    0.000 % of all cache refs    
     <not counted>      cache-references:u                                            (0.00%)
     <not counted>      branches:u                                                    (0.00%)
     <not counted>      branch-misses:u                                               (0.00%)
               133      page-faults:u                                               

       0.079823661 seconds time elapsed

Performance counter stats for './benchmark_simd-alpern.out simd-alpern':

    17,129,500,315      cycles:u                                                      (55.39%)
    47,536,729,978      instructions:u            #    2.78  insn per cycle           (66.54%)
     2,397,400,010      L1-dcache-stores                                              (66.61%)
     1,625,922,235      L1-dcache-load-misses                                         (66.71%)
         8,485,025      LLC-load-misses                                               (66.81%)
       696,119,975      cache-misses:u            #   61.758 % of all cache refs      (66.84%)
     1,127,175,756      cache-references:u                                            (44.45%)
     2,493,585,911      branches:u                                                    (44.35%)
         1,655,147      branch-misses:u           #    0.07% of all branches          (44.25%)
            29,839      page-faults:u                                               

       4.021245132 seconds time elapsed

 Performance counter stats for './benchmark_multicore-alpern.out multicore-alpern':

    16,090,960,712      cycles:u                                                      (55.41%)
    45,409,304,605      instructions:u            #    2.82  insn per cycle           (66.56%)
     1,326,655,946      L1-dcache-stores                                              (66.56%)
     1,623,996,397      L1-dcache-load-misses                                         (66.58%)
        17,313,939      LLC-load-misses                                               (66.69%)
       672,495,951      cache-misses:u            #   58.674 % of all cache refs      (66.79%)
     1,146,166,365      cache-references:u                                            (44.57%)
     2,492,306,868      branches:u                                                    (44.46%)
         2,187,690      branch-misses:u           #    0.09% of all branches          (44.35%)
            38,061      page-faults:u                                               

       3.771619348 seconds time elapsed
2- threads:
Performance counter stats for './benchmark_multicore-windowed.out multicore-windowed':

         1,806,250      cycles:u                                                    
         2,233,451      instructions:u            #    1.24  insn per cycle         
           174,202      L1-dcache-stores                                            
            27,014      L1-dcache-load-misses                                       
             1,433      LLC-load-misses                                             
            22,947      cache-misses:u            #    0.000 % of all cache refs    
     <not counted>      cache-references:u                                            (0.00%)
     <not counted>      branches:u                                                    (0.00%)
     <not counted>      branch-misses:u                                               (0.00%)
               132      page-faults:u                                               

       0.079789820 seconds time elapsed

Performance counter stats for './benchmark_simd-alpern.out simd-alpern':

    15,968,089,750      cycles:u                                                      (55.47%)
    47,450,298,028      instructions:u            #    2.97  insn per cycle           (66.60%)
     2,393,842,226      L1-dcache-stores                                              (66.60%)
     1,626,155,655      L1-dcache-load-misses                                         (66.60%)
        19,699,699      LLC-load-misses                                               (66.60%)
       668,188,152      cache-misses:u            #   58.640 % of all cache refs      (66.70%)
     1,139,469,127      cache-references:u                                            (44.53%)
     2,495,453,036      branches:u                                                    (44.53%)
         1,661,541      branch-misses:u           #    0.07% of all branches          (44.43%)
            29,837      page-faults:u                                               

       3.740547943 seconds time elapsed

 Performance counter stats for './benchmark_multicore-alpern.out multicore-alpern':

    19,748,617,378      cycles:u                                                      (55.58%)
    45,259,767,784      instructions:u            #    2.29  insn per cycle           (66.69%)
     1,317,397,068      L1-dcache-stores                                              (66.64%)
     1,619,777,474      L1-dcache-load-misses                                         (66.55%)
        67,602,979      LLC-load-misses                                               (66.49%)
       747,585,545      cache-misses:u            #   73.094 % of all cache refs      (66.59%)
     1,022,778,603      cache-references:u                                            (44.55%)
     2,510,343,039      branches:u                                                    (44.62%)
         1,661,003      branch-misses:u           #    0.07% of all branches          (44.56%)
            46,431      page-faults:u                                               

       2.409786699 seconds time elapsed

4-threads
Performance counter stats for './benchmark_multicore-windowed.out multicore-windowed':

         1,840,685      cycles:u                                                    
         2,233,454      instructions:u            #    1.21  insn per cycle         
           174,202      L1-dcache-stores                                            
            27,113      L1-dcache-load-misses                                       
             1,589      LLC-load-misses                                             
            24,935      cache-misses:u            #    0.000 % of all cache refs    
     <not counted>      cache-references:u                                            (0.00%)
     <not counted>      branches:u                                                    (0.00%)
     <not counted>      branch-misses:u                                               (0.00%)
               135      page-faults:u                                               

       0.082745792 seconds time elapsed

Performance counter stats for './benchmark_simd-alpern.out simd-alpern':

    16,055,488,799      cycles:u                                                      (55.37%)
    47,620,577,462      instructions:u            #    2.97  insn per cycle           (66.55%)
     2,396,241,123      L1-dcache-stores                                              (66.66%)
     1,622,602,062      L1-dcache-load-misses                                         (66.76%)
        19,444,500      LLC-load-misses                                               (66.78%)
       652,226,255      cache-misses:u            #   57.389 % of all cache refs      (66.78%)
     1,136,490,960      cache-references:u                                            (44.42%)
     2,487,846,568      branches:u                                                    (44.31%)
         1,627,278      branch-misses:u           #    0.07% of all branches          (44.29%)
            29,837      page-faults:u                                               

       3.761456144 seconds time elapsed

 Performance counter stats for './benchmark_multicore-alpern.out multicore-alpern':

    41,546,981,871      cycles:u                                                      (55.55%)
    45,244,518,415      instructions:u            #    1.09  insn per cycle           (66.59%)
     1,317,510,648      L1-dcache-stores                                              (66.53%)
     1,611,259,808      L1-dcache-load-misses                                         (66.53%)
       213,834,875      LLC-load-misses                                               (66.55%)
       741,809,234      cache-misses:u            #   91.654 % of all cache refs      (66.61%)
       809,355,654      cache-references:u                                            (44.63%)
     2,514,139,933      branches:u                                                    (44.61%)
         1,694,909      branch-misses:u           #    0.07% of all branches          (44.55%)
            63,171      page-faults:u                                               

       2.594016490 seconds time elapsed

