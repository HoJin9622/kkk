if [ $1 -eq 1 ]
then
  echo HOME directory: $HOME
else
  if [ $1 -eq 2 ]
  then
    echo PATH information: $PATH
  else
    echo 잘못된 명령입니다.
  fi
fi

