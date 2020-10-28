if [ -r in.txt ]
then
  data1=`cut -c 1 in.txt`
  echo "\$data1=$data1"
  data2=`cut -c 3 in.txt`
  echo "\$data2=$data2"
else
  echo "File : not found"
fi

data3=$(($data1 + $data2))

printf "%s" "Result : A + B = "
printf "%d\n" $data3
echo "\$data3=$data3"

echo $data3 > out.txt
