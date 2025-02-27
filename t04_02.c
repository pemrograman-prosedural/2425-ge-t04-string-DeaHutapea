// 12S24053 - Dea Hutapea
// 12S24058 - Airene Situmorang

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char string[21];
    printf("Input: ");
    scanf("%20[^\n]", string);  
    
    int length = strlen(string);
    printf("Output: ");
    for (int i = 0; i < length; i++) {
        printf("%03d", string[i]); 
    }
    printf("013\n");  
    
    return 0;
}
