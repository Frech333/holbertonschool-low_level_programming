#include <stdio.h>

void print_number(int num) {
    if (num == 0) {
        putchar('0');
        return;
    }

    if (num < 0) {
        putchar('-');
        num = -num;
    }

    int digits[10];
    int count = 0;

    while (num > 0) {
        digits[count] = num % 10;
        num /= 10;
        count++;
    }

    for (int i = count - 1; i >= 0; i--) {
        putchar('0' + digits[i]);
    }
}

int main() {
    for (int i = 0; i < 10; i++) {
        print_number(i);
        putchar('\n');
    }

    return 0;
}
