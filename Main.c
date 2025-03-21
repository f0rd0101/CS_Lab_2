#include <stdio.h>
#include <math.h>

double Z(double x, double a) {
    return a * sin(x);
}

int main() {
    double x_p, x_k, dx, a;

    
    printf("Введіть коефіцієнт a: ");
    scanf("%lf", &a);
    printf("Введіть стартове значення x_p: ");
    scanf("%lf", &x_p);
    printf("Введіть кінцеве значення x_k (Обов'язково більше ніж стартове!): ");
    scanf("%lf", &x_k);
    printf("Введіть крок дельта х: ");
    scanf("%lf", &dx);

    
    int n = (int)((x_k - x_p) / dx) + 1;

    
    double Z_values[n];

    
    for (int i = 0; i < n; i++) {
        double x = x_p + i * dx;
        Z_values[i] = Z(x, a);
    }

   
    printf("\nРезультат:\n");
    for (int i = 0; i < n; i++) {
        printf("Z(%.3f) = %.3f\n", x_p + i * dx, Z_values[i]);
    }

    return 0;
}
