/*计算机执行程序时，组成程序的指令和程序操作的数据都必须放在某个地方
这个地方就是计算机的内存，也称主存(main memory)或随机访问存储器(Random Access Memory,RAM)
变量是计算机中一块特定的内存空间
通过变量名可以简单快速地找到在内存中存储的数据
规则
1.首字母为字母或下划线
2.变量名的其他字母包含下划线、字母和数字
3.不能使用关键字
少使用单个的英文字母，拼音
*/
#include <stuio.h>

int main()
 {
 int num=5000;  //划定内存空间叫num，取值为5000
 return 0;
 }


#include <stdio.h>

int main()
 {
 int salary1=2500;  //声明并初始化
 int salary2;       //先声明后初始化
 salary2=2500;
 printf("小明的月薪是%d\n",salary1);
 //%表示转换说明符的开始 %d 整型占位符 表示后面给一个整型的数字显示  %%将会输出一个%
 return 0;
 }
//变量名不要重复
//一条语句可以声明多个同类型变量


#include <stdio.h>

int main()
 {
 int num1=10;
 int num2=8;
 printf("对穿肠：%d口心思，思君思国思社稷。\n唐伯虎：%d目共赏，赏花赏月赏秋香。\n",num1,num2);
 }
