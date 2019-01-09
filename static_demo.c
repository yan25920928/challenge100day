// static 局部变量与全局变量作用域

# include <stdio.h>

//函数声明
void func1(void);
// static int count = 10;
//全局变量, 默认被static修饰
int count = 10;

int main(){
    while(count--){
        func1();
    }
    return 0;
}

void func1(void){
    // static修饰的局部变量, 只初始化1次，每次调用func1时，thingy的值不会被重复初始化
    static int thingy = 5;
    // 普通局部变量，每次调用func1都会调用初始化
    // int thingy = 5;
    thingy++;
    printf("thingy: %d,\tcount: %d\n", thingy, count);
}