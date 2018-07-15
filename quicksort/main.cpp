//
//  main.cpp
//  quicksort
//
//  Created by Kh. Deepalaxmi on 28/05/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//

#include <iostream>
using namespace std;

int partition(int a[],int l, int h){
    int pivot = h;
    int i = l-1, j = l;
    for (j = l; j<= h -1; j++) {
        if (a[j] <= a[pivot]) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[pivot]);
    return i+1;
    
    
}

void quicksort(int a[], int l, int h){
    if (l<h){
        int pivot = partition(a,l,h);
        quicksort(a, l, pivot-1);
        quicksort(a, pivot+1, h);
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
        quicksort(arr, 0, n-1);
        printArray(arr,n);
        
    }
    return 0;
}
