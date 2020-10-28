#!/bin/bash
if [ -r AA.txt ]
then
  cat AA.txt
else 
  echo "Enter the data for filename"
  exec cat > AA.txt
fi

