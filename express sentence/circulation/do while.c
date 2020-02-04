//先执行，再判断
#include <stdio.h>
int main()
 {
  while(1){  //在外层套一个大循环，可以一直循环下去
  //打印游戏菜单
  int choice;
  printf("性格测试：\n");
  printf("如果您是一位君王，对于身旁的伴侣您希望是：\n");
  printf("1、只要有一位珍爱的妻子。\n");
  printf("2、可以有两位以上的爱人。\n");
  printf("3、拥有三千佳丽。\n");
  do    //如果输入错误，将会一直循环输入
  {
   printf("请选择：");
   scanf("%d",&choice);
   if(choice<=0 || choice>3)
      {
      printf("只能输入1-3之间的数！请重新输入！");
      }
  }
  while(choice<=0 || choice>3);
  //用户输入1-3之间的情况
  switch(choice)
  {
  case 1:
      printf("你选择了声明中的唯一，呵呵！");
      break;
  case 2:
      printf("太花心了！");
    break;
  case 3:
      printf("哈哈哈哈哈哈！");
    break;
  }
  }
  return 0;
 }


/*
while与都while区别
执行顺序不同
初始情况不满足循环条件时while循环一次都不会执行，do while循环不管任何情况都至少执行一次
将数字的每一位都取出来：规律---除10再模10
*/

#include <stdio.h>

int main()
 {
 int num=12345;
 //将四位数的每一位都取出来
 printf("个位%d\n",num % 10);
 printf("十位%d\n",num /10 %10);  //数字去尾
 printf("百位%d\n",num /100 % 10);
 printf("千位%d\n",num /1000% 10);
 int temp;  //临时变量
 while(num>0)
 {
 printf("%d\n",num%10);
 num/=10;  //取出个位数字后，立即去掉个位数字
 }
 return 0;
 }
