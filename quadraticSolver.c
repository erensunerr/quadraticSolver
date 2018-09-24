#include<stdio.h>
#include<math.h>

int main(){
	while(1){
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
	printf("Determinant (approximately) is %f\n", determinant);

	//Check for complex roots
	int isRComplex = 0;
	if (determinant < 0) {
		determinant = -determinant;
		isRComplex = 1;
	}
	
	double sqrtOfDeterminant = sqrt(determinant);
	
	
	if (!isRComplex){
		//Roots
    r[0] = (-b + sqrtOfDeterminant) / (2*a);
    r[1] = (-b - sqrtOfDeterminant) / (2*a);
		printf("Roots of the quadratic (approximately) are:\n %f , %f\n",r[0],r[1]);
	}
	
	else{
	  //Roots
		r[0] = -b / (2*a);
    r[1] = sqrtOfDeterminant / (2*a);
  	if (r[1] != 1){
			printf("Roots of the quadratic (approximately) are:\n %f + %fi , %f - %fi\n",r[0],r[1],r[0],r[1]);
		}
		else {
			if(r[1] == 0){
				printf("Roots of the quadratic (approximately) are:\n %f , %f\n",r[0],r[1]);
			}
			else{
				printf("Roots of the quadratic (approximately) are:\n %f + i , %f - i\n",r[0],r[0]);
			} 	
		}
		}
	}
	return 0;
}
