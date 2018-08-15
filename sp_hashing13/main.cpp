//
//  main.cpp
//  sp_hashing13
//
//  Created by Kh. Deepalaxmi on 26/07/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//  Group Anagrams Together
//https://practice.geeksforgeeks.org/problems/k-anagrams-1/0/?track=SP-Hashing

#include <iostream>
//#include <vector>
//#include <map>
#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2){
    if (s1.length() != s2.length()) {
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

void anagram(string arr[], int n){
    vector<int>v1;
    for (int i = 0; i<n; i++) {
        string s1 = arr[i];
        int c = 0;
        
        for (int j = 0; j<n; j++) {
            string s2 = arr[j];
            if (i == j) {
                c++;
            }else{
                if (isAnagram(s1, s2)){
                    c++;
                }
            }
        }
        v1.push_back(c);
    }
    sort(v1.begin(), v1.end());
    for (int i = 0 ; i < v1.size(); i++) {
        cout << v1[i];
    }
    cout << endl;
}

bool sortByValue(pair<string, int> m1, pair<string, int> m2){
    return m1.second < m2.second;
}


void anagramGroup(string arr[], int n){
//    sort(arr, arr+n);
    map<string, int>m;
    for (int i = 0; i < n; i++) {
        m[arr[i]]++;
    }
//    sort(m.begin(), m.end(), sortByValue);
    vector<int>v1;
    for (auto itr = m.begin(); itr != m.end(); itr++ ) {
        v1.push_back(itr->second);
    }
    sort(v1.begin(),v1.end());
    for (int i = 0 ; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int t ;
    cin >> t;
    for (int i=0; i<t; i++) {
        int n;
        cin >> n;
        string arr[n];
        for (int j = 0; j < n; j++) {
            string s;
            cin >> s;
            sort(s.begin(), s.end());
            arr[j] = s;
        }
//        anagram(arr, n);
        anagramGroup(arr,n);
    }
    return 0;
}
