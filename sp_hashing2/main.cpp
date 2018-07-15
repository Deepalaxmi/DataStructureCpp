//
//  main.cpp
//  sp_hashing2
//
//  Created by Kh. Deepalaxmi on 15/07/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
// Check if a string is Isogram or not
// https://practice.geeksforgeeks.org/problems/check-if-a-string-is-isogram-or-not/0/?track=SP-Hashing

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int isIsogram(string s){
    map<char,int>m;
    int n = (int)s.length();
    char char_arr[n + 1]; //as 1 char space for null is also required
    strcpy(char_arr, s.c_str());
    for (int i = 0; i < n ; i++) {
        if (m.find(char_arr[i]) != m.end()) {
            //more than 1 char present
            return 0;
        }else{
            m[char_arr[i]] = 1;
        }
    }
    return 1;
}

int isIsogram2(string s){
    map<char,int>m;
    int n = (int)s.length();
    for (int i = 0; i < n ; i++) {
        if (m.find(s[i]) != m.end()) {
            //more than 1 char present
            return 0;
        }else{
            m[s[i]] = 1;
        }
    }
    return 1;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int testCases = 0;
    cin >> testCases;
    for (int i =0; i < testCases; i++) {
        string s;
        cin >> s;
//        cout << isIsogram(s) << endl;
        cout << isIsogram2(s) << endl;
        
    }
    return 0;
}
