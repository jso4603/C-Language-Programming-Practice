//
//  main.c
//  practice 8.2-4
//
//  Created by 장상옥 on 2018. 12. 4..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[10]; //Be happy!는 널문자를 포함해서 10개의 문자입니다.
    
    printf("문자열 입력 : ");
    gets(str); //중간에 빈 칸이 있으므로 gets로 입력합니다.
    puts("입력 된 문자열 : ");
    puts(str);
    
    return 0;
    
}
