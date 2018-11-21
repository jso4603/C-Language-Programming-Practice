//
//  main.c
//  4-12
//
//  Created by 장상옥 on 2018. 11. 20..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a = 10, b = 20, res;
    
    res = (a>b) ?a : b; //a와 b 중에 큰 값이 res에 저장
    printf("큰 값 : %d\n", res);
    
    return 0;
}
