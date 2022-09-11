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
	
	Srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	
	return (0);
