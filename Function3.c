// Write s function that prints Namaste if user is Indian & Bonjour if the user is French.

# include <stdio.h>
void namaste();       // Declaraction prototype function
void bonjour();

int main(){
    char ch;
    printf("Enter f for french & i for indian:");
    scanf("%c", &ch);

    if(ch == 'i'){
        namaste();   // call function
    }else {
        bonjour();   // call function

    }
    return 0;
 
 
}

// function defination 
void namaste(){
    printf("Namaste\n");

}
void bonjour(){
    printf("Bonjour\n");

}