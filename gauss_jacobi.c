#include <stdio.h>

int main() {
    float x = 0, y = 0, z = 0;
    float x1, y1, z1;
    int i;

    printf("Gauss Jacobi Method\n");
    printf("~~~~~~~~~~~~~~~~~~~\n");
    for(i = 1; i <= 10; i++) {
        x1 = (85 - 6*y + z) / 27;
        y1 = (72 - 6*x - 2*z) / 15;
        z1 = (110 - x - y) / 54;

        printf("Iteration %d: x = %.2f, y = %.2f, z = %.2f\n", i, x1, y1, z1);

        x = x1;
        y = y1;
        z = z1;
    }

    return 0;
}
