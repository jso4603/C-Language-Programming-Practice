//
//  main.c
//  3-11
//
//  Created by 장상옥 on 2018. 11. 16..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int age;
    double height;
    
    printf("나이와 키를 입력하세요 : ");  //입력 안내 메시지 출력
    scanf("%d%lf",&age, &height);   //나이와 키를 함께 입력
    printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height); //입력값 출력
    
    return 0;
}
