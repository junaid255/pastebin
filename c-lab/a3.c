#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

int p1_strlen( const char * str ) {
    // const char str[300];
    // fgets(str, 300, stdin);
    int count = 0;
    for( int i=0 ; str[i] != '\0' ; i++)
        count++;
    printf("Without strlen: %d\n", count);
    printf("With Strlen: %d\n", strlen(str));
}

int p2_concatenate(char * str1, char * str2) {
    // const char str[90];
    // scanf("%[^\n]s", &str);
    char * fStr = (char *) malloc(sizeof(str1)+sizeof(str2));
    int i=0, total=0;
    while(str1[i] != '\0') {
        fStr[total] = str1[i];
        total++; i++;
    }
    i=0;
    while(str2[i] != '\0') {
        fStr[total] = str2[i];
        total++; i++;
    }
    fStr[total] ='\0';

        printf("%s", fStr);
        strcat(str1, str2);
        // printf("%s\n", fStr);
        printf("%s\n", str1);
}

int p3_copyStr(char * src, char * dst) {
    int i;
    for( i=0; src[i] != '\0'; i++) {
        dst[i] = src[i];
    }
    dst[i] = '\0';
}

int p4_charFreq(const char * str, char c) {
    int digits=0;
    for(int i=0; str[i] != '\0'; i++) {
        if( str[i] == c )
            digits++;
    }
    printf("%d", digits);
}

int p5_string_stat( char * str){
    int digits = 0;
    int ws = 0;
    int consonants = 0;
    int vowels = 0;
    for(int i=0; str[i] != '\0'; i++) {
        if( str[i] >= '0' && str[i] <='9' ) {
            digits++;
        } else if(str[i] == ' ') {
            ws++;
        } else if(
            str[i] == 'a' ||
            str[i] == 'e' ||
            str[i] == 'i' ||
            str[i] == 'o' ||
            str[i] == 'u' ||
            str[i] == 'A' ||
            str[i] == 'E' ||
            str[i] == 'I' ||
            str[i] == 'O' ||
            str[i] == 'U'
        ) {
            vowels++;
        } else {
            consonants++;
        }
    }
    printf(
        "Vowels = %d "
        "consonats = %d "
        "digits = %d "
        "white space = %d "
        ,vowels, consonants, digits, ws
    );

}

int main() {
    // p1_strlen("Hello world");
    // p2_concatenate("hello", " world");

    char src[] ="hello world";
    char dest[50];
    p3_copyStr(src ,dest);
    printf("%s", dest);
    
    
    // char str[90];
    // scanf("%[^\n]s", str);
    // gets(str);
    // p4_charFreq("abc", 'a');
    // p5_string_stat(str);
    // char str1[50] = "hello";
    // char str2[50] = " world";
    // char * str1 = "hello";
    // char tmp[59] = str1; 
    // char * str2 = " world";
    // strcat(str1, str2);
    // char tmp[] = *str1;
    // printf("%s", str1);

}