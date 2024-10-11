#include <stdint.h>
#include <stdio.h>

void print_as_bin(char c) {
    for(int place = 128; place > 0; place /= 2) {
        if((c & place) == 0) printf("0");
        else printf("1");
    }
}


int main() {   
    char s = 200;
    unsigned char u = 200;

    printf("s: ");
    print_as_bin(s);
    printf("\t\tu: ");
    print_as_bin(u);
    printf("\n");

    printf("s as hhx: %hhx\t\tu as hhx: %hhx\n", s, u);
    printf("s as x: %x\tu as x: %x\n", s, u);

    printf("s < 127: %d\t\tu < 127: %d\n", s > 127, u > 127);
}