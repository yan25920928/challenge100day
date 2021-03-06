/**
 * 题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
 * 分析思路：
 * x + 100 = n*n
 * x + 100 + 168 = m * m
 * 1.求x取值可能，转换求出符合条件的m与n的值: n * n + 168 = m * m
 * 2.等价求n与m的值：(m + n)(m - n) = 168, 代换一下 m + n = i, m - n = j
 * i * j = 168, 推断 i,j必有一个为偶数
 * m = (i + j)/2; n = (i - j)/2; 由于m和n为整数 m%2==0, n%2==0，推断 i和j 必为 >= 2的偶数
 * 当 j >= 2时，i = 168/j, i的取值范围 2 <= i <=168/2
 * 3. 进而转换为在指定区间内，遍历符合条件(j * i = 168; 168 % i == 0;)的数值对，i与j，
 * 推导出m与n，进而还原出x值
 * x = n*n - 100
 * x = m*m - 268
 * */
# include<stdio.h>

int main(){
    int i,j,n,m,x;
    
    for(int i = 2; i <= 168/2; i++){
        if(168%i == 0){
        j = (168 / i);
            // if(j <= i){ 
            if(j <= i && (i + j) % 2 == 0 && (i - j) % 2 == 0 ){
                m = (i + j) / 2;
                n = (i - j) / 2;
                x = (n * n) -100;
                printf ("%d + 100 = %d * %d\t\t", x, n, n);
                printf ("%d + 168 = %d * %d\n", x, m, m);
            }
        }
    }
    return 0;
}