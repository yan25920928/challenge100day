# include <stdio.h>

int main(){
    int n[10];
    int i, j;
    // 初始化数组
    for(int i = 0; i < 10; i++){
        n[i] = i + 100;
    }
    //输出每个元素值
    for(int j = 0; j < 10; j++){
        printf("Element[%d] = %d\n", j, n[j]);
    }

    return 0;
}