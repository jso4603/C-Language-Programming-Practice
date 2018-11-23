//
//  main.c
//  challenge 5.2-3
//
//  Created by 장상옥 on 2018. 11. 22..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int basic, usage, total;
    double kw = 0;
    
    printf("전기 사용량을 입력하세요(kw) :");
    scanf("%d", &usage);
    
    if(usage<100)
    {
        basic = 370;
        kw = usage * 52.0;
    }
    else if(usage<200)
    {
        basic = 660;
        kw = (100*52.0)+((usage-100)*88.5);
    }
    else if(usage<300)
    {
        basic = 1130;
        kw = (100*52.0)+(100*88.5)+((usage-200)*127.8);
    }
    else if(usage<400)
    {
        basic = 2710;
        kw = (100*52.0)+(100*88.5)+(100*127.8)+((usage-300)*184.3);
    }
    else if(usage<500)
    {
        basic = 5130;
        kw = (100*52.0)+(100*88.5)+(100*127.8)+(100*184.3)+((usage-400)*274.3);
    }
    else
    {
        basic = 9330;
        kw = (100*52.0)+(100*88.5)+(100*127.8)+(100*184.3)+(100*274.3)+((usage-500)*494.0);
    }
    
    total = basic + kw;
    total *= 1.09;
    printf("이번 달 요금은 %d원입니다.\n", total);
    
    return 0;
    
}
