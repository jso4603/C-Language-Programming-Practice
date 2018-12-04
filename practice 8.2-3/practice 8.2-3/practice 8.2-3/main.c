//
//  main.c
//  practice 8.2-3
//
//  Created by 장상옥 on 2018. 12. 4..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>
#include<string.h>

int main(void)
{
    char str1[80], str2[80];
    char temp[80];
    
    printf("두 문자열 입력 : ");
    scanf("%s%s",str1,str2);
    printf("바꾸기 전 : %s, %s\n", str1, str2);
    strcpy(temp, str1); //temp 배열에 str1배열의 문자열 대입
    strcpy(str1, str2); //str1 배열에 str2 배열의 문자열 대입
    strcpy(str2, temp); //str2 배열에 temp 배열의 문자열 대입
    
    printf("바꾼 후 : %s, %s\n",str1,str2);
    
    return 0;
}
