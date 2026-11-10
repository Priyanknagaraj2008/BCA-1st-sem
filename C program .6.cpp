#include <stdio.h>
int main (){
	int a,b,choice;
	printf("enter two integers");
	scanf("%d %d", &a , &b);
	printf("\n1. addition");
	printf("\n2.subtraction");
	printf("\n3.multiplication");
	printf("\n4.division");
	printf("\5. remainder");
	printf("\n enter your choice");
	scanf("%d",&choice);
	switch  (choice)
	{
		case1:
			printf("sum = %d\n", a+b);
			break;
		case2:
			printf("difference = %d\n", a-b);
			break;
		case3:
			printf("product = %d\n", a*b);
			break;
		case4:
			if (b!=0)
			printf("quotient = %d\n",a/b);
			else
			printf("division by zero is not possible./n");
			break;
	    case5:
			if (b!=0)
			printf("remainder = %d\n",a%b);
			else
			printf("remainnder by zero is not possible./n");
			break;
		default:
			printf("invalid choice.\n");
	}
	return 0;
	
}
