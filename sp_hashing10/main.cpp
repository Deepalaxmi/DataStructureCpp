//
//  main.cpp
//  sp_hashing10
//
//  Created by Kh. Deepalaxmi on 16/07/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//  Print K smallest elements in their original order
//  https://practice.geeksforgeeks.org/problems/print-k-smallest-elements-in-their-original-order/0/?ref=self

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//
void kSmallest(int arr[], int n, int k){
    //min heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int i =0; i<n; i++) {
        minHeap.push(arr[i]);
    }
    
    while (k>0) {
        cout << minHeap.top() << " ";
        minHeap.pop();
        k--;
    }
    
}

//struct comparator{
//    bool operator()(vector<int>v1, vector<int>v2){
//        return v1[0] > v2[0];
//    }
//};
//
//bool sortByIndex(vector<int>v1, vector<int>v2){
//    return v1[1] < v2[1];
//}

//void kSmallest2(int arr[], int n, int k){
//    // min heap
//    priority_queue<vector<int>, vector<vector<int>>,comparator> minHeap;
//
//    for (int i = 0; i<n; i++) {
//        vector<int> v = {arr[i], i};
//        minHeap.push(v);
//    }
//    vector<vector<int>> aVec;
//    for (int i =0; i<k; i++) {
//        vector<int> v = minHeap.top();
//        aVec.push_back(v);
//        minHeap.pop();
//    }
//
//    sort(aVec.begin(), aVec.end(), sortByIndex);
//    for (auto itr: aVec) {
//        cout << itr[0] << " ";
//    }
//
//}

void kSmallest3(int arr[], int n, int k){
    vector<int>vArr(arr, arr+n);
    sort(vArr.begin(), vArr.end());
    
    vector<int> result;
    for (int i =0; i<n; i++) {
        //find each element is present in k sorted element
        if (binary_search(vArr.begin(), vArr.begin()+k, arr[i]) && result.size() < k) {
                result.push_back(arr[i]);
                cout << arr[i] << " ";
        }
    }
    
}


void kSmallest4(int arr[], int n, int k){
    for (int i = k; i<n; i++) {
        int max = arr[k-1];
        int maxPos = k-1;
        for (int j = k-2; j>=0; j--) {
            if (max < arr[j]) {
                max = arr[j];
                maxPos = j;
            }
        }
        // swap largest within 0-k range with the i th element k to n
        arr[maxPos] = arr[i];
        arr[i] = max;
    }
    
    for (int i = 0; i<k; i++) {
        cout << arr[i] << " ";
    }
}

struct comparator{
    bool operator()(pair<int, int> v1, pair<int, int> v2){
        if (v1.first > v2.first) {
            return true;
        } else if (v1.first < v2.first) {
            return false;
        } else {
            return v1.second > v2.second;
        }
    }
};

bool sortByIndex(pair<int, int> v1, pair<int, int> v2){
    return v1.second < v2.second;
}

void kSmallest5(int arr[], int n, int k){
    // min heap
    priority_queue<pair<int, int>, vector<pair<int, int>>, comparator> minHeap;
    
    for (int i = 0; i < n; i += 1) {
        minHeap.push(make_pair(arr[i], i));
    }
    vector<pair<int, int>> aVec;
    for (int i = 0; i < k; i += 1) {
        aVec.push_back(minHeap.top());
        minHeap.pop();
    }
    
    sort(aVec.begin(), aVec.end(), sortByIndex);
    // for (auto itr: aVec) {
    //     cout << itr[0] << " ";
    // }
    for (int i = 0; i < k; i += 1) {
        cout << aVec[i].first << " ";
    }
}




int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin >> t;
    for (int i =0; i<t; i++) {
        int n,k;
        cin >> n >> k;
        int arr[n];
        for (int j =0 ; j < n; j++) {
            cin >> arr[j];
        }
        kSmallest5(arr, n, k);
        cout << endl;
    }
    return 0;
}
