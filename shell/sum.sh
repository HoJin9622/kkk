num=$1
result=0
while [ $num -gt 0 ]
do
  result=$(($result+$num))
  num=$(($num-1))
done

echo sum result\(0 : $1\) \= $result
