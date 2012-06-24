#set terminal canvas solid butt size 1024, 768
set terminal svg size 1280, 720
set style data histograms
set style histogram cluster gap 1
#plot "HALF" using 1:2 title "HALF pattern"
#replot "ALT1" index 0:0 using 1:2:3  title "ALT1 pattern"
set xtics mirror rotate by 90 font ",7" offset 0,-1.5
set xtics 1 
set title "Packets Received Per Node"
set xlabel "Node ID"
set ylabel "Packets Received"
plot "ALT1_analysis" u ($1-0.2):2 w impulses t "ALT1 Pattern", "HALF_analysis" u ($1+0.2):2 w impulses t "HALF Pattern"
#pause -1
