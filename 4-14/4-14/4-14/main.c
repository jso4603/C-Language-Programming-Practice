//
//  main.c
//  4-14
//
//  Created by 장상옥 on 2018. 11. 20..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a = 10, b = 5;
    int res;
    
    res = a / b * 2; //우선순위가 같으므로 왼쪽부터 차례로 연산
    printf("res = %d\n", res);
    
    res = ++a * 3; //a의 값을 1 증가시키고 3을 곱한다.
    printf("res = %d\n", res);
    
    res = a > b && a !=5; // a>b의 결과와 a != 5의 결과를 && 연산
    printf("res = %d\n", res);
    
    res= a % 3 == 0; // a % 3의 값이 0과 같은지 확인
    printf("res = %d\n", res);
    
    return 0;
    
}
