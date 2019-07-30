reset
set term png enhanced font 'Verdana,10'
set output "runtime.png"
set xlabel "Iteration"
set ylabel "Best"
set title "OneMaxSA"
set autoscale xfix
plot [:][40:150]'output1.dat' using 1:2  with line lw 1.5 title "" ,\
'output2.dat' using 1:2 with line lw 1.5 title "" , \
'output2.dat' using 1:2 with line lw 1.5 title "" , \
'output3.dat' using 1:2 with line lw 1.5 title "" , \
'output4.dat' using 1:2 with line lw 1.5 title "" , \
'output5.dat' using 1:2 with line lw 1.5 title "" , \
'output6.dat' using 1:2 with line lw 1.5 title "" , \
'output7.dat' using 1:2 with line lw 1.5 title "" , \
'output8.dat' using 1:2 with line lw 1.5 title "" , \
'output9.dat' using 1:2 with line lw 1.5 title "" , \
'output10.dat' using 1:2 with line lw 1.5 title "" , \
'output11.dat' using 1:2 with line lw 1.5 title "" , \
'output12.dat' using 1:2 with line lw 1.5 title "" , \
'output13.dat' using 1:2 with line lw 1.5 title "" , \
'output14.dat' using 1:2 with line lw 1.5 title "" , \
'output15.dat' using 1:2 with line lw 1.5 title "" , \
'output16.dat' using 1:2 with line lw 1.5 title "" , \
'output17.dat' using 1:2 with line lw 1.5 title "" , \
'output18.dat' using 1:2 with line lw 1.5 title "" , \
'output19.dat' using 1:2 with line lw 1.5 title "" , \
'output20.dat' using 1:2 with line lw 1.5 title ""  