//
//  main.cpp
//  sp_hashing9
//
//  Created by Kh. Deepalaxmi on 16/07/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//  Check whether two numbers differ at one bit position only
// https://practice.geeksforgeeks.org/problems/check-whether-two-numbers-differ-at-one-bit-position-only/0/?ref=self

#include <iostream>
using namespace std;

int isDifferBit(int n, int m){
    //size of an integer assumed to be 32 bits
    int countDiffer = 0;
    for (int i = 31; i>=0; i--) {
        int j = n >> i;
        int k = m >> i;
//        cout << "j " << (j & 1) << "  k " << (k & 1) << endl;
        if ((j & 1) != (k & 1)) {
            countDiffer++;
//            cout << "countDiffer " << countDiffer << endl;
        }
    }
    if (countDiffer == 1) {
        return 1;
    }else{
        return 0;
    }
}

int isDifferBit2(int n, int m){
    int res = n ^ m;
    int countDiffer = 0;
    while (res > 0) {
        if ((res&1) == 1) {
            countDiffer++;
        }
        res = res/2;
        //res = res >> 1;
    }
    if (countDiffer == 1) {
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
        int n, m;
        cin >> n >> m;
        cout << isDifferBit2(n, m) << endl;
    }
    return 0;
}
