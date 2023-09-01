#include<stdio.h>
// enter character to find upper case or lower case character
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c", &ch);

    // char as every char ka esky value hota hai in integer me hum logical laga skate hai 

    if (ch >= 'A' && ch <='Z')
    {
        printf("Upper Case");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("Lower Case");
    }
    else{
        printf("Special character (Not english letter)");
    }
    return 0;

}