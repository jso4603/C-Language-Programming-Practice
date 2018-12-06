//
//  main.c
//  practice 9.1-5
//
//  Created by 장상옥 on 2018. 12. 5..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a=10, b=20, temp;
    int *pa = &a;
    int *pb = &b;
    
    printf("%d %d \n", *pa, *pb);
    
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    
    printf("%d %d \n", *pa, *pb);
    
    return 0;
}
