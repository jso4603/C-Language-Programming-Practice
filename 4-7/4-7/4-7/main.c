//
//  main.c
//  4-7
//
//  Created by 장상옥 on 2018. 11. 19..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a =10, b = 20, res;
    
    a + b; //연산 결과는 버려짐
    printf("%d + %d = %d\n", a, b, a+b); //연산 결과는 바로 출력에 사용
    
    res = a + b; //연산 결과를 변수에 저장
    printf("%d + %d = %d\n", a, b, res); //저장된 연산 결과는 계속 사용
    
    return 0;
}
