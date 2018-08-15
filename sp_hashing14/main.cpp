//
//  main.cpp
//  sp_hashing14
//
//  Created by Kh. Deepalaxmi on 15/08/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
// https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times/0/?ref=self
//First element to occur k times

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void firstElement(long int arr[], long int n, long int k){
    map<long int, long int>m;
    for (long int i = 0; i<n; i++) {
        m[arr[i]]++;
    }
    
    for (long int i = 0; i<n; i++) {
        if(m[arr[i]] == k){
            cout << arr[i] << endl;
            break;
        }
    }
    cout << -1 << endl;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin >> t;
    for (int i =0; i<t;i++){
        long int n, k;
        cin >> n >> k;
        long int arr[n];
        for (long int j = 0; j<n; j++) {
            cin >> arr[j];
        }
        firstElement(arr, n, k);
    }
    return 0;
}
