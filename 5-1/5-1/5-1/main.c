//
//  main.c
//  5-1
//
//  Created by 장상옥 on 2018. 11. 21..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a = 20, b = 0;
    
    if(a>10)  //a가 10보다 크므로 조건식은 참
    {
        b=a; //b = a 대입문 실행
        printf("a와 b는 같습니다.\n"); //if문과 독립된 문장으로 항상 실행
    }
    
    printf("a : %d, b : %d\n",a, b); //대입이 수행되면 두 값은 같음
    
    return 0;
}
