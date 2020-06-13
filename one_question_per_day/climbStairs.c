//
// Created by Administrator on 2020/6/13.
//
#include "stdlib.h"
#include "string.h"
int result1(int n,int *map);
int climbStairs(int n) {
    if (n == 1 || n == 2) {
        return n;
    }
    int *map = (int *) malloc(sizeof(int) *(n+1) );
    memset(map,0, sizeof(int ) * (n+1));
    map[1] = 1;
    map[2] = 2;
    return result1(n, map);
}

int result1(int n, int *map) {
    if (map[n] !=0){
        return map[n];
    }
    int n_1;
    int n_2;
    if (map[n-1] != 0){
        n_1 = map[n-1];
    } else {
        n_1 = result1(n-1,map);
        map[n-1] = n_1;
    }
    if (map[n-2] != 0) {
        n_2 = map[n-2];
    } else {
        n_2 =result1(n_2,map);
        map[n-2] = n_2;
    }
    return n_1 + n_2;
}