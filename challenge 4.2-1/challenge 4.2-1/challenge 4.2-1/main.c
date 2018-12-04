//
//  main.c
//  challenge 4.2-1
//
//  Created by 장상옥 on 2018. 11. 21..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    int weight;
    double height, bmi, res;
    
    printf("몸무게와 키를 입력하세요:");
    scanf("%d %lf", &weight, &height);
    //printf("키 : %.1lf \n" , height);
    //printf("몫 : %d \n" , (int) height / 100);
    //printf("나머지 %.1lf \n" , height / 100.00);
    bmi = (double)weight / ((height/100.0) * (height/100.0));
    
    res = (bmi>=20.0) && (bmi<25.0);
    
    /*if (bmi >= 20.0 && bmi < 25.0) {
        printf("표준입니다.");
    } else {
        printf("체중관리가 필요합니다.");
    }
    
    printf("res value : %d", (int) res);
    printf("bmi value : %lf", bmi);*/
    //bmi = weight / height 2
    printf("%s\n",(res==1) ?"표준 입니다." : "체중관리가 필요합니다.");
    
    return 0;
}
