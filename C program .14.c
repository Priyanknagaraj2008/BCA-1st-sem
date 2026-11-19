#include <stdio.h>
int main (){
	int a[100], n, key, i, frequency = 0;
	printf("enter number of elements");
	scanf("%d",&n);
	if (n<1||n>100)
	{
		printf("invalid array size.\n");
		return 0;
	}
	printf("entervarray  elements");
	for (i=0; i<n; i++)
	scanf("%d", &a[i]);
	printf("enter array elements");
	for (i=0; i<n; i++)
	scanf("%d",&a[i]);
	printf("enter element to search");
	scanf("%d", &key);
	for (i=0; i<n; i++)
	{
		if (a[i]==key)
		{
			printf("found at position %d\n", i+1);
			frequency++;
		}
	}
	if (frequency==0)
	printf("element not found.\n");
	else
	printf("total frequency =%d\n",frequency);
	return 0;
}