//
//  main.cpp
//  sp_hashing5
//
//  Created by Kh. Deepalaxmi on 16/07/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
// Rearrange an array such that arr[i] = i
// https://practice.geeksforgeeks.org/problems/rearrange-an-array-such-that-arri-i/0/?ref=self

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void rearrange(int arr[], int n){
    int output[n];
    for (int i =0; i<n; i++) {
        output[i] = -1;
    }
    
    for (int i =0; i<n; i++) {
//        cout << arr[i] <<"-----"<< endl;
        if (arr[i] != -1) {
            output[arr[i]] = arr[i];
//            cout << output[arr[i]] <<"*****" << endl;
        }
    }
    printArray(output, n);
    
}

void rearrange2(int arr[], int n){
    map<int , int> m;
    for (int i =0; i<n; i++) {
        m[arr[i]]++;
    }
    
    for (int i =0; i<n; i++) {
        if (m[i] > 0) {
            cout << arr[i] << " ";
        }else{
            cout << "-1 ";
        }
    }
    cout << endl;
}



int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin >> t;
    for (int i = 0; i<t; i++) {
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j<n; j++) {
            cin >> arr[j];
        }
//        rearrange(arr, n);
        rearrange2(arr, n);
    }
    return 0;
}
