//
//  main.cpp
//  sp_hashing3
//
//  Created by Kh. Deepalaxmi on 15/07/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
// Lucky Number
// https://practice.geeksforgeeks.org/problems/lucky-number/0/?track=SP-Hashing

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//method 1
int isLuckyNumber(long long num){
    map<long,long>m; //store digit product
    vector<long> v;
    while (num>0) {
        int digit = num%10;
        v.push_back(digit);
        num = num/10;
    }
    //sliding window technique, k size of window
    long long n = v.size(); //total number of digit
    for(long long k = 1; k<= n;k++){
        for (long long i = 0; i < n-k+1 ; i++) {
            long long currentProduct = 1;
            for (long long j = 0; j<k; j++) {
                currentProduct *= v[i + j];
            }
            
            if (m.find(currentProduct) != m.end()) {
                m[currentProduct]++;
                return 0;
            }else{
                m[currentProduct] = 1;
            }
        }
    }
    return 1;
}

//method 2
int gotLucky(string s){
    map<int ,int>m;
    for (int i =0; i< s.size(); i++) {
        int curr = s[i] - '0';
        m[curr]++;
        for (int j = i+1; j<s.size(); j++) {
            curr = curr * (s[j] - '0');
            m[curr]++;
        }
    }
    for (auto itr : m) {
        if (itr.second > 1) {
            return 0;
        }
    }
    return 1;
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int testCases;
    cin >> testCases;
    for (int i =0; i< testCases; i++) {
//        long long n;
//        cin >> n;
        string s;
        cin >> s;
//        cout << isLuckyNumber(n) << endl;
        cout << gotLucky(s) << endl;
    }
    return 0;
}
