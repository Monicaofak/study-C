//要求实现pow函数
//double num,int num1是形式参数
//实际参数是5,2 （实参一般与调用连用）
#include <stdio.h>

double power(double,int); //函数原型
int main()
 {
 printf("%d的%d次幂是%.2lf",5,2,power(5,2));
 return 0;
 }

double power(double num,int num1) //函数定义
 {
 double result=1;
 int i;
 for(i=0;i<num1;i++)
 {
 result*=num;  //累乘
 }
 return result;
 }
