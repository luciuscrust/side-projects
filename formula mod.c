#include <stdio.h>

int main(){
	
	double a, m , b;
	//take input for values for transposed formula
	printf("please input the values in the order (a, m, b): ");
	scanf("%lf", &a);
	scanf("\n%lf", &m);
	scanf("\n%lf", &b);
	
	//use input and transposed formula to calculate "k"
	double sum = a - b;
	double k = sum / m;
	printf("k = %.2lf", k);
	
	//calculate if it is valid by replacing k with its value ad solving
	double mod = k*m+b;
	printf("\n\n\nA = %.2lf", mod);
	
	return 0;
}
