#include <stdio.h>
#include <math.h>

double power(double a, double b){
	 double result = pow(a,b);
	// printf("the value of %lf raised to the power of %lf = %lf\n",a , b, result);
	 return result;
}
double square_root(double num1){
	double square = sqrt(num1);
	//printf("the square root of %lf = %lf", num1, square);
	return square;
}

int main(){
	
	double a,b;
	printf("Please input the base number : ");
	scanf("%lf",&a);
	
	printf("\nPlease input the exponent: ");
	scanf("%lf",&b);
	
	double result = power(a,b);
	printf("%.2lf raised to the exponent of %.2lf = %.2lf\n",a, b, result);
	
	double square = square_root(result);
	printf("the square root of %.2lf = %.2lf\n",result,square);

	
	
	return 0;
}
