//
//  main.c
//  practice 8.2-5
//
//  Created by 장상옥 on 2018. 12. 4..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[80] = "bananajuice"; //bananajuice 문자열로 초기화
    
    strcpy(str, "apple"); //apple 문자열 대입, banana 부분이 apple\0 으로 바뀜.
    str[5] = '-'; //널문자의 위치를 찾아서 문자 '-'로 바꾼다.
    puts(str); //널 문자가 나올 때 까지 출력하므로 apple-juice 출력
    
    return 0;
}
