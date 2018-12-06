//
//  main.c
//  practice 9.1-1
//
//  Created by 장상옥 on 2018. 12. 5..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    char ch = 'c';
    int in = 10;
    double db = 100.0;
    
    char *pc;
    int *pi;
    double *pd;
    
    pc = &ch;
    pi = &in;
    pd = &db;
    
    printf("%c\n", *pc);
    printf("%d\n", *pi);
    printf("%lf\n", *pd);
    
    return 0;
}
