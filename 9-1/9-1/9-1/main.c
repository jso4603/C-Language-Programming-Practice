//
//  main.c
//  9-1
//
//  Created by 장상옥 on 2018. 12. 5..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a; //int형 변수 선언
    double b; //double형 변수 선언
    char c; //char형 변수 선언
    
    printf("int형 변수의 주소 : %x\n",&a); //주소 연산자로 주소 계산(16진수)
    printf("double형 변수의 주소 : %p\n",&b);
    printf("char형 변수의 주소 : %u\n",&c);
    
    return 0;
}
