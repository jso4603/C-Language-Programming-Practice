//
//  main.c
//  challenge 4.2-3
//
//  Created by 장상옥 on 2018. 11. 21..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int dis, speed, hour, min;
    double time, sec;
    
    printf("거리와 속력 입력 :");
    scanf("%d%d", &dis, &speed);
    
    time = (double) dis / (double) speed;
    hour = (int) time;
    time -= hour;
    time *= 60;
    min = (int)time;
    time -= min;
    sec = time * 60;
    
    printf("소요시간은 %d시간 %d분 %.3lf초입니다.\n", hour, min, sec);
    
    return 0;
}
