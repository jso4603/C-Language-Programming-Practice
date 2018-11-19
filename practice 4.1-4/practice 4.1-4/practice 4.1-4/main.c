//
//  main.c
//  practice 4.1-4
//
//  Created by 장상옥 on 2018. 11. 19..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int centi;
    double inch;
    
    centi = 2 * 100; //미터를 센티미터로 환산
    inch = centi / 2.54; //센티미터를 인치로 환산, 1인치는 2.54센티미터
    
    printf("2미터는 %.1f인치입니다.\n", inch);
    
    return 0;
}


/* //내가 쓴 답(미터를 입력하여 인치로 환산하는 프로그램)
#include<stdio.h>

int main(void)
{
    int centi, meter;
    double inch;
    
    printf("환산 할 미터를 입력하세요");
    scanf("%d", &meter);
    centi = meter * 100; //미터를 센티미터로 환산
    inch = centi / 2.54; //센티미터를 인치로 환산, 1인치는 2.54센티미터
    printf("%d미터는 %.1lf인치 입니다.\n", meter, inch);
    
    return 0;
}
*/
