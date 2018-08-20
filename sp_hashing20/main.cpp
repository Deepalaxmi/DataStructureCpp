//
//  main.cpp
//  sp_hashing20
//
//  Created by Kh. Deepalaxmi on 19/08/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//Count distinct pairs with difference k
//https://practice.geeksforgeeks.org/problems/count-distinct-pairs-with-difference-k/0/?track=SP-Hashing

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void countPair(int arr[], int n, int k){
    map<int,int>m;
    for (int i =00; i<n; i++) {
        m[arr[i]]++;
    }
    int count = 0;
    for (int i = 0; i<n; i++) {
        int otherNum = arr[i] + k;
        cout << "arr[i] --- " << arr[i] << "    other num  " << otherNum << endl;
        if(k != 0){
            if (m[otherNum] > 0 && m[arr[i]] > 0) {
                int pair = min(m[otherNum], m[arr[i]]);
                count = count + pair;
                cout << "count " << count << endl;
//                m[otherNum] = m[otherNum] - pair;
//                m[arr[i]] = m[arr[i]] - pair;
            }

        }else{
            if (m[otherNum] > 0) {
                count = count + (m[otherNum]/2);
                m[otherNum] = 0;
            }
        }
        
    }
    cout << count;
    
    
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
        countPair(arr, n, k);
        cout<<endl;
    }

    return 0;
}
