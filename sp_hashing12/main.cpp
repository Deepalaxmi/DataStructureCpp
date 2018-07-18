//
//  main.cpp
//  sp_hashing12
//
//  Created by Kh. Deepalaxmi on 17/07/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//  Minimum indexed character
// https://practice.geeksforgeeks.org/problems/minimum-indexed-character/0/?ref=self

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void minIndexedChar(string s, string p){
    map<char,int>m;
    for (int j = 0; j < p.length(); j++) {
        m[p[j]] = -1;
    }
    
    for (int i = 0; i < s.length(); i++) {
        if ( m.find(s[i]) != m.end()) {
            if (m[s[i]] == -1) {
                m[s[i]] = i;
            }
        }
        
    }
    int minIndx = INT_MAX;
    char minChar = '\0';
    for (int j = 0; j < p.length(); j++) {
        if (m[p[j]] != -1) {
            if (m[p[j]] < minIndx ) {
                minIndx = m[p[j]];
                minChar = p[j];
            }
        }
    }
    if (minIndx != INT_MAX && minChar != '\0') {
        cout << minChar;
    }else{
        cout << "No character present";
    }
}


//2nd
void minIndexedChar2(string s, string p){
    map<char, int>m;
    
    for (int i = 0; i < p.length(); i++) {
        m[p[i]]++;
    }
    
    bool check = false;
    for (int j = 0; j < s.length(); j++) {
        if (m[s[j]]) {
            check = true;
            cout << s[j];
            break;
        }
    }
    
    if (!check) {
        cout << "No character present";
    }
    
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string str, pat;
        cin >> str >> pat;
        minIndexedChar2(str, pat);
        cout << endl;
    }
   return 0;
}
