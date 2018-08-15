//
//  main.cpp
//  sp_hashing17
//
//  Created by Kh. Deepalaxmi on 16/08/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//Array Subset of another array
//https://practice.geeksforgeeks.org/problems/array-subset-of-another-array/0/?track=SP-Hashing

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void isSubset(int arr1[], int n, int arr2[], int m){
    map<int, int>mp;
    for (int i = 0; i<n; i++) {
        mp[arr1[i]]++;
    }
    
    for (int i = 0; i<m; i++) {
        if (mp[arr2[i]] > 0) {
            mp[arr2[i]]--;
        }else{
            cout << "No";
            return;
        }
    }
    cout << "Yes";
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int a2[m];
        for(int i=0;i<m;i++)
            cin>>a2[i];

        isSubset(a, n, a2, m);
        cout<<endl;
    }

    return 0;
}
