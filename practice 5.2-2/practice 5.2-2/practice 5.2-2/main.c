//
//  main.c
//  practice 5.2-2
//
//  Created by 장상옥 on 2018. 11. 22..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int n;
    
    printf("정수 입력 : ");
    scanf("%d", &n);
    
    switch(n%3)
    {
        case 0 :
            printf("거짓\n");
            break;
            
        default :
            printf("참\n");
            break;
    }
    
    return 0;
}
