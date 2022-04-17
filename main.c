#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include "encryption.h"
#define MAX_LIMIT 100



int main() {

    // greeting message
    printf("\n\n\n");
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
            printf("\n");
            return 0;
        }
        // encrypt word
        else if (strcmp(choice, "e") == 10){
            
            

            do
            {
                printf("Choose a cipher!\n");
                printf("Type: \n 'caesar' for caesars's cipher \n 'vignere' for vigenere cipher \n or 'q' to quit \n");
                
                // choose cipher
                char cipher[MAX_LIMIT];
                printf("Cipher: ");
                fgets(cipher, MAX_LIMIT, stdin);
                

                
                if(strcmp(cipher, "q") == 10){
                    printf("Go back to main menu\n");
                    break;
                }
                else if(strcmp(cipher, "caesar") == 10){
                    // prompt for to be encrypted word
                    char plain[MAX_LIMIT];
                    printf("Plain text: ");
                    fgets(plain, MAX_LIMIT, stdin);


                    int shift;
                    printf("Number of shifts for caesar's cipher: ");
                    scanf("%d/n", &shift);
                    
                    printf("Encrypted text: %s\n", caesar(plain, shift));
                    printf("\n");
                    break;
                }
                else if(strcmp(cipher, "vigenere") == 10){
                    // prompt for to be encrypted word
                    char plain[MAX_LIMIT];
                    printf("Plain text: ");
                    fgets(plain, MAX_LIMIT, stdin);


                    // get key word
                    char key[MAX_LIMIT];
                    printf("Key-Word: ");
                    fgets(key, MAX_LIMIT, stdin);
                    
                    printf("Encrypted text: %s\n", vigenere(cipher, key));
                    printf("\n");
                    break;
                }

            } while (true);
            
            

            
        }
        // invalid input
        else{
            printf("Invalid input. I don't understand: %s\n", choice);
        }
        
    } while (true);

}








