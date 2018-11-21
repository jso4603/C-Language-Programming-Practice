//
//  main.c
//  practice 5.1-4
//
//  Created by 장상옥 on 2018. 11. 22..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a = 10, b = 3;
    
    if(a>b) //a가 b보다 크면
    {
        printf("%d\n", a/b); //a,b가 모두 정수이므로 몫 계산
    }
    else //그렇지 않으면(a가 b보다 작거나 같으면)
    {
        printf("%d\n", a%b); //a를 b로 나눈 나머지 계산
    }
    
    return 0;
}
