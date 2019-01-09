#include <stdio.h>

int main(){
    int a = 10;
    int b = 3;
    int c = a / b;
    int d = a % b;
    printf("c:%d, d:%d", c,d);

    int e = a++;
    printf("先赋值后运算：\n");
    printf("Line 1 - e 的值是 %d\n", e);//e = 10
    printf("Line 2 - a 的值是 %d\n", a);//a = 11

    a = 10;
    int f = ++a;
    printf("先运算后赋值：\n");
    printf("Line 1 - f 的值是 %d\n", f);//f = 11
    printf("Line 2 - a 的值是 %d\n", a);//a = 11
}