#include <stdio.h>
#include <math.h>

int main(){
	double base, exponent, result;
	
	printf("please input base: ");
	scanf("%lf", &base);
	
	printf("please input the exponent: ");
	scanf("%lf", &exponent);
	
	result = pow(base,exponent);
	printf("%.1lf pow %.1lf = %.2lf",base, exponent, result);
	return 0;
}
