#include<stdio.h>
#include<math.h>

int main(){
	// Init
	double a = 0, b = 0, c = 0, r[2];
	printf("Ax^2 + Bx + C = 0\a\n");
	
	// Getting Input
	printf("A = ");
	scanf("%lf",&a);
	printf("B = ");
	scanf("%lf",&b);
	printf("C = ");
	scanf("%lf",&c);
	printf("[LOG] A = %f, B = %f, C = %f\a\n",a,b,c);
	
	//Determinant
	double determinant = (b*b) - (4*a*c);
	double sqrtOfDeterminant = sqrt(determinant);
	printf("Determinant is %f\n", determinant);
	
	//Roots
	r[0] = (-b + sqrt(determinant)) / (2*a);
	r[1] = (-b - sqrt(determinant)) / (2*a);
	printf("Roots of the quadratic are:\n %f , %f\n",r[0],r[1]);
	return 0;
}
