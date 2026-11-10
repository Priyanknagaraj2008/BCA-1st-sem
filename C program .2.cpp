# include <stdio.h>
int main (){
	float length, width, radius, base, height;
	float area, perimeter;
	const float pi = 3.14159f;
	printf("enter rectangle legth and width");
	scanf("%f %f",&length, &width);
	printf("rectangle area = %.2f\n",length*width);
	printf("rectangle perimeter = %.2f\n",2*(length+width));
	printf("enter circleb radius");
	scanf("%f", & radius);
	printf("circle area = %.2f\n",pi*radius*radius);
	printf("circle circumference = %.2f\n",2*pi* radius);
	printf("enter triangle base and height");
	scanf("%f %f", &base, &height);
	area = 0.5 *base *height;
	printf("triangle area = %.2f\n",area);
	return 0;
	
} 
