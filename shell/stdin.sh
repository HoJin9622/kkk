echo Enter valid run command letter \( 1 or 2\) :
read num

if [ $num -eq 1 ]
then
  ls
else
  if [ $num -eq 2 ]
  then
    pwd
  else
    echo 1 또는 2를 입력해주세요.
  fi
fi

