#include <stdio.h>
int main ()
{
	int a[10][10], b[10][10],r[10][10];
	int r1, c1, r2, c2;
	int i, j, k, choice;
	printf("1. addition\n");
	printf("2. subtraction\n");
	printf("3.transpose\n");
	printf("4.multiplication\n");
	printf("enter your choice:");
	scanf("%d", &choice);
	if (choice == 1 || choice == 2 || choice == 4)
	{
		printf("enter rows and columns of matrix a :");
		scanf("%d %d", &r1, &c1);
		printf("enter rows and columns of matrix b:");
		scanf("%d %d", &r2, &c2);
		if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10 || r2 < 1|| r2 > 10 || c2 < 1 || c2 > 10)
		{
			printf("invalid matrix dimensions. \n");
			return 0;
		}
		if (( choice == 1 || choice == 2) &&
		    (r1 != r2 || c1 != c2))
		    {
		    	printf("addition/subtraction not poosible.\n");
		    	return 0;
		    }
		    if (choice == 4 && c1 != r2)
		    {
		    	printf("multiplication not possible.\n");
		    	return 0;
		    }
		    printf("enter matrix A elements:\n");
		    for (i=0; i<r1; i++)
		         for (j = 0; j < c1; j++);
		              scanf("%d",&a[i][j]);
		    printf("enter matrix B elements:\n");
		    for (i=0; i<r2; i++)
		        for (j=0;j<c2;j++)
		        scanf("%d", &b[i][j]);
		    if (choice == 1|| choice == 2)
		    {
		    	for (i =0; i <r1; i++)
		    	    for (j = 0; j<c1; j++)
		    	    {
		    	    	if (choice == 1)
		    	    	r[i][j] = a[i][j] + b[i][j];
		    	    	else
		    	    	r[i][j] = a[i][j] - b[i][j];
		    	    }
		    	}
		    	else 
		    	{
		    		for (i = 0; i < r1;i++)
		    		    for (j=0; j < c2; j++)
		    		    {
		    		    	r[i][j] =0;
		    		    	for(k =0; k< c1;k++)
		    		    	   r[i][j] += a[i][k] * b[k][j];
		    		    }
		    		    c1=c2;
		    		}
		    		printf("result matrix:\n");
		    		for (i =0; i < r1;i++)
		    		{
		    			for (j = 0; j < c1; j++)
		    			    printf("%d",r[i][j]);
		    			printf("\n");
		    		}
		    	}
		    	else if (choice == 3)
		    	{
		    		printf("enter rows and columns :");
		    		scanf("%d %d", &r1,&c1);
		    		if (r1 < 1 || r1 > 10 || c1 < 1 ||c1 > 10)
		    		{
		    			printf("invalid matrix dimensions.\n");
		    			return 0;
		    		}
		    		printf("enter matrix elements:\n");
		    		for (i = 0; i< r1;i++)
		    		   for (j = 0; j< c1; j++)
		    		   scanf("%d", &a[i][j]);
		    		printf("transpose matrix: \n");
		    		for (j = 0; j < c1;j++)
		    		{
		    			for (i=0;i<r1;i++)
		    			    printf("%d",a[i][j]);
		    			printf("\n");
		    		}
		    	}
		    	else
		    	{
		    		printf("invalid choice.\n");
		    	}
		    	return 0;
}

