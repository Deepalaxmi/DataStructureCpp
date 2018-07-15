//
//  main.cpp
//  countPairWithSum
//
//  Created by Kh. Deepalaxmi on 15/07/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countPairWithGivenSum(int sum, int arr[], int n){
    unordered_map<int, int> m;
    
    for(int i = 0; i < n; i++){
        m[arr[i]]++;
    }
    int twiceCount = 0;
    for (int i = 0; i<n; i++) {
        twiceCount += m[sum - arr[i]]; // counting twice for each pair
        if (arr[i] == sum - arr[i]) {
            //not consider pair (arr[i], arr[i])
            twiceCount--;
        }
        
    }
    return twiceCount/2;
}

int naivecountPairWithGivenSum(int sum, int arr[], int n){
    int count = 0;
    for (int i =0; i<n; i++) {
        for (int j = i+1; j<n; j++) {
            if (arr[i] + arr[j] == sum){
                count++;
            }
        }
    }
    return count;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int testCases;
    cin >> testCases;
    for (int i =0; i<testCases; i++) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int j = 0; j<n; j++) {
            cin >> arr[j];
        }
//        cout << naivecountPairWithGivenSum(k, arr, n) << endl;
        cout << countPairWithGivenSum(k, arr, n) << endl;
    }
    return 0;
}
