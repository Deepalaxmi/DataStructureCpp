//
//  main.cpp
//  sp_hashing4
//
//  Created by Kh. Deepalaxmi on 16/07/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//  Non-Repeating Element
//  https://practice.geeksforgeeks.org/problems/non-repeating-element/0/?ref=self

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int firstNonRepeatingNumber(int arr[], int n){
    map<int, int>m;
    for (int i = 0; i<n; i++) {
        m[arr[i]]++;
    }
    
    for (int i = 0; i<n; i++) {
        if (m[arr[i]] == 1) {
            return arr[i];
        }
    }
    return 0;
    
}

int firstNonRepeatingNumber2(int arr[], int n){
    map<int,int>m;
    for (int i = 0; i<n; i++) {
        m[arr[i]]++;
    }
    for (auto itr : m) {
        if (itr.second == 1) {
            return itr.first;
        }
    }
    return 0;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin >> t;
    for (int i =0; i<t; i++) {
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j<n; j++) {
            cin >> arr[j];
        }
        cout << firstNonRepeatingNumber(arr, n) << endl;
    }
    return 0;
}
