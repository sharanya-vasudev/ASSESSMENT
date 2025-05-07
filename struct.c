#include <stdio.h>

int temp(float a) {
    printf("The temp is: %f\n", (a*9/5) + 32);

    return a*9/5 + 32;
    }
int main() {
    temp(23.9);
    return 0;
}

