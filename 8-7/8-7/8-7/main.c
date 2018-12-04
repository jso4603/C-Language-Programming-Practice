//
//  main.c
//  8-7
//
//  Created by 장상옥 on 2018. 12. 4..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>
#include<string.h>

int main(void)
{
    char str1[80] = "cat";
    char str2[80];
    
    strcpy(str1, "tiger"); //str1 배열에 "tiger" 복사
    strcpy(str2, str1); //str2 배열에 str1 배열의 문자열 복사
    printf("%s, %s\n", str1, str2);
    
    return 0;
}
