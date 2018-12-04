//
//  main.c
//  practice 7.1-5
//
//  Created by 장상옥 on 2018. 12. 3..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int prime_check(int a); //함수 선언

int main(void)
{
    int a,sosu; //숫자를 입력할 변수와 함수 반환값을 저장 할 변수
    
    printf("숫자를 입력하세요 : ");
    scanf("%d", &a);
    
    sosu = prime_check(a); //a를 주고 함수 호출
    
    if(sosu==1) //반환 값이 1이면 소수
    {
        printf("소수입니다.\n");
    }
    
    else //아니면, 소수가 아님.
    {
        printf("소수가 아닙니다.\n");
    }
        
    return 0;
}

int prime_check(int a) //함수 정의
{
    int i;
    
    for(i=2;i<a;i++) //i의 값은 2부터 a-1까지 증가
    {
        if(a%i==0) return 0; //최초 나누어 떨어질 때 0 반환
    }
    
    return 1; //for문에서 반환되지 않고 반복을 모두 수행한 경우는
              // 한 번도 나누어 떨어지지 않은 것이므로 소수임.
}
