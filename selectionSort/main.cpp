//
//  main.cpp
//  selectionSort
//
//  Created by Kh. Deepalaxmi on 09/05/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    int minIndex;
    for (int i = 0; i < n-1; i++) {
        minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void printArray(int arr[], int n){
    for (int i =0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int arr[5] = {34,1,5,78,22};
    selectionSort(arr,5);
    printArray(arr, 5);
    return 0;
}
