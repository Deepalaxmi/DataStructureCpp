//
//  main.cpp
//  selectionSort2
//
//  Created by Kh. Deepalaxmi on 09/05/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//

#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i =0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n){
    int minIndex;
    for (int i = 0; i < n-1; i++){
        minIndex = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

int main() {
    //code
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for (int i = 0; i <n;i++)
        {
            cin>> arr[i];
        }
        selectionSort(arr,n);
        printArray(arr,n);
        
    }
    
    return 0;
}
