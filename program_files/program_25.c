// Write a program to print the freqencies of characters in a stg

#include <stdio.h>
#include <string.h>

int main(){

    char stg[] = "organisms in this world";
    int freq[strlen(stg)];
    printf("Freqencies of characters in '%s' \n", stg);

    for(int i=0; i < strlen(stg); i++){
        freq[i] = 1;
        for (int j=i+1; j < strlen(stg); j++){
            if (stg[i] == stg[j]){
                 freq[i] += 1;
                 stg[j] = '0';
            }
            else{
                freq[i] == 0;
            }

        }

    }

    for(int k = 0; k < strlen(stg); k++){
        if (stg[k] != ' ' && stg[k] != '0'){
            printf("%c -- %d \n", stg[k], freq[k]);
        }
        
    }

    return 0;
}

