# include <stdio.h>

int main(){
    int a = 12;
    double d = 23.09;
    printf("int: %d\n",sizeof(a));
    printf("double: %d\n",sizeof(d));
    printf("a: %d\n", &a);

    int *b;
    b = &a;
    printf("*b: %d\n",*b);   

    d > 10 ? printf("d>10") : printf("d<10");
}