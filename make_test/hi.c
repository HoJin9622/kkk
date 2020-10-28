#include <stdio.h>
int input();
int output(int);
int main()
{
	int n;
	n = input();
	if(!(output(n)))
		printf("Good bye!\n");
	return 0;
}
