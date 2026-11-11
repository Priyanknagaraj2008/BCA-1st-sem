#include <stdio.h>
int main (){
	int n, temp, digit;
	int count = 0, sum = 0, reverse = 0;
	printf("enter a positive integer");
	scanf("%d", &n);
	if ( n<= 0)
	{
		printf("please enter a positive integer.\n");
		return 0;
	}
	temp = n;
	while (temp > 0)
	{
		digit = temp % 10;
		count++;
		sum = sum + digit ;
		reverse = reverse * 10 + digit;
		temp = temp /10;
	}
	printf("number of digits = %d\n", count);
	printf("sum of digits = %d\n", sum);
	printf("reversed number = %d\n", reverse);
	if (n == reverse)
	    printf("palindrome number .\n");
	else 
	    printf("not a palindrome number .\n");
	    return 0;
}
	