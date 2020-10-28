nu_fn () {
  sum=`expr $1 + $2`
  echo "sum($1+$2)=$sum"
  return 0
}

echo "input data (A) ?"
read A

nu_fn $A $1
