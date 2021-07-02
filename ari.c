#include <string.h>
#include <ctype.h>
#include <math.h>

const char* ari(char s[1000]){
    
    int char_count=0,word_count=0,sent_count=0,ari;
    float ari_calc;
    const char *str;


    for(int i=0;i<strlen(s);i++){

        if(isalnum(s[i])){
            char_count++;
            continue;
        }
        else if(s[i] == ' ' && s[i+1] != ' '){
            word_count++;
        }
        else if(s[i] == '.'||s[i] == '?'){
            sent_count++;
            continue;
        }else{
            continue;
        }
    }
    ari_calc=(4.71 * char_count/word_count) + (0.5 * word_count/sent_count) - 21.43;
    ari=ceil(ari_calc);
    switch(ari){
        case 1 : str="Kindergarten";
        break;
        case 2 : str="First/Second Grade";
        break;
        case 3 : str= "Third Grade";
        break;
        case 4 : str="Fourth Grade";
        break;
        case 5 : str="Fifth Grade";
        break;
        case 6 : str="Sixth Grade";
        break;
        case 7 : str="Seventh Grade";
        break;
        case 8 : str="Eighth Grade";
        break;
        case 9 : str="Ninth Grade";
        break;
        case 10 : str="Tenth Grade";
        break;
        case 11 : str="Eleventh Grade";
        break;
        case 12 : str="Twelfth Grade";
        break;
        case 13 : str="College Student";
        break;
        case 14 : str="Professor";
        break;
        default: break;
        }

        return str;
   
}
