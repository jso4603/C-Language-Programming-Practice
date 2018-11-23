//
//  main.c
//  challenge 5.2-1
//
//  Created by 장상옥 on 2018. 11. 22..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int a, b, res = 0; //
    char c;
    
    printf("사칙 연산 입력(정수)");
    scanf("%d%c%d",&a,&c,&b );
    
    if(c=='+')
    {
        res = a + b;
        printf("%d%c%d=%d\n",a,c,b,res);
    }
    else if(c=='-')
    {
        res = a - b;
        printf("%d%c%d=%d\n",a,c,b,res);
    }
    else if(c=='*')
    {
        res = a * b;
        printf("%d%c%d=%d\n",a,c,b,res);
    }
    else if(c=='/')
    {
        res = a / b;
        printf("%d%c%d=%d\n",a,c,b,res);
    }
    else
    {
        printf("사칙연산을 잘못 입력하였습니다.\n");
    }
    

    
    return 0;
}
