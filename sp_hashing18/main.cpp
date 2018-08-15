//
//  main.cpp
//  sp_hashing18
//
//  Created by Kh. Deepalaxmi on 16/08/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//Check if array contains contiguous integers with duplicates allowed
//https://practice.geeksforgeeks.org/problems/check-if-array-contains-contiguous-integers-with-duplicates-allowed/0/?ref=self

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void isContinuous(int arr[], int n){
    vector<int>v;
    for (int i =0; i<n; i++) {
        v.push_back(arr[i]);
    }
    
    int min = *min_element(v.begin(), v.end());
    int max = *max_element(v.begin(), v.end());
    
    for (int i = min; i<=max; i++) {
        if(find(v.begin(),v.end(),i) != v.end()){
            
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
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        isContinuous(arr, n);
        cout<<endl;
    }
    return 0;
}
