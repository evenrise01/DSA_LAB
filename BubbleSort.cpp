#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n){

    for (int i = 0; i < n-1 ; i++){
        for( int j = 0; j<n-i-1;j++)
        if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    }
}

void printArray(int arr[],int n){

    for (int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";
}

int main(){

    int arr[1000];
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i<n;i++){
        cin >> arr[i];

    }
    cout << "Unsorted Array: ";
    printArray(arr,n);

    BubbleSort(arr,n);
    cout << "Sorted Array: ";
    printArray(arr,n);

    return 0;
}
