#include <stdio.h>

int main(int argc, char* argv[]){
    int a, b;
    char op;
    double result;

    while(1){
        printf("두개의 정수를 입력하시오 : ");
        scanf("%d %d", &a, &b);
        printf("연산자를 입력하시오 : ");
        scanf(" %c", &op);  //엔터 버퍼 제거

        switch(op){
            case '+' : 
            result = a + b; 
            break;

            case '-' :
            result = a - b;
            break;

            case '*' :
            result = a * b;
            break;

            case '/' :
            if(b==0){
                printf("0으로 나눌 수 없습니다.\n");
                continue;
            }
            result = (double)a / b;
            break;

            case '!' :
            printf("프로그램을 종료합니다.\n");
            break;

            default : 
            printf("잘못된 연산자입니다.\n");
            continue;
        }
        if(op=='!') break;
        printf("Result = %lf\n", result);
    }

    return 0;
}