//
//  main.c
//  7-4
//
//  Created by 장상옥 on 2018. 12. 3..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

void print_line(void);

int main(void)
{
    print_line();;
    printf("학번  이름  전공  학점\n");
    print_line();
    
    return 0;
}

void print_line(void)
{
    int i;
    
    for(i=0;i<50;i++)
    {
        printf("-");
    }
    printf("\n");
}
