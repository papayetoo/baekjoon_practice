//
//  7568.cpp
//  Cpp_practice
//
//  Created by 최광현 on 2020/01/04.
//  Copyright © 2020 최광현. All rights reserved.
//

#include <iostream>
#include <algorithm>
#define MAX 50

using namespace std;

typedef struct BasicInfo{
    int weight;
    int height;
}Info;

int main(){
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    Info arr[MAX];
    for(int i = 0; i < n; i++){
        cin >> arr[i].weight >> arr[i].height;
    }
    
    for(int i = 0; i < n; i++){
        int same = 0, bigger = 0, lower = 0;
        for(int j = (i + 1) % n; j % n != i; j++){
            if(arr[i].weight < arr[j].weight && arr[i].height < arr[j].height)
                bigger++;
            else if(arr[i].weight > arr[j].weight && arr[i].height > arr[j].height)
                lower++;
        }
        cout << lower << same << bigger << endl;
    }
    
    return 0;
}
