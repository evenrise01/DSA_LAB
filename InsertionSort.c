#include <math.h>
#include <stdio.h>

void insertionSort(int arr[], int n){

int i, key , j;

for (i = 1; i < n; i++){
    key = arr[i];
    j = i-1;


    while(j>=0 && arr[j] > key){
        arr[j+1] = arr[j];
        j= j-1;
    }
    arr[j+1] = key;
  }
}

void printArray(int arr[], int n){

    int i = 0;
    for( i= 0; i<n;i++){
        printf ("%d ", arr[i]);
    }
    printf("\n");
}

int main(){

int arr[100],c,n;

printf("Number of elements\n");
scanf("%d",&n);

printf("Enter %d numbers \n",n);

for(c=0;c<n;c++)
    scanf("%d",&arr[c]);
    
    printArray(arr,n);

    insertionSort(arr,n);
    printArray(arr,n);

    return 0;
}
