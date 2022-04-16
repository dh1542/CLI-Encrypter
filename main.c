#include<stdio.h>
#define MAX_LIMIT 100

int main() {

    // greeting message
    printf("#####################################\n");
    printf("##      Command-Line ENCRYPTER     ##\n");
    printf("## Copyright Dominik Hoffmann 2022 ##\n");
    printf("#####################################\n");
    printf("\n\n\n");

    // prompt user for input
    char choice[MAX_LIMIT];
    printf("Input 'q' to leave or 'e' to encrypt\n");
    printf("Your choice: ");
    fgets(choice, MAX_LIMIT, stdin);
    printf("\n");
    printf("%s\n", choice);

    

    
    
    
    
}
