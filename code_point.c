#include <stdint.h>
#include <stdio.h>

int32_t code_point2(char c1, char c2) {
    char part1 = c1 & 0b00011111;
    char part2 = c2 & 0b00111111;
    return (part1 << 6) + part2;
}

int32_t code_point3(char c1, char c2, char c3) {
    char part1 = c1 & 0b00001111;
    char part2 = c2 & 0b00111111;
    char part3 = c3 & 0b00111111;
    return (part1 << 12) + (part2 << 6) + part3;
}

int main() {
    char s[] = "é";
    printf("%d\n", code_point2(s[0], s[1]));

    char s2[] = "ピ";
    printf("%d\n", code_point3(s2[0], s2[1], s2[2]));
}