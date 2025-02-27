// 12S24053 - Dea Hutapea
// 12S24058 - Airene Situmorang

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    char input[61]; 
    printf("Input: ");
    scanf("%60s", input);

    int length = strlen(input);
    if (length < 3 || length > 60 || length % 3 != 0) {
        printf("Input tidak valid.\n");
       return 1;
    }

    printf("Output: ");
    for (int i = 0; i < length; i += 3) {
        char Ascii_str[4];
        Ascii_str[0] = input[i];
        Ascii_str[1] = input[i+1];
        Ascii_str[2] = input[i+2];
        Ascii_str[3] = '\0';

        int Ascii_code = atoi(Ascii_str);
        printf("%c", (char)Ascii_code);
    }
    printf("\n");
   
    return 0;
}
