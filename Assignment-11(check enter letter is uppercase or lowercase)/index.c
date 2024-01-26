#include <stdio.h>
int main(){
    /* jese hum number ko lower or gratter than s check krtay hn usi tarah hum letter ko bhi kr sktay hn kukay har letter ki apni alag numerical value hoti h jo k compiler ko pata hoti h*/

    //character ko humesha single commas m likhtay hn other wise compiler error de deta h
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("You enter lowercase letter ");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("You enter uppercase letter ");
    }
    else{
        printf("You didn't enter valid english character");
    }
    

    return 0;
}