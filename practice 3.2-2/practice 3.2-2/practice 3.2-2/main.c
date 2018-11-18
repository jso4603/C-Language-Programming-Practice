//
//  main.c
//  practice 3.2-2
//
//  Created by 장상옥 on 2018. 11. 16..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    char fruit[20];
    int cnt;
    
    printf("좋아하는 과일 : ");
    scanf("%s", fruit);
    printf("몇 개 : ");
    scanf("%d", &cnt);
    
    printf("%s를 %d개 드립니다.\n", fruit, cnt);
    
    return 0;
    
}
