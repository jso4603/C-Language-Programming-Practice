//
//  main.c
//  4-4
//
//  Created by 장상옥 on 2018. 11. 19..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a =5, b=5;
    int pre, post;
    
    pre = (++a) * 3; //전위형 증감 연산자
    post = (b++) * 3; //후위형 증감 연산자
    
    printf("초깃값 a = %d, b = %d\n", a, b);
    printf("전위형 : (++a) * 3 = %d, 후위형 : (b++) * 3 = %d\n", pre, post);
    
    return 0;
}
