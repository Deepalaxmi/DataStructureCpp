//
//  main.cpp
//  sp_hashing19
//
//  Created by Kh. Deepalaxmi on 16/08/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
// Zero Sum Subarrays
// https://practice.geeksforgeeks.org/problems/zero-sum-subarrays/0/?track=SP-Hashing

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void countZeroSumSubArray(int arr[], int n){
    map<int,int> m; // sum of sub array starting from 0th index and ending at ith
    int s = 0, cZ = 0;
    for (int i =0; i<n; i++) {
        s = s + arr[i];
        
        if(s == 0){
            cZ++;
        }
        if ( m.find(s) != m.end()) {
            cZ = cZ + m[s];
        }
        m[s]++;
//        cout << s << "  ---> " << m[s];
//        cout << endl;
//        cout << cZ ;
//        cout << endl;
    }
    cout << m[100];
    cout<< cZ;
}

void subArrExist(int arr[], int n){
    set<int> set;
    int sum = 0;
    int cZ = 0;
    for (int i = 0; i<n; i++) {
        sum = sum + arr[i];
        
        if (sum == 0) {
            cZ++;
        }
        if ( set.find(sum) != set.end()) {
            cZ++;
        }
        set.insert(sum);
    }
    cout << cZ;
}

void printAllSubarrayWithSumZero(int arr[], int n){
    vector<pair<int, int>> result;
    map<int,vector<int>> m;
    int sum = 0;
    for (int i = 0 ; i<n; i++) {
        sum = sum + arr[i];
        if(sum == 0){
            result.push_back(make_pair(0, i));
        }
        
        if (m.find(sum) != m.end()) {
            vector<int> vc = m[sum];
            for (int j = 0; j<vc.size(); j++) {
                result.push_back(make_pair(vc[j]+1, i));
            }
        }
        m[sum].push_back(i);
        
    }
    
    // result sub arrays
    for (auto itr = result.begin(); itr != result.end(); itr++) {
        cout << itr->first << " - " << itr->second << endl;
        
    }
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
        
        
//        countZeroSumSubArray(arr, n);
        printAllSubarrayWithSumZero(arr,n);
//        subArrExist(arr,n);
        cout<<endl;
    }
    return 0;
}
