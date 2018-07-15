//
//  main.cpp
//  sp_hashing1
//
//  Created by Kh. Deepalaxmi on 15/07/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//  Winner of an election where votes are represented as candidate names
// https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names/0/?track=SP-Hashing

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

pair<string, int> winner(string arr[], int n){
    map<string, int> m;
    for (int i = 0; i < n; i++) {
        m[arr[i]]++;
    }
    int max = 0;
    pair<string, int>ans;
    for (auto itr = m.begin(); itr!= m.end(); itr++) {
        if (itr->second > max) {
            ans = make_pair(itr->first, itr->second);
            max = itr->second;
        }
    }
    return ans;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int testCases = 0;
    cin>> testCases;
    for (int i =0; i< testCases; i++) {
        int n;
        cin >> n;
        string arr[n];
        for (int j = 0; j<n; j++) {
            cin >> arr[j];
        }
        pair<string, int> result = winner(arr, n);
        cout << result.first << " " << result.second << endl;
    }
    return 0;
}







// ------ Alternate solution------

bool compare(pair<string,int>p1,pair<string,int>p2)
{
    if(p1.second==p2.second)
        return (p1.first<p2.first);
    
    else
        return(p1.second>p2.second);
}

int main2() {
    //code
    int t,n;
    string s;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        cin>>n;
        map<string,int>m;
        
        for(int i=0;i<n;i++)
        {
            cin>>s;
            if(m.find(s)!=m.end())
                m[s]++;
            else
                m[s]=1;
        }
        
        vector<pair<string,int> >arr(m.begin(),m.end());
        sort(arr.begin(),arr.end(),compare);
        
        //cout<<"y ";
        
        cout<<arr[0].first<<" "<<arr[0].second<<"\n";
    }
    return 0;
}
