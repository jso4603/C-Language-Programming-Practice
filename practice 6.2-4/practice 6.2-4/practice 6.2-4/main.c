//
//  main.c
//  practice 6.2-4
//
//  Created by 장상옥 on 2018. 11. 27..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int i,j,num; //반복 제어 변수와 출력할 숫자를 저장 할 변수
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<4-i;j++) //첫번째 j-for문은 숫자를 출력하기 전에 빈칸을 출력한다.
        {                   //i가 증가할 때마다 빈칸 출력 횟수는 4-i에 의해 하나씩 감소한다.
            printf(" ");
        }
        
        num = 1; //출력할 번호 1로 초기화
        
        for(j=0;j<(2*i)+1;j++) //두번쨰 j-for문은 숫자를 하나씩 증가시키면서 출력한다.
        {                       //i가 증가할 때마다 번호 출력 횟수는 (2*i)+1에 의해 2씩 증가한다.
            printf("%d", num); //숫자 출력
            num++; //숫자 1 증가
        }
        printf("\n"); //한 줄을 출력하고 줄을 바꾼다
    }
}
