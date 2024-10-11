#include <stdio.h>
#include <stdint.h>
#include <string.h>

void capitalize(char s[]) {
    uint32_t index = 0;
    printf("sizeof(s) = %ld\tstrlen(s) = %ld\ts: %p\n", sizeof(s), strlen(s), s);
    while(s[index] != 0) {
        if(s[index] >= 'a' && s[index] <= 'z') {
            s[index] -= 32;
        }
        index += 1;
    }
}

int main() {
    char h[] = "hello";
    printf("sizeof(h) = %ld\tstrlen(h) = %ld\th: %p\n", sizeof(h), strlen(h), h);
    capitalize(h);

    printf("%s\n", h);


    char g[] = "greetings i'm really excited to be here";
    printf("sizeof(g) = %ld\tstrlen(g) = %ld\tg: %p\n", sizeof(g), strlen(g), g);
    capitalize(g);
    printf("%s\n", g);
}


