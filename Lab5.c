#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846

double task1(double gr);
void task2(double x, double p);

int main()
{
    double x, result, gr;
    const double p = 3.0;

    scanf("%lf", &gr);

    result = task1(gr);
    printf("sin = %.6f\n", result);

    printf("Введите значение x: ");
    scanf("%lf", &x);

    task2(x, p);

    return 0;
}

double task1(double gr)
{
    double rad = gr * M_PI / 180;
    return sin(rad);
}
void task2(double x, double p)
{
    double a = sqrt(p * x);
    double b = p * pow(x, 2) + sqrt(a);
    double y = pow(log(pow(b, 2)), 3) + a * x;

    printf("x = %.1f\n", x);
    printf("y = %.1f\n", y);

    int A = (int)a;
    int B = (int)b;
    int C = (int)y;

    int cond_a = (A % 2 == 0) != (B % 2 == 0);
    int cond_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

    printf("условие а) выполнено (1 - да, 0 - нет): %d\n", cond_a);
    printf("условие б) выполнено (1 - да, 0 - нет): %d\n", cond_b);
}
