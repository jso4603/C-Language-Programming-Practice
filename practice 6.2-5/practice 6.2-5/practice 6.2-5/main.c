//
//  main.c
//  practice 6.2-5
//
//  Created by 장상옥 on 2018. 11. 27..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    
    int i,j; //반복 제어 변수
    
    for(i=0;i<5;i++) //i는 0부터 4까지 5번 반복, 행의 수
    {
        for(j=0;j<5;j++) //j는 0부터 4까지 5번 반복, 열의 수
        {
            if((i == j) || (i+j == 4)) //대각선의 위치가 되었을 때 별 출력
                printf("*");
            else //그 외의 위치는 빈칸 출력
                printf(" ");
        }
        printf("\n"); //한 행이 끝나면 줄을 바꾼다.
    }
    
    return 0;
}
