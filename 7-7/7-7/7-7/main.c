//
//  main.c
//  7-7
//
//  Created by 장상옥 on 2018. 12. 3..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

void fruit(int n);

int main(void)
{
    fruit(1); //처음 호출하므로 1을 인수로 준다.
    
    return 0;
}

void fruit(int n) //호출 횟수를 매개변수에 저장
{
    printf("apple\n");
    if(n==3) return; //호출 횟수가 3이면 반환하고 끝낸다.
    fruit(n+1); //재호출 할 때 호출 횟수를 1 증가
    printf("jam\n");
}
