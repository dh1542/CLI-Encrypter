#include<stdio.h>
#include<stdbool.h>
#include<string.h>
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
    
    

    do
    {   
        char choice[MAX_LIMIT];
        printf("Input 'q' to leave or 'e' to encrypt\n");
        printf("Your choice: ");
        fgets(choice, MAX_LIMIT, stdin);
        printf("\n");
        printf("%s\n", choice);

        
        // terminate programm --> "q" was chosen
        if(strcmp(choice, "q") == 10){
            printf("Goodbye! And see you soon!\n");
            return 0;
        }
        // encrypt word
        else if (strcmp(choice, "e") == 10)
        {
            printf("Encrypt word\n");
            return 0;
        }
        else{
            printf("Invalid input. I don't understand: %s\n", choice);
        }
        
    } while (true);
    
    

    

    
    
    
    
}
