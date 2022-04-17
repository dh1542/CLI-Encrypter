#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include "encryption.h"

// encrypts given string with n-shift caesar's cipher 
char* caesar(char* input, int shift){
    
    for(int i = 0; i < strlen(input) - 1; i++){
        char current = input[i];
        if(isupper(current)){
            input[i] = (current + shift - 65) % 26 + 65;
        } 
        else{
            input[i] = (current + shift - 97) % 26 + 97;
        }
    }

    return input;
}
