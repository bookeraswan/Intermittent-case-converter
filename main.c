#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


void convert(char*);


int main(int argc, char* argv[]){
    char str[500];
    strcpy(str, argv[argc-1]);
    convert(str);
    printf("\n%s\n\n", str);
}



void convert(char str[]){             // a-z = 97-122	    A-Z = 65-90
    int str_len = strlen(str);
    for(int i = 1; i < str_len; i++){
        bool i_is_lowercaseletter = (97 <= str[i] && str[i] <= 122);
        bool i_is_uppercaseletter = (65 <= str[i] && str[i] <= 90);
        if(!(i_is_lowercaseletter || i_is_uppercaseletter)) continue;
        if((97 <= str[i-1] && str[i-1] <= 122) && (i_is_lowercaseletter || i_is_uppercaseletter)){
            str[i] = (str[i]) - 32;
        }
    }
}



