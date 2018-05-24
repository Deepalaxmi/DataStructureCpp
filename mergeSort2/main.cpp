//
//  main.cpp
//  mergeSort2
//
//  Created by Kh. Deepalaxmi on 25/05/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//

#include <iostream>
using namespace std;

void merge1(int arr[], int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r-mid;
    int L[n1], R[n2];
    for (int i = 0;i<n1;i++){
        L[i] = arr[l + i];
    }
    
    for (int j =0; j<n2; j++) {
        R[j] = arr[mid+j+1];
    }
    int i =0, j =0,k=l;
    
    while (i< n1 && j<n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            k++;
            i++;
            
        }else{
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    
    while (i<n1) {
        arr[k]=L[i];
        i++;
        k++;
    }
    
    while (j<n2) {
        arr[k]=R[j];
        j++;
        k++;
    }
    
    
}

void merge2(int arr[],int l, int mid, int r){
    int n1 = mid - l +1;
    int n2 = r-mid;
    int L[n1+1], R[n2+1];
    for (int i =0; i<n1; i++) {
        L[i]= arr[l+i];
    }
    L[n1]= INT_MAX;
    
    for (int j =0; j<n2; j++) {
        R[j] = arr[mid+1+j];
    }
    R[n2]= INT_MAX;
    
    int i = 0, j = 0;
    for (int k = l; k<=r; k++) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }else{
            arr[k] = R[j];
            j++;
        }
    }
}


void mergesort(int arr[], int l, int r){
    if(r > l){
        int mid = l + (r-l)/2;
        mergesort(arr, l, mid);
        mergesort(arr, mid+1, r);
        //        merge1(arr, l, mid, r);
        merge2(arr, l, mid, r);
        
    }
}

void printArray(int arr[], int n){
    for (int i =0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int arr[] = {12, 11, 13, 5, 6, 7};
//    int arr[] = {};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    
    mergesort(arr, 0, arr_size-1);
    printArray(arr, arr_size);
    return 0;
}

