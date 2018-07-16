//
//  main.cpp
//  sp_hashing7
//
//  Created by Kh. Deepalaxmi on 16/07/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
// Check if the number is balanced
// https://practice.geeksforgeeks.org/problems/check-if-the-number-is-balanced/0/?ref=self

#include <iostream>
using namespace std;

int isNumberBalanced(string s){
    long midIndex = (s.length()-1)/2;
    int leftSum = 0;
    for (long i  = 0; i<midIndex; i++) {
        leftSum = leftSum + (s[i] - '0') ;
    }
    
    int rightSum = 0;
    for (long j  = midIndex+1; j<s.length(); j++) {
        rightSum = rightSum + (s[j] - '0') ;
    }
    
    if (leftSum == rightSum) {
        return 1;
    }else{
        return 0;
    }

}

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin >> t;
    for (int i =0; i<t; i++) {
        string s;
        cin >> s;
        if (s.length()%2==0) {
            cout << "0" << endl;
        }else{
            cout << isNumberBalanced(s) << endl;
        }
    }
    
    return 0;
}
