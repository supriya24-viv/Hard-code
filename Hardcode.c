#include <stdio.h>

int main() {
    float a = 5.0, b = 2.0, c = -5.0, x = 7.0, y;
    y = (a * x * x) + (b * x) + c;
    printf("For x = %.2f, the result is y = %.2f\n", x, y);
    return 0;
}
