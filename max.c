#include <stdio.h>

int max(int num1, int num2);


int main(){
	
	int a, b, result;
	
	printf("Please input value A: ");
	scanf("%d",&a);
	
	printf("Please input value B: ");
	scanf("%d",&b);
	
	result = max(a,b);
	
	printf("Max value = %d", result);
	
	
	
	
	return 0;
}

int max(int num1, int num2){
	
	if(num1 > num2){
		return num1;
		
	}
	else if(num2>num1){
		return num2;
		
	}
	else {
		printf("The values are equal");
	}
}
