//
//  main.c
//  practice 9.1-2
//
//  Created by 장상옥 on 2018. 12. 5..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int a = 10; //a값을 10으로 초기화
    int *p = &a; //*p는 변수 a를 가리킨다.(a의 주소를 p에 저장하여 p가 a를 가리키도록 초기화)
    
    *p= 20; //p가 가리키는 변수(a)에 20을 대입
    
    printf("%d\n",a); //20으로 바뀐 a값 출력
    
    return 0;
}
