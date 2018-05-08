//
//  main.cpp
//  DoesArrayHeap
//
//  Created by Kh. Deepalaxmi on 06/05/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//

#include <iostream>
using namespace std;


void printArray(int arr[], int n)
{
    for (int i=0; i<n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

bool isHeap(int arr[], int n){
    for (int i = 0; i >= n/2-1 ; i++){
        int left = 2*i + 1;
        int right = 2*i +2;
        
        if(left < n && arr[left] > arr[i]){
            return false;
        }
        
        if ( right < n && arr[right] > arr[i]){
            return false;
        }
        
    }
    return true;
}



int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int t;
    cin >> t;
    for (int i =0; i<t;i++){
        int n;
        cin >> n;
        int arr[n];
        for (int j=0; j < n; j++){
            cin >> arr[j];
        }
        if (n ==1) {
            cout << "1\n";
        }else{
            if (isHeap(arr, n)) {
                cout << "1\n";
            }else{
                cout << "0\n";
            }
        }
        
//        printArray(arr, n);
    }
    
    return 0;
}
