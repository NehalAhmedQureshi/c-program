#include <stdio.h>
int main(){
    float marks;
    printf("Write student marks to check if a student is passed or failed ");
    scanf ("%f",&marks);
    if (marks <= 30 && marks >= 0)
    {
        printf("Sorry student is fail\n");
    } 
    else if (marks >30 )
    {
        printf("Congratulations student is passed");
    }
    return 0;
}