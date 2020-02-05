/*for(表达式1;表达式2;表达式3)
{
语句;
}
1.循环变量初值 2.循环条件 3.循环变量更新
先更新循环变量，再进行判断
for循环常见问题：
忘记定义循环变量或初始化
循环条件缺少时会造成死循环
循环变量不更新也会造成死循环
不可省略分号

*/
//循环输入6个月的工资数，计算半年内的平均工资
#include <stdio.h>

int main()
 {
 double salary;
 int i;
 double sum=0;
 for(i=0;i<6;i++)
 {
 printf("please enter the salary:");
 scanf("%lf",&salary);
 sum=sum+salary;
 }
 double avg=sum/6;
 printf("the avg salary is:%lf",salary);
 return 0;
 }


//打印简易加法表
#include <stdio.h>

int main()
 {
 int num;
 int i;
 printf("请输入一个数字：\n");
 scanf("%d",&num);
 printf("加法表：\n");
 for(i=0;i<num;i++)
 {
 printf("%d+%d=%d",i,num-i,num);
 //这里需要探讨什么情况打印\n什么情况打印\t
 if(i%2==0)
 {
 printf("\t");
 }
 else
 printf("\n");
 }
 return 0;
 }
