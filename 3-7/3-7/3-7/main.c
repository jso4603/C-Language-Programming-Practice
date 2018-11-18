//
//  main.c
//  3-7
//
//  Created by 장상옥 on 2018. 11. 15..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    char fruit[20] = "strawberry"; //char 배열 선언과 초기화
    
    printf("딸기 : %s \n", fruit); //배열명으로 strawberry 출력
    printf("딸기쨈 : %s %s \n", fruit, "jam"); //문자열은 %s로 출력
    printf("좋아하는 과일 : %s \n", fruit);
    
    return 0;
}
