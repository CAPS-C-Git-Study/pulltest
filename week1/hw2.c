#include <stdio.h>

int main(int argc, char* argv[]){
    const int count = 100;
    for(int i=1; i<count; i++){
        if(i%3==0)
            printf("%d ",i);
        if(i%30==0)
            printf("\n");
    }
    printf("\n");
    
    return 0;
}