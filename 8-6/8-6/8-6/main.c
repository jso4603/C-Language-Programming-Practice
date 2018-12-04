//
//  main.c
//  8-6
//
//  Created by 장상옥 on 2018. 12. 4..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    char str[5];
    
    str[0] = 'o';
    str[1] = 'k';
    printf("%s\n",str); //o,k 나머지 뒤에는 쓰레기 값 출력
    
    return 0;
}
