#include <stdio.h>
int main(){
    float marks;
    /*A program to giving grades to student by taking his marks */
    printf("Enter marks under(0-100) : ");
    scanf("%f", &marks);

    if (marks < 30 && marks > 0)
    {
        printf("Your grade is C \n");
    }
    else if (marks >= 30 && marks < 70)
    {
        printf("Your grade is B \n");
    }
    else if (marks >= 70 && marks < 90)
    {
        printf("Your grade is A \n");
    }
    else if (marks >= 90 && marks <= 100 )
    {
        printf("Your grade is A++ \n");
    }
    else {
        printf("Your's enter's value is unvalid \n");
    }
    return 0;
}