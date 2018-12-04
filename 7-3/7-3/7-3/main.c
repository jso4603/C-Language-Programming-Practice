//
//  main.c
//  7-3
//
//  Created by 장상옥 on 2018. 12. 3..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

void print_char(char ch, int cnt); //함수 선언

int main(void)
{
    print_char('@', 5); //문자와 숫자를 주고 함수 호출
    
    return 0;
    
}

void print_char(char ch, int cnt) //매개변수는 있으나 반환형은 없다.
{
    int i;
    if(cnt>10) return;
    for(i=0;i<cnt;i++)
    {
        printf("%c", ch); //매개변수 ch에 받은 문자 출력
    }
    
    printf("\n");
}
