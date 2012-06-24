#!/bin/sh
#
# Send 4 bytes (0 0 0 0) to each of a given list of nodes, with a certain interval
# sfsend should be installed
#
delay=120 #Each one should take about 60 seconds, so this kind of time is good
for i in 1 21 31 34 27 40 42 47 62 63 77 79 58 51 78 81 86 87 102 120 113 129 135 137 139
do
nodeId=`expr $i + 40000`
echo "Sending to node $nodeId"
sfsend indriya.comp.nus.edu.sg $nodeId 0 0 0 0 4 0 0 100 0 0 0 0
sleep $delay
done
echo "Experiment complete!"
