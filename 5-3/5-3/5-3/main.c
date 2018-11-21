//
//  main.c
//  5-3
//
//  Created by 장상옥 on 2018. 11. 21..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a = -2, b = 0;
    
    if(a>0) //a가 0보다 크면 b에 1 대입
    {
        b = 1;
    }
    else if(a==0) //a가 0이면 b에 2 대입
    {
        b = 2;
    }
    else if(a==-1) //a가 -1이면 b에 3 대입
    {
        b = 3;
    }
    else // a가 0보다 크지 않고 0, -1 이 아니면 b에 4 대입
    {
        b = 4;
    }
    
    printf("b : %d\n", b); //if문으로 결정된 b값 출력
    
    return 0;
    
}
