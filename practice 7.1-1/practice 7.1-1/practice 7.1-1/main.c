//
//  main.c
//  practice 7.1-1
//
//  Created by 장상옥 on 2018. 11. 29..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

double average(double a, double b); //함수의 선언

int main(void) //main 함수 시작
{
    double res;
    res = average(1.5,3.4); //average 함수 호출
    printf("%.2lf\n", res);
    
    return 0;
}

double average(double a, double b) //average 함수 정의 시작
{
    double temp;
    temp = a + b;
    return (temp / 2.0); //temp를 2.0으로 나눈 값을 반환
}
