# 13 num_pairs 6 string_len

Performance counter stats for './benchmark_base.out base':

     1,387,247,297      cycles:u                                                      (53.70%)
     2,060,430,993      instructions:u            #    1.49  insn per cycle           (65.62%)
       197,426,301      L1-dcache-stores                                              (66.82%)
         3,163,349      L1-dcache-load-misses                                         (67.80%)
            15,990      LLC-load-misses                                               (67.80%)
           331,947      cache-misses:u            #   25.420 % of all cache refs      (67.80%)
         1,305,842      cache-references:u                                            (43.92%)
       275,030,198      branches:u                                                    (42.94%)
        25,715,293      branch-misses:u           #    9.35% of all branches          (42.94%)
             1,054      page-faults:u                                               

       0.339053927 seconds time elapsed
 Performance counter stats for './benchmark_bithacked-striped.out bithacked-striped':

        25,389,013      cycles:u                                                      (5.05%)
        96,793,984      instructions:u            #    3.81  insn per cycle           (40.89%)
        20,078,674      L1-dcache-stores                                              (76.74%)
           138,768      L1-dcache-load-misses                                       
             1,805      LLC-load-misses                                             
            28,380      cache-misses:u            #    3.245 % of all cache refs    
           874,659      cache-references:u                                            (23.26%)
     <not counted>      branches:u                                                    (0.00%)
     <not counted>      branch-misses:u                                               (0.00%)
             1,930      page-faults:u                                               

       0.092870960 seconds time elapsed
Performance counter stats for './benchmark_simd-alpern.out simd-alpern':

       104,096,782      cycles:u                                                      (40.03%)
       286,538,471      instructions:u            #    2.75  insn per cycle           (55.02%)
        37,296,160      L1-dcache-stores                                              (55.02%)
         1,518,488      L1-dcache-load-misses                                         (59.87%)
             3,313      LLC-load-misses                                               (74.87%)
            46,694      cache-misses:u            #    5.347 % of all cache refs      (89.86%)
           873,260      cache-references:u                                            (55.12%)
        22,124,969      branches:u                                                    (40.13%)
             6,915      branch-misses:u           #    0.03% of all branches          (25.13%)
             2,415      page-faults:u                                               

       0.030754022 seconds time elapsed
 Performance counter stats for './benchmark_parallel-windowed.out parallel-windowed': (2 threads)

        10,801,079      cycles:u                                                      (1.18%)
       155,510,187      instructions:u            #   14.40  insn per cycle           (23.08%)
        33,050,166      L1-dcache-stores                                              (44.98%)
           279,953      L1-dcache-load-misses                                         (66.89%)
            14,010      LLC-load-misses                                             
           234,981      cache-misses:u            #   14.569 % of all cache refs    
         1,612,885      cache-references:u                                            (55.02%)
        18,034,276      branches:u                                                    (33.11%)
     <not counted>      branch-misses:u                                               (0.00%)
             3,974      page-faults:u                                               

       0.019990947 seconds time elapsed
Performance counter stats for './benchmark_parallel-windowed.out parallel-windowed': (4 threads)

        80,197,198      cycles:u                                                      (12.34%)
       210,498,567      instructions:u            #    2.62  insn per cycle           (29.76%)
        37,401,367      L1-dcache-stores                                              (47.19%)
           529,866      L1-dcache-load-misses                                         (73.63%)
            19,416      LLC-load-misses                                             
           269,172      cache-misses:u            #   17.855 % of all cache refs    
         1,507,511      cache-references:u                                            (52.81%)
        19,375,518      branches:u                                                    (26.37%)
     <not counted>      branch-misses:u                                               (0.00%)
             5,060      page-faults:u                                               

       0.020932722 seconds time elapsed
 Performance counter stats for './benchmark_parallel-windowed.out parallel-windowed': (6 threads)

        94,586,615      cycles:u                                                      (16.15%)
       170,022,836      instructions:u            #    1.80  insn per cycle           (30.03%)
        51,345,985      L1-dcache-stores                                              (28.94%)
           453,748      L1-dcache-load-misses                                         (42.83%)
            23,366      LLC-load-misses                                               (85.03%)
           316,421      cache-misses:u            #   18.312 % of all cache refs    
         1,727,921      cache-references:u                                            (71.06%)
        11,375,508      branches:u                                                    (57.17%)
            17,065      branch-misses:u           #    0.15% of all branches          (14.97%)
             6,155      page-faults:u                                               

       0.022270687 seconds time elapsed
 Performance counter stats for './benchmark_multicore-alpern.out multicore-alpern': (2 threads)

        97,760,572      cycles:u                                                      (16.55%)
       234,856,724      instructions:u            #    2.40  insn per cycle           (30.64%)
        45,379,281      L1-dcache-stores                                              (40.11%)
         2,119,877      L1-dcache-load-misses                                         (67.21%)
             3,210      LLC-load-misses                                               (95.38%)
           100,691      cache-misses:u            #    4.035 % of all cache refs    
         2,495,703      cache-references:u                                            (59.89%)
        22,606,888      branches:u                                                    (32.79%)
            10,637      branch-misses:u           #    0.05% of all branches          (4.62%)
             2,495      page-faults:u                                               

       0.024989546 seconds time elapsed
Performance counter stats for './benchmark_multicore-alpern.out multicore-alpern': (4 threads)

       102,058,246      cycles:u                                                      (7.65%)
       277,346,501      instructions:u            #    2.72  insn per cycle           (20.48%)
        51,120,886      L1-dcache-stores                                              (33.31%)
         2,573,703      L1-dcache-load-misses                                         (68.81%)
             6,407      LLC-load-misses                                             
           125,452      cache-misses:u            #    3.850 % of all cache refs    
         3,258,422      cache-references:u                                            (66.69%)
        19,729,870      branches:u                                                    (31.19%)
     <not counted>      branch-misses:u                                               (0.00%)
             2,588      page-faults:u                                               

       0.022889371 seconds time elapsed
Performance counter stats for './benchmark_multicore-alpern.out multicore-alpern': (6 threads)

        19,206,057      cycles:u                                                      (0.35%)
       290,285,256      instructions:u            #   15.11  insn per cycle           (11.97%)
        62,480,952      L1-dcache-stores                                              (23.60%)
           717,236      L1-dcache-load-misses                                         (37.44%)
             7,138      LLC-load-misses                                             
            98,905      cache-misses:u            #    3.861 % of all cache refs    
         2,561,684      cache-references:u                                            (76.40%)
        20,432,912      branches:u                                                    (62.56%)
     <not counted>      branch-misses:u                                               (0.00%)
             2,681      page-faults:u                                               

       0.020157743 seconds time elapsed
# 13 num_pairs and 10 string_len
 Performance counter stats for './benchmark_base.out base':

   308,887,950,337      cycles:u                                                      (55.54%)
   438,372,780,751      instructions:u            #    1.42  insn per cycle           (66.66%)
    35,123,863,818      L1-dcache-stores                                              (66.66%)
       732,531,784      L1-dcache-load-misses                                         (66.67%)
         2,779,415      LLC-load-misses                                               (66.67%)
       155,203,254      cache-misses:u            #   11.099 % of all cache refs      (66.67%)
     1,398,394,369      cache-references:u                                            (44.45%)
    51,417,756,734      branches:u                                                    (44.44%)
     5,731,790,084      branch-misses:u           #   11.15% of all branches          (44.44%)
         8,235,213      page-faults:u                                               

      78.572046435 seconds time elapsed
Performance counter stats for './benchmark_bithacked-striped.out bithacked-striped':

   147,419,383,494      cycles:u                                                      (55.55%)
   419,679,692,572      instructions:u            #    2.85  insn per cycle           (66.67%)
     9,398,772,626      L1-dcache-stores                                              (66.67%)
       836,915,829      L1-dcache-load-misses                                         (66.67%)
           843,026      LLC-load-misses                                               (66.67%)
         8,332,541      cache-misses:u            #    0.358 % of all cache refs      (66.67%)
     2,325,561,711      cache-references:u                                            (44.43%)
    29,250,830,124      branches:u                                                    (44.43%)
       111,770,197      branch-misses:u           #    0.38% of all branches          (44.43%)
         8,242,089      page-faults:u                                               

      39.145724669 seconds time elapsed
Performance counter stats for './benchmark_simd-alpern.out simd-alpern':

    16,200,264,423      cycles:u                                                      (55.37%)
    47,460,077,724      instructions:u            #    2.93  insn per cycle           (66.53%)
     2,393,833,209      L1-dcache-stores                                              (66.54%)
     1,629,328,675      L1-dcache-load-misses                                         (66.65%)
        13,000,964      LLC-load-misses                                               (66.75%)
       658,373,836      cache-misses:u            #   58.365 % of all cache refs      (66.85%)
     1,128,018,995      cache-references:u                                            (44.51%)
     2,497,780,829      branches:u                                                    (44.41%)
         1,699,906      branch-misses:u           #    0.07% of all branches          (44.30%)
            29,840      page-faults:u                                               

       3.767941674 seconds time elapsed
 Performance counter stats for './benchmark_parallel-windowed.out parallel-windowed': (2 threads)

    15,446,995,182      cycles:u                                                      (55.65%)
    46,247,571,814      instructions:u            #    2.99  insn per cycle           (66.73%)
     2,399,825,479      L1-dcache-stores                                              (66.73%)
       910,266,813      L1-dcache-load-misses                                         (66.70%)
           772,490      LLC-load-misses                                               (66.59%)
         3,944,006      cache-misses:u            #    0.318 % of all cache refs      (66.50%)
     1,241,816,685      cache-references:u                                            (44.39%)
     2,505,932,367      branches:u                                                    (44.50%)
         5,017,616      branch-misses:u           #    0.20% of all branches          (44.59%)
            23,210      page-faults:u                                               

       1.875440982 seconds time elapsed
 Performance counter stats for './benchmark_parallel-windowed.out parallel-windowed': (4 threads)

    15,952,536,063      cycles:u                                                      (55.61%)
    46,368,131,676      instructions:u            #    2.91  insn per cycle           (66.71%)
     2,406,945,313      L1-dcache-stores                                              (66.65%)
       920,424,555      L1-dcache-load-misses                                         (66.64%)
         1,174,811      LLC-load-misses                                               (66.52%)
        29,501,035      cache-misses:u            #    2.389 % of all cache refs      (66.54%)
     1,234,766,464      cache-references:u                                            (44.46%)
     2,497,212,534      branches:u                                                    (44.57%)
         5,018,163      branch-misses:u           #    0.20% of all branches          (44.61%)
            24,375      page-faults:u                                               

       1.044897983 seconds time elapsed
Performance counter stats for './benchmark_parallel-windowed.out parallel-windowed': (6 threads)

    21,828,011,959      cycles:u                                                      (55.51%)
    46,210,273,349      instructions:u            #    2.12  insn per cycle           (66.75%)
     2,370,260,864      L1-dcache-stores                                              (67.07%)
       865,656,978      L1-dcache-load-misses                                         (67.16%)
         6,497,723      LLC-load-misses                                               (66.91%)
       201,215,209      cache-misses:u            #   17.312 % of all cache refs      (66.57%)
     1,162,260,966      cache-references:u                                            (43.90%)
     2,499,559,068      branches:u                                                    (44.08%)
         5,017,455      branch-misses:u           #    0.20% of all branches          (44.30%)
            25,546      page-faults:u                                               

       1.028393581 seconds time elapsed
Performance counter stats for './benchmark_multicore-alpern.out multicore-alpern': (2 threads)

    19,307,339,064      cycles:u                                                      (55.40%)
    45,529,366,831      instructions:u            #    2.36  insn per cycle           (66.51%)
     1,329,437,506      L1-dcache-stores                                              (66.68%)
     1,619,920,338      L1-dcache-load-misses                                         (66.84%)
        61,634,137      LLC-load-misses                                               (66.81%)
       736,729,115      cache-misses:u            #   70.497 % of all cache refs      (66.72%)
     1,045,046,296      cache-references:u                                            (44.33%)
     2,487,690,465      branches:u                                                    (44.33%)
         1,658,216      branch-misses:u           #    0.07% of all branches          (44.29%)
            46,434      page-faults:u                                               

       2.366347983 seconds time elapsed
Performance counter stats for './benchmark_multicore-alpern.out multicore-alpern': (4 threads)

    40,746,644,768      cycles:u                                                      (55.34%)
    45,408,053,186      instructions:u            #    1.11  insn per cycle           (66.46%)
     1,322,029,025      L1-dcache-stores                                              (66.59%)
     1,612,792,663      L1-dcache-load-misses                                         (66.71%)
       209,591,312      LLC-load-misses                                               (66.80%)
       741,609,056      cache-misses:u            #   91.115 % of all cache refs      (66.80%)
       813,927,348      cache-references:u                                            (44.48%)
     2,517,666,617      branches:u                                                    (44.35%)
         1,677,469      branch-misses:u           #    0.07% of all branches          (44.27%)
            63,174      page-faults:u                                               

       2.543091882 seconds time elapsed
 Performance counter stats for './benchmark_multicore-alpern.out multicore-alpern': (6 threads)

    64,373,646,057      cycles:u                                                      (55.59%)
    45,246,833,817      instructions:u            #    0.70  insn per cycle           (66.70%)
     1,318,332,094      L1-dcache-stores                                              (66.70%)
     1,619,186,916      L1-dcache-load-misses                                         (66.70%)
       198,374,855      LLC-load-misses                                               (66.63%)
       752,731,758      cache-misses:u            #   92.414 % of all cache refs      (66.60%)
       814,518,822      cache-references:u                                            (44.41%)
     2,513,670,873      branches:u                                                    (44.45%)
         1,658,057      branch-misses:u           #    0.07% of all branches          (44.51%)
            79,910      page-faults:u                                               

       2.699937848 seconds time elapsed
 Performance counter stats for './benchmark_multicore-alpern.out multicore-alpern': (1 thread)

    15,718,325,379      cycles:u                                                      (55.49%)
    45,347,380,510      instructions:u            #    2.89  insn per cycle           (66.68%)
     1,321,135,528      L1-dcache-stores                                              (66.77%)
     1,619,922,900      L1-dcache-load-misses                                         (66.77%)
        19,738,670      LLC-load-misses                                               (66.77%)
       666,938,692      cache-misses:u            #   57.611 % of all cache refs      (66.77%)
     1,157,666,772      cache-references:u                                            (44.31%)
     2,501,361,624      branches:u                                                    (44.31%)
         1,656,782      branch-misses:u           #    0.07% of all branches          (44.31%)
            38,063      page-faults:u                                               

       3.687630509 seconds time elapsed
# 17 num_pairs and 6 string_len
 Performance counter stats for './benchmark_base.out base':

    22,935,831,449      cycles:u                                                      (55.55%)
    33,075,366,662      instructions:u            #    1.44  insn per cycle           (66.71%)
     3,103,790,589      L1-dcache-stores                                              (66.71%)
       326,089,417      L1-dcache-load-misses                                         (66.71%)
           187,472      LLC-load-misses                                               (66.71%)
         3,856,606      cache-misses:u            #    2.049 % of all cache refs      (66.71%)
       188,215,143      cache-references:u                                            (44.39%)
     4,589,228,013      branches:u                                                    (44.39%)
       399,157,236      branch-misses:u           #    8.70% of all branches          (44.39%)
            80,119      page-faults:u                                               

       5.627170160 seconds time elapsed
Performance counter stats for './benchmark_bithacked-striped.out bithacked-striped':

       589,534,055      cycles:u                                                      (50.54%)
     1,441,839,501      instructions:u            #    2.45  insn per cycle           (62.96%)
       281,348,492      L1-dcache-stores                                              (64.66%)
         1,743,758      L1-dcache-load-misses                                         (67.14%)
            26,109      LLC-load-misses                                               (69.41%)
         2,360,425      cache-misses:u            #   58.023 % of all cache refs      (70.20%)
         4,068,089      cache-references:u                                            (45.28%)
       379,149,870      branches:u                                                    (42.79%)
           849,626      branch-misses:u           #    0.22% of all branches          (40.52%)
            28,809      page-faults:u                                               

       0.241598202 seconds time elapsed
 Performance counter stats for './benchmark_simd-alpern.out simd-alpern':

     1,632,719,083      cycles:u                                                      (53.98%)
     4,741,645,451      instructions:u            #    2.90  insn per cycle           (65.49%)
       460,035,630      L1-dcache-stores                                              (66.16%)
        42,859,889      L1-dcache-load-misses                                         (67.12%)
           288,046      LLC-load-misses                                               (68.07%)
         8,320,511      cache-misses:u            #   60.796 % of all cache refs      (68.36%)
        13,685,956      cache-references:u                                            (44.39%)
       572,836,215      branches:u                                                    (43.43%)
         1,044,011      branch-misses:u           #    0.18% of all branches          (42.47%)
            36,015      page-faults:u                                               

       0.421511569 seconds time elapsed
Performance counter stats for './benchmark_parallel-windowed.out parallel-windowed': (2 threads)

       832,720,899      cycles:u                                                      (52.30%)
     1,958,794,444      instructions:u            #    2.35  insn per cycle           (64.22%)
       357,339,996      L1-dcache-stores                                              (64.28%)
         5,242,543      L1-dcache-load-misses                                         (65.98%)
           193,630      LLC-load-misses                                               (67.69%)
         6,443,815      cache-misses:u            #   43.495 % of all cache refs      (70.02%)
        14,815,015      cache-references:u                                            (45.95%)
       481,343,458      branches:u                                                    (44.24%)
           929,230      branch-misses:u           #    0.19% of all branches          (41.85%)
            37,574      page-faults:u                                               

       0.213421633 seconds time elapsed
 Performance counter stats for './benchmark_parallel-windowed.out parallel-windowed': (4 threads)

       920,534,103      cycles:u                                                      (46.26%)
     2,199,506,797      instructions:u            #    2.39  insn per cycle           (59.96%)
       357,642,844      L1-dcache-stores                                              (64.53%)
         6,260,029      L1-dcache-load-misses                                         (69.13%)
           233,084      LLC-load-misses                                               (73.93%)
         7,704,948      cache-misses:u            #   50.694 % of all cache refs      (75.13%)
        15,198,974      cache-references:u                                            (44.59%)
       524,165,943      branches:u                                                    (38.67%)
         1,030,259      branch-misses:u           #    0.20% of all branches          (34.01%)
            38,661      page-faults:u                                               

       0.208604113 seconds time elapsed
Performance counter stats for './benchmark_parallel-windowed.out parallel-windowed': (6 threads)

     1,032,085,643      cycles:u                                                      (43.82%)
     2,239,684,527      instructions:u            #    2.17  insn per cycle           (59.13%)
       351,079,630      L1-dcache-stores                                              (66.08%)
         6,347,627      L1-dcache-load-misses                                         (74.40%)
           230,064      LLC-load-misses                                               (77.70%)
         7,809,010      cache-misses:u            #   51.509 % of all cache refs      (78.65%)
        15,160,366      cache-references:u                                            (40.91%)
       600,807,038      branches:u                                                    (32.56%)
         1,184,856      branch-misses:u           #    0.20% of all branches          (29.70%)
            39,754      page-faults:u                                               

       0.206889263 seconds time elapsed
 Performance counter stats for './benchmark_multicore-alpern.out multicore-alpern': (2 threads)

     1,699,347,995      cycles:u                                                      (52.71%)
     4,789,035,657      instructions:u            #    2.82  insn per cycle           (64.53%)
       394,355,336      L1-dcache-stores                                              (65.26%)
        43,168,726      L1-dcache-load-misses                                         (66.51%)
           204,029      LLC-load-misses                                               (68.33%)
         7,588,152      cache-misses:u            #   46.681 % of all cache refs      (69.42%)
        16,255,335      cache-references:u                                            (45.32%)
       618,825,848      branches:u                                                    (43.50%)
         1,273,191      branch-misses:u           #    0.21% of all branches          (41.68%)
            36,094      page-faults:u                                               

       0.317282998 seconds time elapsed
Performance counter stats for './benchmark_multicore-alpern.out multicore-alpern': (4 threads)

     1,790,469,206      cycles:u                                                      (54.39%)
     4,812,234,520      instructions:u            #    2.69  insn per cycle           (65.80%)
       409,187,576      L1-dcache-stores                                              (65.79%)
        47,292,393      L1-dcache-load-misses                                         (67.69%)
           166,114      LLC-load-misses                                               (67.53%)
         6,747,026      cache-misses:u            #   37.217 % of all cache refs      (68.40%)
        18,129,045      cache-references:u                                            (43.72%)
       612,280,874      branches:u                                                    (43.88%)
           969,454      branch-misses:u           #    0.16% of all branches          (43.00%)
            36,190      page-faults:u                                               

       0.254091142 seconds time elapsed
 Performance counter stats for './benchmark_multicore-alpern.out multicore-alpern': (6 threads)

     1,973,917,034      cycles:u                                                      (56.81%)
     4,421,883,291      instructions:u            #    2.24  insn per cycle           (70.63%)
       369,104,767      L1-dcache-stores                                              (72.24%)
        40,595,983      L1-dcache-load-misses                                         (73.18%)
           232,422      LLC-load-misses                                               (69.94%)
         8,531,063      cache-misses:u            #   56.481 % of all cache refs      (65.89%)
        15,104,196      cache-references:u                                            (36.70%)
       655,453,875      branches:u                                                    (39.00%)
         1,033,620      branch-misses:u           #    0.16% of all branches          (43.05%)
            36,283      page-faults:u                                               

       0.237669130 seconds time elapsed

# 17 num_pairs and 10 string_len: TODO
