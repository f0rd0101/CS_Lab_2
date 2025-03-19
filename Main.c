#include <stdio.h>
#include <math.h>

double Z(double x, double a) {
    return a * sin(x);
}

int main() {
    double x_p, x_k, dx, a;

    printf("Введіть коефіцієнт a: ");
    scanf("%lf", &a);
    printf("Введіть початкове значення x_p: ");
    scanf("%lf", &x_p);
    printf("Введіть кінцеве значення x_k: ");
    scanf("%lf", &x_k);
    printf("Введіть крок дельта х: ");
    scanf("%lf", &dx);

    
    printf("\nРезультат:\n");
    for (double x = x_p; x <= x_k; x += dx) {
        if (x > x_k) break;  // Додаємо умову для припинення циклу, якщо x перевищує x_k
        printf("Z(%.3f) = %.3f\n", x, Z(x, a));
    }

    return 0;
}
