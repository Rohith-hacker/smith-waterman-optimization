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

       772,008,948      cycles:u                                                      (55.43%)
     1,959,507,442      instructions:u            #    2.54  insn per cycle           (66.82%)
        93,708,218      L1-dcache-stores                                              (66.82%)
           580,728      L1-dcache-load-misses                                         (66.82%)
            17,210      LLC-load-misses                                               (66.82%)
           423,071      cache-misses:u            #   70.108 % of all cache refs      (66.81%)
           603,454      cache-references:u                                            (44.25%)
       185,738,384      branches:u                                                    (44.25%)
         8,479,410      branch-misses:u           #    4.57% of all branches          (44.25%)
             1,935      page-faults:u                                               

       0.184782517 seconds time elapsed

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

        70,278,207      cycles:u                                                      (19.89%)
       177,005,361      instructions:u            #    2.52  insn per cycle           (40.77%)
        29,649,427      L1-dcache-stores                                              (61.60%)
           462,967      L1-dcache-load-misses                                         (92.11%)
            12,703      LLC-load-misses                                             
           205,576      cache-misses:u            #   14.203 % of all cache refs    
         1,447,459      cache-references:u                                            (38.40%)
        13,633,734      branches:u                                                    (7.89%)
     <not counted>      branch-misses:u                                               (0.00%)
             3,971      page-faults:u                                               

       0.020710358 seconds time elapsed

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

       173,798,431      cycles:u                                                      (16.26%)
       183,383,396      instructions:u            #    1.06  insn per cycle           (25.14%)
        82,213,103      L1-dcache-stores                                              (18.32%)
         1,401,957      L1-dcache-load-misses                                         (30.99%)
             2,852      LLC-load-misses                                               (84.29%)
            96,348      cache-misses:u            #    3.189 % of all cache refs    
         3,021,464      cache-references:u                                            (81.68%)
        18,102,822      branches:u                                                    (69.01%)
             3,660      branch-misses:u           #    0.02% of all branches          (15.71%)
             2,683      page-faults:u                                               

       0.021681990 seconds time elapsed

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

    15,928,218,943      cycles:u                                                      (55.54%)
    47,507,538,401      instructions:u            #    2.98  insn per cycle           (66.69%)
     2,392,857,673      L1-dcache-stores                                              (66.69%)
     1,625,115,018      L1-dcache-load-misses                                         (66.69%)
        18,593,369      LLC-load-misses                                               (66.69%)
       652,111,921      cache-misses:u            #   57.130 % of all cache refs      (66.69%)
     1,141,460,095      cache-references:u                                            (44.42%)
     2,499,471,966      branches:u                                                    (44.42%)
         1,658,738      branch-misses:u           #    0.07% of all branches          (44.42%)
            29,839      page-faults:u                                               

       3.714357832 seconds time elapsed

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

    15,932,277,041      cycles:u                                                      (55.39%)
    45,450,105,125      instructions:u            #    2.85  insn per cycle           (66.58%)
     1,323,659,788      L1-dcache-stores                                              (66.68%)
     1,621,804,146      L1-dcache-load-misses                                         (66.77%)
        19,357,412      LLC-load-misses                                               (66.77%)
       691,457,722      cache-misses:u            #   58.745 % of all cache refs      (66.77%)
     1,177,050,535      cache-references:u                                            (44.39%)
     2,497,372,992      branches:u                                                    (44.30%)
         1,643,556      branch-misses:u           #    0.07% of all branches          (44.30%)
            38,059      page-faults:u                                               

       3.723765643 seconds time elapsed

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

    12,208,376,501      cycles:u                                                      (55.48%)
    31,229,450,574      instructions:u            #    2.56  insn per cycle           (66.69%)
     1,434,809,123      L1-dcache-stores                                              (66.79%)
         6,800,801      L1-dcache-load-misses                                         (66.79%)
           212,514      LLC-load-misses                                               (66.79%)
         6,097,162      cache-misses:u            #   98.975 % of all cache refs      (66.79%)
         6,160,332      cache-references:u                                            (44.28%)
     3,178,785,057      branches:u                                                    (44.28%)
       128,744,605      branch-misses:u           #    4.05% of all branches          (44.28%)
            28,812      page-faults:u                                               

       2.822497761 seconds time elapsed

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

# 17 num_pairs and 10 string_len:
Performance counter stats for './benchmark_base.out base':

 4,931,140,944,310      cycles:u                                                      (55.55%)
 7,012,101,521,102      instructions:u            #    1.42  insn per cycle           (66.67%)
   562,074,625,310      L1-dcache-stores                                              (66.67%)
    12,049,318,750      L1-dcache-load-misses                                         (66.67%)
        53,714,121      LLC-load-misses                                               (66.67%)
     2,004,313,200      cache-misses:u            #    8.807 % of all cache refs      (66.67%)
    22,758,643,354      cache-references:u                                            (44.44%)
   822,659,739,090      branches:u                                                    (44.44%)
    91,666,585,921      branch-misses:u           #   11.14% of all branches          (44.44%)
       131,638,397      page-faults:u                                               

    1252.460437076 seconds time elapsed
Performance counter stats for './benchmark_bithacked-striped.out bithacked-striped':

 2,359,495,438,329      cycles:u                                                      (55.55%)
 6,714,759,011,619      instructions:u            #    2.85  insn per cycle           (66.67%)
   150,298,306,260      L1-dcache-stores                                              (66.67%)
    13,364,976,162      L1-dcache-load-misses                                         (66.67%)
        12,346,827      LLC-load-misses                                               (66.67%)
       178,180,366      cache-misses:u            #    0.480 % of all cache refs      (66.67%)
    37,088,131,685      cache-references:u                                            (44.44%)
   468,164,793,726      branches:u                                                    (44.44%)
     1,782,300,985      branch-misses:u           #    0.38% of all branches          (44.44%)
       131,870,888      page-faults:u                                               

     624.514900110 seconds time elapsed
 Performance counter stats for './benchmark_simd-alpern.out simd-alpern':

   257,683,954,952      cycles:u                                                      (55.55%)
   758,939,641,169      instructions:u            #    2.95  insn per cycle           (66.67%)
    38,316,016,435      L1-dcache-stores                                              (66.67%)
    25,988,022,673      L1-dcache-load-misses                                         (66.67%)
       297,884,004      LLC-load-misses                                               (66.67%)
    10,614,865,882      cache-misses:u            #   58.548 % of all cache refs      (66.67%)
    18,130,118,589      cache-references:u                                            (44.45%)
    39,930,881,938      branches:u                                                    (44.45%)
        26,591,462      branch-misses:u           #    0.07% of all branches          (44.45%)
           351,438      page-faults:u                                               

      59.689298070 seconds time elapsed
 Performance counter stats for './benchmark_parallel-windowed.out parallel-windowed': (2 threads)

   246,397,308,843      cycles:u                                                      (55.56%)
   741,982,948,718      instructions:u            #    3.01  insn per cycle           (66.67%)
    38,377,009,479      L1-dcache-stores                                              (66.66%)
    14,642,617,941      L1-dcache-load-misses                                         (66.66%)
        11,527,099      LLC-load-misses                                               (66.66%)
       108,480,651      cache-misses:u            #    0.536 % of all cache refs      (66.67%)
    20,225,271,832      cache-references:u                                            (44.46%)
    40,241,231,806      branches:u                                                    (44.45%)
        81,230,561      branch-misses:u           #    0.20% of all branches          (44.45%)
           344,807      page-faults:u                                               

      30.019342170 seconds time elapsed
 Performance counter stats for './benchmark_parallel-windowed.out parallel-windowed': (4 threads)

   249,656,722,856      cycles:u                                                      (55.54%)
   742,365,958,866      instructions:u            #    2.97  insn per cycle           (66.65%)
    38,384,420,150      L1-dcache-stores                                              (66.66%)
    14,591,310,613      L1-dcache-load-misses                                         (66.66%)
        14,151,542      LLC-load-misses                                               (66.66%)
       178,847,768      cache-misses:u            #    0.894 % of all cache refs      (66.68%)
    19,999,713,363      cache-references:u                                            (44.46%)
    40,237,870,836      branches:u                                                    (44.45%)
        81,648,881      branch-misses:u           #    0.20% of all branches          (44.44%)
           345,976      page-faults:u                                               

      16.269951596 seconds time elapsed
Performance counter stats for './benchmark_parallel-windowed.out parallel-windowed': (6 threads)

   289,638,958,587      cycles:u                                                      (55.56%)
   742,477,723,289      instructions:u            #    2.56  insn per cycle           (66.67%)
    38,388,291,880      L1-dcache-stores                                              (66.67%)
    14,143,930,232      L1-dcache-load-misses                                         (66.67%)
        66,317,244      LLC-load-misses                                               (66.67%)
     2,530,435,340      cache-misses:u            #   12.989 % of all cache refs      (66.66%)
    19,480,968,451      cache-references:u                                            (44.43%)
    40,417,327,093      branches:u                                                    (44.44%)
        81,286,733      branch-misses:u           #    0.20% of all branches          (44.45%)
           347,145      page-faults:u                                               

      13.782575548 seconds time elapsed
 Performance counter stats for './benchmark_multicore-alpern.out multicore-alpern': (2 threads)

   307,033,371,316      cycles:u                                                      (55.55%)
   725,612,220,601      instructions:u            #    2.36  insn per cycle           (66.66%)
    21,155,847,833      L1-dcache-stores                                              (66.66%)
    25,898,885,110      L1-dcache-load-misses                                         (66.66%)
       961,806,514      LLC-load-misses                                               (66.67%)
    11,681,466,686      cache-misses:u            #   70.800 % of all cache refs      (66.67%)
    16,499,292,402      cache-references:u                                            (44.45%)
    40,015,367,092      branches:u                                                    (44.45%)
        26,854,551      branch-misses:u           #    0.07% of all branches          (44.44%)
           368,032      page-faults:u                                               

      37.066738839 seconds time elapsed
 Performance counter stats for './benchmark_multicore-alpern.out multicore-alpern': (4 threads)

   641,888,463,914      cycles:u                                                      (55.56%)
   725,112,604,872      instructions:u            #    1.13  insn per cycle           (66.67%)
    21,146,766,868      L1-dcache-stores                                              (66.67%)
    25,812,669,671      L1-dcache-load-misses                                         (66.66%)
     3,339,939,784      LLC-load-misses                                               (66.66%)
    11,816,551,012      cache-misses:u            #   91.499 % of all cache refs      (66.66%)
    12,914,396,198      cache-references:u                                            (44.44%)
    39,975,545,393      branches:u                                                    (44.45%)
        26,758,644      branch-misses:u           #    0.07% of all branches          (44.45%)
           384,771      page-faults:u                                               

      39.312005161 seconds time elapsed
 Performance counter stats for './benchmark_multicore-alpern.out multicore-alpern': (6 threads)

 1,019,011,972,907      cycles:u                                                      (55.55%)
   725,576,759,814      instructions:u            #    0.71  insn per cycle           (66.67%)
    21,154,330,683      L1-dcache-stores                                              (66.67%)
    25,829,865,943      L1-dcache-load-misses                                         (66.68%)
     3,121,272,624      LLC-load-misses                                               (66.67%)
    11,931,220,840      cache-misses:u            #   92.262 % of all cache refs      (66.67%)
    12,931,957,028      cache-references:u                                            (44.44%)
    40,035,562,418      branches:u                                                    (44.44%)
        26,761,499      branch-misses:u           #    0.07% of all branches          (44.44%)
           401,511      page-faults:u                                               

      41.802959436 seconds time elapsed

# 13 num_pairs 10 string_len
 Performance counter stats for './benchmark_simd-alpern.out simd-alpern': (SSE_S=1)

   125,992,438,949      cycles:u                                                      (55.55%)
   370,655,072,253      instructions:u            #    2.94  insn per cycle           (66.66%)
    17,447,593,766      L1-dcache-stores                                              (66.66%)
    12,965,194,603      L1-dcache-load-misses                                         (66.66%)
       116,918,094      LLC-load-misses                                               (66.66%)
     4,643,467,958      cache-misses:u            #   51.309 % of all cache refs      (66.66%)
     9,050,056,074      cache-references:u                                            (44.45%)
    17,546,641,510      branches:u                                                    (44.45%)
         9,006,256      branch-misses:u           #    0.05% of all branches          (44.45%)
            29,840      page-faults:u                                               

      28.583935466 seconds time elapsed
 Performance counter stats for './benchmark_multicore-alpern.out multicore-alpern': (1 thread, sse_s=1)

   123,344,638,464      cycles:u                                                      (55.56%)
   353,815,721,607      instructions:u            #    2.87  insn per cycle           (66.67%)
     8,874,719,494      L1-dcache-stores                                              (66.67%)
    12,966,210,742      L1-dcache-load-misses                                         (66.67%)
       110,503,505      LLC-load-misses                                               (66.67%)
     4,810,068,867      cache-misses:u            #   51.821 % of all cache refs      (66.67%)
     9,282,153,175      cache-references:u                                            (44.43%)
    17,583,717,652      branches:u                                                    (44.44%)
         9,814,042      branch-misses:u           #    0.06% of all branches          (44.43%)
            38,061      page-faults:u                                               

      28.018717256 seconds time elapsed

# Windowed classic
Performance counter stats for './benchmark_windowed.out windowed': (13 and 6)

       661,860,468      cycles:u                                                      (53.96%)
     1,313,578,541      instructions:u            #    1.98  insn per cycle           (65.47%)
       232,689,030      L1-dcache-stores                                              (65.47%)
        24,273,985      L1-dcache-load-misses                                         (66.37%)
             7,762      LLC-load-misses                                               (67.33%)
           352,972      cache-misses:u            #    0.951 % of all cache refs      (68.29%)
        37,114,425      cache-references:u                                            (45.14%)
       267,495,368      branches:u                                                    (44.18%)
           102,573      branch-misses:u           #    0.04% of all branches          (43.22%)
           268,204      page-faults:u                                               

       0.420610571 seconds time elapsed
Performance counter stats for './benchmark_windowed.out windowed': (13 and 10)

   137,025,601,833      cycles:u                                                      (55.56%)
   390,126,527,434      instructions:u            #    2.85  insn per cycle           (66.67%)
     9,185,186,957      L1-dcache-stores                                              (66.67%)
       673,267,107      L1-dcache-load-misses                                         (66.67%)
           927,548      LLC-load-misses                                               (66.67%)
         5,193,231      cache-misses:u            #    0.419 % of all cache refs      (66.67%)
     1,238,915,327      cache-references:u                                            (44.44%)
    28,710,979,981      branches:u                                                    (44.44%)
       234,498,576      branch-misses:u           #    0.82% of all branches          (44.44%)
            17,356      page-faults:u                                               

      32.010710159 seconds time elapsed
 Performance counter stats for './benchmark_windowed.out windowed': (17 and 06)

    10,656,636,709      cycles:u                                                      (55.49%)
    21,239,294,557      instructions:u            #    1.99  insn per cycle           (66.62%)
     3,650,652,175      L1-dcache-stores                                              (66.62%)
       393,736,252      L1-dcache-load-misses                                         (66.64%)
           202,728      LLC-load-misses                                               (66.70%)
         7,250,935      cache-misses:u            #    1.480 % of all cache refs      (66.76%)
       489,889,966      cache-references:u                                            (44.49%)
     4,515,994,015      branches:u                                                    (44.43%)
         2,228,803      branch-misses:u           #    0.05% of all branches          (44.37%)
         4,288,680      page-faults:u                                               

       6.618744535 seconds time elapsed
 Performance counter stats for './benchmark_windowed.out windowed': (17 and 10)

 2,186,967,313,130      cycles:u                                                      (55.55%)
 6,240,979,497,515      instructions:u            #    2.85  insn per cycle           (66.67%)
   146,919,137,010      L1-dcache-stores                                              (66.67%)
    10,793,883,309      L1-dcache-load-misses                                         (66.67%)
        11,029,919      LLC-load-misses                                               (66.67%)
        79,611,239      cache-misses:u            #    1.122 % of all cache refs      (66.67%)
     7,093,110,934      cache-references:u                                            (44.44%)
   459,294,388,403      branches:u                                                    (44.44%)
     3,744,616,301      branch-misses:u           #    0.82% of all branches          (44.44%)
           274,639      page-faults:u                                               

     511.583156497 seconds time elapsed
