//
//  main.c
//  practice 3.1-2
//
//  Created by 장상옥 on 2018. 11. 15..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include <stdio.h>

int main(void){
    
    int a;
    
    a = a + 1;
    a = a + 2;
    a = a + 3;
    
    printf("a : %d \n", a); //a의 값이 초기화 되지 않았으므로 쓰레기값이 출력
    
    return 0;
}
