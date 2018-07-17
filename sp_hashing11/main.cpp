//
//  main.cpp
//  sp_hashing11
//
//  Created by Kh. Deepalaxmi on 17/07/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//  Most frequent word in an array of strings
//  https://practice.geeksforgeeks.org/problems/most-frequent-word-in-an-array-of-strings/0/?track=SP-Hashing

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void mostFrequentWord(string arr[], int n){
    map<string, int>m;
    for(int i = 0;i<n;i++){
        m[arr[i]]++;
    }
    int maxCount = 0;
    string w;
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        if (maxCount < itr->second) {
            maxCount = itr->second;
            w = itr->first;
        }
    }
    cout << w;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin >> t;
    for(int i = 0; i<t;i++){
        int n;
        cin >> n;
        string arr[n];
        for(int j = 0;j<n;j++){
            cin >> arr[j];
        }
        mostFrequentWord(arr, n);
        cout << endl;
    }
    return 0;
}
