#include <stdio.h>

void BubbleSort(int arr[],int n){
int temp;
	for(int i =0; i<n-1;i++){
		for (int j = 0; j<n-i-1;j++){
			
			if(arr[j] > arr[j+1])

			temp = arr[j];    //temp variable = first variable
			arr[j] = arr[j+1]; 
			arr[j+1] = temp;
		}
	}

}

void PrintArray(int arr[],int n){
	int i;
	for (i=0;i<n;i++){
		printf("%d",arr[i]);
		
	}
	printf("\n");
}

int main(){

int arr[100];
int n = sizeof(arr)/sizeof(arr[0]);

printf("Enter the number of elements: \n");
scanf("%d", &n);

for (int i = 0; i< n; i++){  // Input of the Array
	scanf("%d",&arr[i]);

}

printf("Unsorted Array: \n");
PrintArray(arr,n); //Unsorted Array Print
BubbleSort(arr,n);

printf("Sorted Array: \n");
PrintArray(arr,n); //Sorted Array Print

return 0;

}
