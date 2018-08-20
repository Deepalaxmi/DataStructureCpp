//
//  main.cpp
//  sp_hashing22
//
//  Created by Kh. Deepalaxmi on 20/08/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//Array Pair Sum Divisibility Problem
//https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem/0/?ref=self

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool pairSumDivisibility(int arr[], int n, int k){
    map<int,int>m;
    for (int i =0; i<n; i++) {
        m[arr[i] % k]++;
    }
    
    for (int i = 0; i<n; i++) {
        int rem = arr[i] % k;
        if (rem == k/2) {
            if (m[rem]%2 != 0) {
                return false;
            }
        }else if (rem == 0){
            if (m[rem] & 1) {
                return false;
            }
        }else if (m[rem] != m[k-rem]){
            return false;
        }
    }
    return true;
}



int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int k;
        cin >> k;
        pairSumDivisibility(arr, n, k) ? cout << "True" : cout << "False";
        cout<<endl;
    }

    return 0;
}
