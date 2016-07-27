// Surface Area of Cube: Cube = 6a² (squared)

#include <stdio.h>

int main ()
{
	float area;
	float surfaceArea;
	printf ("Please enter area:");
	scanf("%f", &area);
	surfaceArea = 6 * (area * area);
	printf ("The surface area of your cube is %.3f\n", surfaceArea);
	return 0;
}