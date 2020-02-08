#include <stdio.h>

int main()
 {//代码块-域
 int num=9;
 {
 int num=90;
 }
 printf("num=%d",num);
 return 0;
 }
//变量只存在于定于它们的语句块中
//变量在一个块内声明时创建，在这个块结束时销毁-自动变量
//变量存在的时间称为变量的生存周期

//变量的作用域决定了变量的可访问性
#include <stdio.h>
#include <stdlib.h>
int main()
 {
 int count=0;
 do{
 int count=0;
 count++;
 printf("count=%d\n",count);
 }
 while(++count<5);  //是外部的count，=0，一直<5,陷入死循环
 //=>count++;while(count<5);
 //while(count++ <5) =>while(count<5);count++;
 printf("count=%d\n",count);
 return 0;
 }

//局部变量
#include <stdio.h>
void changenum()
 {
   //局部变量
 int num=5,num1=8;
 num=55;
 num1=288;
 //函数执行完毕时，会自动销毁函数内部定义的变量
 }

int main()
 {
 int num=5,num1=8;
 changenum();  //调用函数
 printf("num=%d\tnum1=%d\n",num,num1);  //修改的只是局部变量的值
 return 0;
 }
 
 //全局变量
//全局变量没有赋值时有默认值
#include <stdio.h>
int count=0;
void changenum()
 {
 count++;
 }
int main()
 {
 count++;
 changenum();
 printf("count=%d\n",count);
 return 0;
 }

