//
//  main.c
//  8-8
//
//  Created by 장상옥 on 2018. 12. 4..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    char str[80];
    
    printf("문자열 입력 :"); //입력 안내 메시지 출력
    gets(str); //빈칸을 포함한 문자열 입력
    puts("입력된 문자열 : "); //문자열 상수 출력
    puts(str); //배열에 저장된 문자열 출력
    
    return 0;
}
