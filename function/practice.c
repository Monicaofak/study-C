//计算圆、矩形、三角的面积
#include <stdio.h>
#include <math.h>
double calccircle(double);
double calcrectangle(double,double);

//对用户的输入进行非负验证
int validate(double);  //验证输入的double类型数据是否为正数

//double input();  函数内直接让用户输入，如果不符合要求就重新录入，返回录入正确的数

int validate(double num)
 {
 return num>0;
 //如果num>0,会返回一个非零值，表示真
 }

double calccircle(double radius)
 {
 double s=3.14*pow(radius,2);
 return s;
 }

 double calcrectangle(double w,double h)
 {
 return w*h;
 }

int main()
 {
 //可以将通用的功能写成函数多次调用
 //用户输入的判断是通用的，都不能为负
 //打印面积
 //在函数中实现的就是计算过程
 double radius;
 double w,h;
 double s;
 int choice;
 printf("本系统支持计算2种图形的面积，请选择：\n");
 printf("1.圆\n");
 printf("2.矩形\n");
 scanf("%d",&choice);
 switch(choice)
  {
  case 1:
      printf("请输入圆的半径:");
      do
 {
 scanf("%lf",&radius);  //录入
 if(!validate(radius))  //如果没有通过验证，就打印一句提示
 {
 printf("录入错误，请重新录入：");
 }
 }
 while(!validate(radius));  //当验证不通过时，重新录入
      s=calccircle(radius);
 break;
  case 2:
  printf("请输矩形的长、宽:");
  do
  {
  scanf("%lf%lf",&w,&h);
  if(!validate(w)|| !validate(h))
  {
  printf("录入错误，请重新录入两个正数：");
  }
  }while(!validate(w) || !validate(h));
  //验证完后，调用函数进行计算
  s=calcrectangle(w,h);
  break;
  default:
  printf("本系统只支持2种图形，请在1-2间选择。");
  }
 printf("圆形面积是:%.2lf",s);


 return 0;
 }
