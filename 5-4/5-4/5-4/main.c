//
//  main.c
//  5-4
//
//  Created by 장상옥 on 2018. 11. 22..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a = 20, b = 10;
    
    if(a>10) //a가 10보다 크면 17~24행 실행, 작거나 같으면 26행으로 이동
    {
        if(b >= 0) //b가 0 이상이면 b에 1 대입하고 26행으로 이동
        {
            b = 1;
        }
        else
        {
            b = -1; //b가 0보다 작으면 b에 -1 대입하고 26행으로 이동
        }
    }
    
    printf("a : %d, b : %d\n", a, b);
    
    return 0;
}
