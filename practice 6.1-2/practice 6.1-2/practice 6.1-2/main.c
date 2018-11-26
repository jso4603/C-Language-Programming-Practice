//
//  main.c
//  practice 6.1-2
//
//  Created by 장상옥 on 2018. 11. 23..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int i;
    char c = '$';
    
    for(i=0; i<10; i++) //i는 0부터 9까지 하나씩 증가되므로 10번 반복
    {
        printf("%c", c); //실행문
    }
    printf("\n");
    
    return 0;
}
