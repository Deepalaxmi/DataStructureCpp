//
//  main.cpp
//  sp_hashing21
//
//  Created by Kh. Deepalaxmi on 19/08/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//Swapping pairs make sum equal
//https://practice.geeksforgeeks.org/problems/swapping-pairs-make-sum-equal/0/?ref=self

/*sum1 -a + b = sum2 +a - b
2a -2b = sum1 - sum2
 a-b = (sum1 - sum2)/2
 a = (sum1-sum2)/2 + b
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swapPair(int arr[], int n, int arr2[], int m){
    int sum1 = 0;
    map<int , int>mp;
    for (int i =0; i<n; i++) {
        sum1 += arr[i];
        mp[arr[i]]++;
    }
    
    int sum2=0;
    for (int j = 0; j<m; j++) {
        sum2 += arr2[j];
    }
    
    if (abs(sum1 - sum2) %2 != 0) {
        cout << "-1";
        return;
    }
    int diff = (sum1 - sum2)/2;
    for (int j = 0; j<m; j++) {
        if (mp.find(arr2[j] + diff) != mp.end()) {
            cout << "1";
            return;
        }
    }
    cout << "-1";
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n >>m;
        int arr[n], arr2[m];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<m;i++)
            cin>>arr2[i];
        
        swapPair(arr, n, arr2, m);
        cout<<endl;
    }
    return 0;
}
