//
//  main.c
//  practice 3.2-3
//
//  Created by 장상옥 on 2018. 11. 16..
//  Copyright © 2018년 장상옥. All rights reserved.
//

#include<stdio.h>

int main(void)
{
    char ch; //문자를 저장할 변수
    
    printf("문자 입력 :");  //입력 안내 메시지
    scanf("%c", &ch);   //ch변수에 문자 입력
    printf("%c문자의 아스키 코드값은 %d입니다.\n", ch, ch);
    
    return 0;
}

/* //내가 쓴 답
#include<stdio.h>

int main(void)
{
    char eng;
    
    printf("문자 입력 :");
    scanf("%c\n", &eng);
    printf("%c문자의 아스키 코드값은 %d입니다.\n", eng, eng);
    
    return 0;
    
}
*/
