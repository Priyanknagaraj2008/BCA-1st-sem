#include <stdio.h>
int main (){
	int m1, m2, m3, m4, m5, total;
	float percentage;
	printf("enter marks in five subjects");
	scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
	total = m1 + m2 + m3 + m4 + m5;
	percentage = total / 5.0f;
	printf("total marks = %d\n",total);
	printf("percentage = %.2f%%\n",percentage);
	if(m1 < 35|| m2 < 35|| m3 < 35||
	m4 < 35||m5 < 35)
{
	printf("result:fail\n");
}
else if (percentage >= 75)
{
	printf("result: distinction\n");
}
else if (percentage >= 60)
{
	printf("result: frist class\n");
}
else if (percentage >= 50)
{
	printf("result: second class\n");
}
else
{
	printf("result: pass class\n");
}

 return 0;
}
	

