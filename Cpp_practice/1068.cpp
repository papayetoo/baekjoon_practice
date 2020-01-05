//
//  1068.cpp
//  Cpp_practice
//
//  Created by 최광현 on 2020/01/05.
//  Copyright © 2020 최광현. All rights reserved.
//

#include <iostream>
#define MAX 50
using namespace std;

void solution(int arr[], int n, int deleteNode);
int isLeaf(int arr[], int n);

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;
    
    int arr[MAX];
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }
    
    int deleteNode; cin >> deleteNode;
    
    solution(arr, n, deleteNode);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout << isLeaf(arr, n);
    return 0;
}

void solution(int arr[], int n, int deleteNode){
    
    if(!deleteNode)
        return;
    
    arr[deleteNode] = -1;
    for(int i = deleteNode + 1; i < n; i++){
        if(arr[i] == deleteNode)
            solution(arr, n, i);
    }
    
}

int isLeaf(int arr[], int n){
    
    int ret = 0;
    
    for(int i = 0; i < n -1; i++){
        
        int count = 0;
        for(int j = i + 1; j < n ; j++){
            if(arr[j] != -1 && arr[j] == i)
                count++;
        }
        
        if(!count)
            ret++;
    }

    return ret;
}
