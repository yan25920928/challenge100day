# include <stdio.h>

int main(){
    printf("char 存储最大字节数 : %d \n", sizeof(char));
    printf("int 存储最大字节数 : %d \n", sizeof(int));
    printf("short 存储最大字节数 : %d \n", sizeof(short));
    printf("long 存储最大字节数 : %d \n", sizeof(long));
    printf("float 存储最大字节数 : %d \n", sizeof(float));
    printf("double 存储最大字节数 : %d \n", sizeof(double));
    printf("long double 存储最大字节数 : %d \n", sizeof(long double));
    return 0;
}