//
//  main.c
//  practice 7.2-3
//
//  Created by 장상옥 on 2018. 12. 3..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include <stdio.h>

int sum(int a); //함수 선언

int main(void)
{
    sum(10); //1부터 10까지의 합 출력
    sum(100); //1부터 100까지의 합 출력
    
    return 0;
}

int sum(int a) //매개변수에 합을 구할 마지막 값을 받는다.
{
    int i, sum = 0; //반복 제어 변수와 합을 누적할 변수
    
    for(i=1;i<=a;i++) //1부터 매개변수 a까지 i를 증가
    {
        sum += i; //i를 반복하여 sum에 누적
    }
    
    return printf("1부터 %d까지의 합은 %d 입니다.\n", a, sum); //a와 sum 출력
    
}
