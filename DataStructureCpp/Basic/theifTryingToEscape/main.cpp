//
//  main.cpp
//  theifTryingToEscape
//
//  Created by Kh. Deepalaxmi on 06/05/18.
//  Copyright © 2018 Kh. Deepalaxmi. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int jumps(int arr[], int n, int x, int y){
    int jump = 0;
    int effectiveJumps = x - y;

    for (int i =0; i<n; i++) {
        if (arr[i] <= x){
            jump +=1;
        }else if (arr[i] > x){
            int h = arr[i] - effectiveJumps;
            jump++;
            while (h > x) {
                jump++;
                h = h - effectiveJumps;
            }
            
            if (h > 1){
                jump ++;
            }
            
            //wrong: evertime we need to check
//            if (arr[i] % effectiveJumps == 0) {
//                jump += arr[i]/effectiveJumps;
//            }else{
//                jump +=  arr[i]/effectiveJumps;
//                jump +=1;
//            }
            
        }
//        jump += arr[i] > x? ceil(arr[i]/effectiveJumps):1;

    }
    return jump;
}


int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    int testCases;
    cin >> testCases;
    for (int i = 0; i< testCases ; i++){
        int x,y,n;
        cin >> x >> y >> n;
        int arr[n];
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
            
        }
        cout << jumps(arr, n, x, y) <<"\n";        
    }
    return 0;
}
