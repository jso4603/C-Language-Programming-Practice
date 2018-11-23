//
//  main.c
//  challenge 5.2-2
//
//  Created by 장상옥 on 2018. 11. 22..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int money = 100;
    int rich = 150; //가정형편을 저장할 변수
    double grade = 4.1; //학점을 저장할 변수
    
    if(rich>=100)
    {
        if(grade>=4.0)
        {
            money *= 0.8;
        }
    }
    else
    {
        money *= 0.6;
    }
    
    printf("다음 학기 납입할 등록금은 %d만원입니다.\n",money);
    
    return 0;
}
