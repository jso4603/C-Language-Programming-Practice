//
//  main.c
//  practice 6.2-3
//
//  Created by 장상옥 on 2018. 11. 26..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int i,j; //반복 제어 변수
    
    for(i=0;i<5;i++) //i는 0부터 4까지 5번 반복, 각 행을 반복
    {
        for(j=0;j<i+1;j++) //j는 0부터 i+1까지 반복, i가 증가하면 반복횟수도 증가
        {
        printf("@"); //@ 출력
        }
        printf("\n"); //각 행을 출력한 후에 줄을 바꾼다.
    }
    
    return 0;
}
