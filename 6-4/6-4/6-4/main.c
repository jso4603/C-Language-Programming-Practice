//
//  main.c
//  6-4
//
//  Created by 장상옥 on 2018. 11. 23..
//  Copyright © 2018년 장상옥. All rights reserved.
//


#include<stdio.h>

int main(void)
{
    int i, j; //반복 횟수를 세기 위한 제어 변수
    
    for(i=0;i<3;i++) //i가 0부터 2까지 증가하면서 3번 반복
    {
        for(j=0;j<5;j++) //j가 0부터 5까지 증가하면서 5번 반복
        {
            printf("*"); //별 출력문
        }
        printf("\n"); //별을 5번 출력한 후에 줄을 바꾼다.
    }
    return 0;
}

/*
#include<stdio.h> //구구단 출력하는 반복문

int main(void)
{
    
    int i,j;
    for(i=2;i<=9;i++){
        for(j=1;j<=9;j++){
            printf("%d * %d = %d\n", i, j, i*j);
        }
    }
}
*/
