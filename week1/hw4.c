#include <stdio.h>

int main(int argc, char* argv[]){
    int col, op;
    printf("몇 줄을 출력하시겠습니까? : ");
    scanf("%d", &col);
    printf("정피라미드일 경우 1, 역피라미드일 경우 2를 입력하시오 : ");
    scanf("%d", &op);

    if(op==1){
        for(int i=1; i<=col; i++){
            for(int j=1; j<=col-i; j++)
                printf(" ");
            for(int j=1; j<=2*i-1; j++)
                printf("*");
            printf("\n");
        }
    }

    else if(op==2){
        for(int i=col; i>=1; i--){
            for(int j=1; j<=col-i; j++)
                printf(" ");
            for(int j=1; j<=2*i-1; j++)
                printf("*");
            printf("\n");
        }
    }
    
    else {
        printf("잘못된 입력입니다.\n");
        return 1;
    }

    return 0;
}