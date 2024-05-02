#include <stdio.h>

int main(){
	
	int index;
	int i;
    int u;
	
	printf("Please input the amount of numbers you would like to compare: ");
	scanf("%d",&index);
	int array[index];
	
	if(index<2 ){
		printf("There is no second largest number!!!");
		return 0;
	}
	else{
		for (i = 0; i<index; ++i){
			printf("Input number %d: ", i);
			scanf("%d",&array[i]);
		}
	}
	
	int largest = array[0];
    int largest2 = array[1];

    for ( u = 0; u < index; ++u) {
        if (array[u] > largest) {
            largest2 = largest;
            largest = array[u];
        } else if (array[u] > largest2 && array[u] < largest) {
            largest2 = array[u];
        }
    }
    printf("The second largest number is: %d\n", largest2);
	
	
	
	return 0;
}
