//
//  main.cpp
//  sp_hashing8
//
//  Created by Kh. Deepalaxmi on 16/07/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
// Squares Difference
// https://practice.geeksforgeeks.org/problems/squares-difference/0/?ref=self

#include <iostream>
using namespace std;

long findAbsoluteDifference(int n){
    long sumOfN = n*(n+1)/2;
    long squareOfSum = sumOfN *sumOfN;
    
    long sumOfSquaresOfNumber = n*(n+1)*(2*n+1)/6;
    long absDiff = abs(squareOfSum - sumOfSquaresOfNumber)  ;
    return absDiff;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin >> t;
    for (int i =0; i<t; i++) {
        int n;
        cin >> n;
        cout << findAbsoluteDifference(n) << endl;
    }
    return 0;
}
