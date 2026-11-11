#include <stdio.h>
int main (){
	int a, b, c;
	printf("enter three integers");
	scanf("%d %d %d, &a, &b, &c");
	if (a==b && b==c)
	{
		printf("all three numbers are equal.\n");
	}
	else if (a==b)
	{
		printf("first and second numbers are equal.\n");
		printf("largest = %d\n", a>c? a:c);
	}
	else if (a==c)
	{
		printf("first and third numbers are equal.\n");
		printf("largest = %d\n", a>b? a:b);
	}
	else if (b==c)
	{
		printf("second and third numbers are equal.\n");
		printf("largest = %d\n", b>a? b:a);
	}
	else if (a>c)
	{
		if (a>c)
		printf("largest =%d\n", a);
		else
		printf("largest =%d\n", c);
	}
	else 
	{
		if (b>c)
		printf("largest =%d\n", b);
		else
		printf("largest =%d\n", c);
	}
	return 0;
}