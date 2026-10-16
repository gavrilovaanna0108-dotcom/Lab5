#include <stdio.h>
#include <math.h>

double calc(double x, double y, double z);

int main() {
    double x, y, z;
    double alpha;

    printf("Введите значение x: ");
    scanf("%lf", &x);
    
    printf("Введите значение y: ");
    scanf("%lf", &y);
    
    printf("Введите значение z: ");
    scanf("%lf", &z);

    alpha = calc(x, y, z);
    printf("\nРезультат вычисления alpha = %.3f\n", alpha);

    return 0;
}
double calc(double x, double y, double z){
    double res1 = log(pow(y, -sqrt(fabs(x))));
    double res2 = x - y / 2.0;
    double res3 = pow(sin(atan(z)), 2);
    return res1 * res2 + res3;
}
