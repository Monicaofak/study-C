//指针：指针是一个值为内存地址的变量（或数据对象）
//int year;year=2016;  int *prt_year; ptr_year=&year;  把year的内存地址赋给左边
//即int *prt_year; 指向了int year;
//基本用法：数据类型*指针变量名
//NULL：在头文件<stdio.h>中，NULL被定义为常量，int* ptr_num=NULL;
//指针的初值设为空，表示指针不指向任何地址

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=9;
    int * ptr_num=&num;  //不能直接赋值，只能通过&赋值，不能用常量
    *ptr_num=1111;   //*取这个地址的值，把值改成1111（使用指针修改变量值）
    //指针的地址
    int *ptr_num1=&ptr_num;
    printf("num变量的地址是：%p\t%x\n",&num,&num);
    printf("num=%d",num);
    //%p指针占位符 %x十六进制占位符
    printf("\n指针ptr_num1的地址：%p\n",ptr_num1);
    return 0;
}


#include <stdio.h>

int main()
 {
 int num=1024;
 int num1=2048;
 int * ptr;
 int * ptr1;
 ptr=&num;
 ptr1=&num1;
 printf("num的值是:%d,num的地址是:%p\n",num,ptr);
 printf("num1的值是：%d,num1的地址是:%p\n",num1,ptr1);
 //将变量0的值赋给变量1
 *ptr1=*ptr;  //等价于*num1=num; num1值变了，地址不变
 //直接操作指针
 ptr1=ptr;  //num1值不变，但地址变了
 //指针0和指针1都指向num
 printf("重新赋值后：\n");
 printf("num的值是:%d,num的地址是:%p\n",num,ptr);
 printf("num1的值是：%d,num1的地址是:%p\n",num1,ptr1);

 *ptr1=11111;  //num被修改了，因为找地址找到了num
 printf("重新赋值后：\n");
 printf("num的值是:%d,num的地址是:%p\n",num,ptr);
 printf("num1的值是：%d,num1的地址是:%p\n",num1,ptr1);
 return 0;
 }


/*指针是一个变量，只不过该变量中存储的是另一个对象的内存地址
如果一个变量存储另一个对象的地址，则称该变量指向这个对象
指针变量可以赋值，指针的指向在程序执行中可以改变
指针p在执行中某时刻指向变量x，在另一时刻也可指向变量y
注意：
1.指针变量和其他变量命名规则一样
2.指针不能与现有变量同名
3.指针可存放C语言中任何基本数据类型
4.若指针已声明为某种类型数据类型的地址，则它不能用于存储其他类型数据的地址
5.应该为指针指定一个地址后，再能在语句中使用指针
*/
