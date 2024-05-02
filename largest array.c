#include <stdio.h>


int main(){
	
	int arr[] = {31,12,21,54,48};
	
	int largest = *arr;
	
	int i;
	for(i = 0;i<5;++i){
		if(largest <arr[i]){
			largest = arr[i];
		}
		
	
	}
	
	printf("%d", largest);
	
	
	return 0;
}
