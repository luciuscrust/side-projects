#include <stdio.h>


int main(){
	
	char operater;
	printf("please select an operater [ '+', '-', '/', 'x'] :   ");
	scanf("%c", &operater);
	
	
	double num1, num2;
	printf("please input num1:  ");
	scanf("%lf", &num1);
	
	printf("please input num2: ");
	scanf("%lf", &num2);
	
	double result;
	switch(operater){
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '/':
			result = num1 / num2;
			break;
		case 'x':
			result = num1 * num2;
			break;
	    default:
	    	printf("please input a valid  opperator");
	}
	
	printf("\n%.2lf", result);
	
	return 0;
}
