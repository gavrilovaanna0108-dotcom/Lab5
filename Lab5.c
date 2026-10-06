#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846
void example();
void task1();
void task2();
int main(){
    example();
    task1();
    task2();
	return 0;
}
void example(){
    double x,y;
    double res1=0.5*y;
    double res2=pow(x,res1);
    double res3=sin(res2);
    double res4=y+8e-4;
    double res5=pow(res4,1/5.f);
    double result=res3+res5;
    printf("result = %f\n", result);
}
void task1(){
    double gr;
    scanf("%lf", &gr);
    double rad=gr*M_PI/180;
    printf("rad = %.6f\n", rad);

}
void task2(){
    const double p = 3.0;
    double x;

    printf("Введите значение x: ");
    scanf("%lf", &x);
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
