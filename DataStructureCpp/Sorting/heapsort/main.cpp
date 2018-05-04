//
//  main.cpp
//  heapsort
//
//  Created by Kh. Deepalaxmi on 03/05/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//

#include <iostream>
using namespace std;

void heapify(int arr[], int index, int n){
    int left = 2*index + 1;
    int right = 2*index + 2;
    int largest = index;
    if (n > left && arr[largest] < arr[left] ){
        largest = left;
    }
    if (n > right && arr[largest] < arr[right])
    {
        largest = right;
    }
    
    if (largest != index){
        swap(arr[index], arr[largest]);
        heapify(arr,largest,n);
    }
    
}


void heapsort(int arr[], int n){
    //build heap
    for (int i = n/2-1; i >= 0 ; i--){
        heapify(arr,i,n);
    }
    
    //one by one extract
    for (int j = n-1; j >= 0; j--){
        swap(arr[0], arr[j]);
        heapify(arr,0,j);
    }
    
    
}

void printArray(int arr[], int n)
{
    for (int i=0; i<n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World! heap sort\n";
    
    cout << "Input 5 array elements\n";
    int arr[] = {
        12,10,2,45,4
    };
    printArray(arr, 5);
    heapsort(arr, 5);
    printArray(arr, 5);
    return 0;
}





