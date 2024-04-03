#include <stdio.h>

int main(int argc, char* argv[]){
    int mid, fin;
    double total, mean;

    printf("Enter your midterm score: ");
    scanf("%d", &mid); // midterm score
    printf("Enter your final score: ");
    scanf("%d", &fin); // final score

    total = mid + fin;
    mean = total / 2;

    if(mean>=90) printf("Your grade is A\n");
    else if(mean>=80) printf("Your grade is B\n");
    else if(mean>=70) printf("Your grade is C\n");
    else if(mean>=60) printf("Your grade is D\n");
    else printf("Your grade is F\n");

    return 0;
}