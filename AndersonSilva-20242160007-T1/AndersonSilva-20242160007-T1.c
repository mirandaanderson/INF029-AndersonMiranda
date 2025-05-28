#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include <AndersonSilva-20242160007-T1.h>

int main() {

    int q5(int num) {
    int invertido = 0;
    while (num > 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }
    return invertido;
}

    return 0;
}