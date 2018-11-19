//
//  main.c
//  4-6
//
//  Created by 장상옥 on 2018. 11. 19..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a = 30;
    int res;
    
    res = (a > 10) && (a < 20); //논리곱, 좌항과 우항이 모두 참이면 참
    printf("a > 10) && (a < 20) : %d\n", res);
    
    res = (a > 10) || (a < 20); //논리합, 좌항과 우항이 하나라도 참이면 참
    printf("a > 10) || (a < 20) : %d\n", res);
    
    res = !(a >= 30); //논리부정, 거짓이면 참으로, 참이면 거짓으로
    printf("! (a >=30) : %d\n", res);
}
