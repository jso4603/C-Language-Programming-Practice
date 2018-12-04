//
//  main.c
//  7-5
//
//  Created by 장상옥 on 2018. 12. 3..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

void fruit(void); //함수 선언

int main(void)
{
    fruit(); //함수 호출
    
    return 0;
}

void fruit(void) //재귀호출 함수 정의
{
    printf("apple\n"); //자신을 다시 호출
    fruit();
}
