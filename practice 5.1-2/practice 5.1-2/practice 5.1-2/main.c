//
//  main.c
//  practice 5.1-2
//
//  Created by 장상옥 on 2018. 11. 22..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int chest = 95;
    char size;
    
    if (chest <= 90)
    {
        size = 'S';
    }
    
    else if (chest <= 100) //(chest>90> && (chest <=100)도 가능
    {
        size = 'M';
    }
    
    else
    {
        size = 'L';
    }
    
    printf("size : %c\n", size);
    
    return 0;
}
