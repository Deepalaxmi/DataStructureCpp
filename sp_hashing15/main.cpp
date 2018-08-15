//
//  main.cpp
//  sp_hashing15
//
//  Created by Kh. Deepalaxmi on 15/08/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
// https://practice.geeksforgeeks.org/problems/numbers-containing-1-2-and-3/0/?track=SP-Hashing
// Numbers containing 1, 2 and 3

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void find(long int arr[], long int n){
    vector<long int>v1;
    for (long int i = 0; i<n; i++) {
        string s = to_string(arr[i]);
        if (s.find("0") != string::npos || s.find("4") != string::npos || s.find("5") != string::npos|| s.find("6") != string::npos|| s.find("7") != string::npos|| s.find("8") != string::npos || s.find("9") != string::npos) {
            
        }else{
            v1.push_back(arr[i]);
        }
    }
    
    if(v1.size() > 0){
        sort(v1.begin(), v1.end());
        for (int i = 0; i< v1.size(); i++) {
            cout << v1[i] << " ";
        }
    }else{
        cout << -1 ;
    }
    cout << endl;
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin >> t;
    for (int i =0; i<t;i++){
        long int n;
        cin >> n;
        long int arr[n];
        for (long int j = 0; j<n; j++) {
            cin >> arr[j];
        }
        find(arr, n);
    }

    return 0;
}
