//
//  main.c
//  4-8
//
//  Created by 장상옥 on 2018. 11. 20..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a = 20, b=3;
    double res;
    
    res = ((double)a) / ((double)b); //a와 b의 값이 실수형으로 변환
    printf("a = %d, b = %d\n", a, b);
    printf("a / b 의 결과 : %.1lf\n", res);
    
    a = (int)res; //res의 값에서 정수 부분만 추림
    printf("(int) %.1lf의 결과 : %d\n", res, a);
    
    return 0;
}
