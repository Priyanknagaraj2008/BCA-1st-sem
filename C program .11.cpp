# include <stdio.h> 
int main (){
	int n, i;
	unsigned long long fact = 1;
	int a=0 , b=1 , c;
	printf("enter a non-negative integer for factorial");
	scanf("%d", &n);
	if (n<0 || n>20)
	{
		printf("enter a number between 0 and 20.\n");
	}
	else
	{ 
		for (i=1; i<=n; i++)
		fact = fact * i;
		printf("factorial = % llu\n",fact);
	}
	printf("enter number of fibonancci term");
	scanf("%d", &n);
	if(n<=0)
	{
		printf("enter a positive number of terms,\n");
	}
	else
	{
		printf("fibonacci series");
		for (i=1; i<=n; i++)
	  {
	  	printf("%d", a);
	  	c = a+b;
	  	a = b;
	  	b = c;
	  }
	  printf("\n");
    }
    return 0;
}

 
