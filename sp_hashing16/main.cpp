//
//  main.cpp
//  sp_hashing16
//
//  Created by Kh. Deepalaxmi on 15/08/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//Count distinct elements in every window
//https://practice.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1/?ref=self

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*You are required to complete below method */
void countDistinct(int A[], int k, int n)
{
    //Your code here
    for (int i = 0; i < n-k+1; i++) {
        map<int, int>m;
        for (int j = i; j < i+k; j++) {
            m[A[j]]++;
        }
        cout << m.size() << " ";
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin>>t;
    while(t--)
    {
        
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        countDistinct(a,k,n);
        cout<<endl;
    }
    return 0;
}
