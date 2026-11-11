#include <stdio.h>
int main (){
	int n, temp, digit, count = 0;
	int sum = 0, power, i;
	printf("enter a positive integer");
	scanf("%d", &n);
	if (n <= 0)
	{
		printf("please enter a positive integer.\n");
		return 0;
	}
	temp = n;
	while (temp > 0)
	{
		count++;
		temp = temp /10;
	}
	temp = n;
	while (temp >0)
	{ 
	   digit = temp %10;
	   power= 1;
	   for (i = 1; i <=count; i++)
	       power = power *digit;
	       sum = sum + power;
	       temp = temp/10;
	}
	if (sum == n)
	   printf("%d is an armstrong number.\n",n);
	else
	   printf("%d is not an armstrong number.\n",n);
	   return 0;
}