//
//  main.c
//  5-2
//
//  Created by 장상옥 on 2018. 11. 21..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a = 10;
    
    if(a>=0)
    {
        printf("현재 a의 값 : %d\n", a); //현재 a값을 출력하고
        a = 1; //a가 0보다 크거나 같으면 a에 1 대입
    }
    else
    {
        a = -1; //a가 0보다 작으면 a에 -1 대입
    }
    
    printf("a : %d\n",a);
    
    return 0;
}
