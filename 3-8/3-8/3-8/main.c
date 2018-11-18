//
//  main.c
//  3-8
//
//  Created by 장상옥 on 2018. 11. 15..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include <stdio.h>
#include <string.h> //string.h 헤더 파일 포함

int main(void)
{
    char fruit[20] = "strawberry"; //strawberry 초기화
    
    printf("%s \n", fruit); //strawberry 출력
    
    strcpy(fruit, "banana"); //fruit에 banana복사
    printf("%s \n", fruit); //banana 출력
    
    return 0;
}
