# challenge100day
c programming language practice 

#####01 变量：
- 本质：程序可操控的一段存储区
- 数据类型：变量的类型决定了存储区的大小和布局（在浮点型上表现明显，符号，指数，小数）
- 命名规则：必须以字母和下划线开头，可以由字母，数字，下划线组成
- 初始化：如果未进行初始化操作，带有静态存储持续时间的变量会被隐式初始化为 NULL（所有字节的值都是 0），其他所有变量的初始值是未定义的。
- 变量声明与定义
    - 需要建立存储空间 ```int a //既是声明也是定义```
    - 不需要建立存储空间，通过使用extern关键字声明变量名而不定义它。 ``` extern int a //只声明，不定义```
- 赋值操作
    - 左值 lvalue ：指向内存位置的表达式被称为左值（lvalue）表达式。左值可以出现在赋值号的左边或右边。
    - 右值 rvalue ：指的是存储在内存中某些地址的数值称为右值（rvalue）表达式。
    右值是不能对其进行赋值的表达式，也就是说，右值可以出现在赋值号的右边，但不能出现在赋值号的左边。 
    - *简言之——变量是左值，因此可以出现在赋值号的左边。数值型的字面值是右值，因此不能被赋值，不能出现在赋值号的左边。*
    ```eg: 正常int g = 20; 错误 10 = 20 ```
    
#####02 常量：
- 本质：常规变量，只是在定义后不能随意修改，在程序执行期间不会值改变
- 类型：
    - 整数常量
        - 前缀：0x表示16进制，0表示8进制，默认无前缀表示10进制
            - ```078         /* 非法的：8 不是八进制的数字 */```
        - 后缀：U表示无符号整数，L表示长整数
            - U和L顺序可以任意，大小写可以通用 ```30ul       /* 无符号长整数 */```
            - 可单独使用 ```30u        /* 无符号整数 */```
            - 不能重复 ```032UU       /* 非法的：不能重复后缀 */```
    - 浮点常量：由整数部分，小数点，小数部分和指数部分组成
        - 浮点型含义：按照科学计数法小数点是浮动的，位置是可变的。    
        `eg: 1.23x10^9和12.3x10^8完全相等`
        - 小数形式：必须同时包含整数部分，小数部分    
        `210f          /* 非法的：没有小数部分 */`
        - 指数形式：必须包含小数点，指数部分，带符号的指数用e或者E引入，(科学计数法中10用e来代替)    
        `510E          /* 非法的：不完整的指数 */`
    - 字符常量：字符常量可以是一个普通的字符（例如 'x'）、一个转义序列（例如 '\t'），或一个通用的字符（例如 '\u02C0'）。
        - 转义字符
    - 字符串常量：字符串字面值或常量是括在双引号 "" 中的。一个字符串包含类似于字符常量的字符：普通的字符、转义序列和通用的字符。
- 定义常量：把常量名定义为大写字母形式
    - defind 预处理器
        - 井defind variable value `#define WIDTH  5;`
    - const关键字
        - const type variable = value; `const int  LENGTH = 10;`   
    
#####[03 存储类](http://www.runoob.com/cprogramming/c-storage-classes.html)
- 存储类定义C程序中变量/函数的范围（可见性），和生命周期。放置在它们所修饰的类型之前
- 类型：
    - auto：局部变量默认存储器 `auto int month;`  
    - register：定义可能存储在寄存器中用于快速访问的变量，而不是RAM中的局部变量 `register int miles;`
    - static：指示编译器在程序的生命周期内保持局部变量的存在。无需每次进入和离开作用域时进行创建和销毁操作。
        - static 修饰的局部变量，可以在函数调用之间，保持局部变量的值
            - static修饰的局部变量, 只初始化1次，每次调用所在方法时，变量的值不会被重复初始化
        - static 修饰的全局变量或方法，可以被任何函数或方法调用，只要这些方法出现在跟static变量或方法的同一个文件夹内
            - 全局变量, 默认被static修饰 
    - extern：用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的。对于无法初始化的变量，会把变量名指向一个之前定义过的存储位置
        - extern是用来使用在另一个文件中声明一个全局变量或函数
#####[04 运算符](http://www.runoob.com/cprogramming/c-operators.html)
- 运算符 operator
    - 类型
        - 算术运算符 +,-,*,/,%,++,--
            - / 整除无小数
            - % 整除后的余数
            - ++ 自增加1
            - -- 自减少1
            - 前置先运算后赋值，后置运算先赋值后运算
        - 关系运算符 ==,!=,>,<,>=,<=
        - 逻辑运算符 &&,||,!
        - 位运算符 &,|,^
        - 赋值运算发 = 
            - 疑问？C语言中没有字符串连接符?
        - 杂项运算符
            - sizeof() 返回变量的大小为int类型 `int a; printf("int: %d\n",sizeof(a));`
            - & 返回变量地址值为int类型  `printf("a: %d", &a);`
            - ? : 三元条件表达式 `d > 10 ? printf("d>10") : printf("d<10");`
            - 指向一个变量 `int *b; printf("*b: %d\n",*b);`
    - 优先级
        - 后缀: ++,--,(),[]
        - 乘除
        - 加减
        - 移位： <<，>>
        - 关系
        - 逻辑
        - 条件
        - 赋值
        