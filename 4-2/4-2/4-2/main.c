//
//  main.c
//  4-2
//
//  Created by 장상옥 on 2018. 11. 19..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    double apple;
    int banana;
    int orange;
    
    apple = 5.0 / 2.0;
    banana = 5 / 2;
    orange = 5 % 2;
    
    printf("apple : %.1lf\n", apple);   //실수와 실수의 나눗셈 연산
    printf("banana : %d\n", banana);    //정수와 정수의 나눗셈 연산(몫을 출력)
    printf("orange : %d\n", orange);    //정수와 정수의 나머지 연산(나머지를 출력)
    
    return 0;
}
