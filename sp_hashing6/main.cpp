//
//  main.cpp
//  sp_hashing6
//
//  Created by Kh. Deepalaxmi on 16/07/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
// Form a number divisible by 3 using array digits
// https://practice.geeksforgeeks.org/problems/form-a-number-divisible-by-3-using-array-digits/0/?ref=self

#include <iostream>
using namespace std;

int isNumberDivisibleByThree(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    if (sum%3==0) {
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
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j<n; j++) {
            cin >> arr[j];
        }
        cout << isNumberDivisibleByThree(arr, n) << endl;
    }
    return 0;
}
