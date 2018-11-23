//
//  main.c
//  5-5
//
//  Created by 장상옥 on 2018. 11. 22..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a = 10, b = 20;
    
    if(a<0) //a가 0보다 작지만
    {
        if(b>0) //b가 0보다 크면 ok 출력
        {
            printf("ok\n");
        }
    }
    
    else
    {
        {
            printf("ok\n"); //a가 0 이상이면 ok 출력
        }
        
    }
    
    return 0;
}
