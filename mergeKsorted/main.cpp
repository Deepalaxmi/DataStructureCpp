//
//  main.cpp
//  mergeKsorted
//
//  Created by Kh. Deepalaxmi on 08/05/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

#define N 11
    using namespace std;
    int *mergeKArrays(int arr[][N],int k);
    void printArray(int arr[], int size)
    {
        for (int i=0; i < size; i++)
            cout << arr[i] << " ";
    }
    int main()
    {
        int t;
        cout<< "Provide input"<< endl;
        cin>>t;
        while(t--){
            int k;
            cin>>k;
            int arr[N][N];
            for(int i=0; i<k; i++){
                for(int j=0; j<k; j++)
                {
                    cin>>arr[i][j];
                }
            }
            int *output = mergeKArrays(arr, k);
            printArray(output, k*k);
            cout<<endl;
        }
        return 0;
    }

/*Please note that it's Function problem i.e.
 you need to write your solution in the form of Function(s) only.
 Driver Code to call/invoke your function is mentioned above.*/

// your task is tocomplete this function
// function should return an pointer to output array int*
// of size k*k

struct comparator{
    bool operator()(vector<int> v1, vector<int>v2){
        return v1[0] > v2[0];
    }
};
int *mergeKArrays(int arr[][N], int k)
{
    //code here
    priority_queue <vector<int>, vector<vector<int>>, comparator> min_heap;
    int *output = new int[k*k];
    for (int i =0; i < k; i++) {
        vector <int> vect = { arr[i][0],i,1}; // store the first element, index of array, index of next element to be stored from array
        min_heap.push(vect);
    }
    
    for (int j = 0; j < k*k ; j++){
        vector<int> v = min_heap.top();
        output[j] = v[0];
        
        min_heap.pop();
        if (v[2] < k) {
            vector<int> v2 = { arr[v[1]][v[2]], v[1], v[2]+1 };
            min_heap.push(v2);
        }else{
            //previous vector was for the last element of an array
            vector<int> v2 = { INT_MAX, 0, 0 };
            min_heap.push(v2);
        }
    }
    return output;

}
    

