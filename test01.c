# include<stdio.h>
// 在1-4中，任取3个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
// 思考下，如果只用数学该怎么计算？4*3*2=24
int main(){
    int i,j,k,count = 0;
    printf("\n");
    for(int i = 1; i < 5; i++){
        for(int j = 1; j < 5; j++){
            for(int k = 1; k < 5; k++){
                // 个，十，百，两两不相等
                if((i!=j)&&(i!=k)&&(j!=k)){
                    // 格式化输出
                    printf("%d,%d,%d\n",i,j,k);
                    count++;
                }
            }
        }
    }
    printf("一共可以组成%d个数字",count);
}