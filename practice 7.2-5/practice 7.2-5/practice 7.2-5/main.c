//
//  main.c
//  practice 7.2-5
//
//  Created by 장상옥 on 2018. 12. 3..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int func(int n);
int poly(int n);

int main(void)
{
    printf("%d\n", func(-3));
    
    return 0;
}

int func(int n) //2*n*n + 3*n을 계산한 후에 그 절대값을 구하는 함수
{
    int res;
    
    res=poly(n);
    if(res >= 0) return res;
    else return -res;
}

int poly(int n) //2*n*n + 3*n을 계산하여 반환하는 함수
{
    return ((2*n*n) + (3*n));
}
