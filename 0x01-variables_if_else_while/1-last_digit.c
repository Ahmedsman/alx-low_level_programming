/*
*File:1-last_digit.c
*Task 1
*/

#include stdlib.h
#include time.h
#include stdio.h
/*print the last digit of the number stored in the variable n
*if the last digit is greater than 5, equal to  0 and if it is less than 6
*Return: Always 0.
*/
int main (void)

{
	int n;
	int l;
	
	Srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	
return (0);
}
