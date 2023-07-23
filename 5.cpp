//
//  code.cpp
//  step5
//
//  Created by ljpc on 2018/7/18.
//  Copyright © 2018年 ljpc. All rights reserved.
//

#include "code.h"

void Next_Permutation(int* arr, int n, int m)
{
    // 请在这里补充代码，完成本关任务
    /********** Begin *********/
    int a = 1;
    do {
        for (int i = 0; i < n; i++) {
            if (i == n - 1)cout << arr[i];
            else cout << arr[i] << " ";
        }
        cout << endl;
        a++;
        if (a == m + 1)break;
    } while (next_permutation(arr, arr + n));
    /********** End **********/
}

void Prev_Permutation(int* arr, int n, int m)
{
    // 请在这里补充代码，完成本关任务
    /********** Begin *********/
    int a = 1;
    do {
        for (int i = 0; i < n; i++) {
            if (i == n - 1)cout << arr[i];
            else cout << arr[i] << " ";
        }
        cout << endl;
        a++;
        if (a == m + 1)break;
    } while (prev_permutation(arr, arr + n));

    /********** End **********/
}