/*break语句：
跳出循环，执行循环后的语句
只能跳出两种结构：switch结构、循环结构
循环输入玩家年龄，一旦输入为负，跳出循环
*/
#include <stdio.h>

int main()
 {
 int age;
 while(1)  //死循环，等价于for(;;)
 {
 printf("请输入玩家的年龄:\n");
 scanf("%d",&age);
 if(age<0)
 {
 printf("年龄不能为负数！程序强制退出！\n");
 break;
 }
 }
 return 0;
 }


/*书写一个猜商品的小游戏
设定一个商品价格让用户去猜
用户输入猜测的商品价格后，系统给出大、小的提示
如果在5轮内就猜到正确的价格，给予奖励提示
*/
#include <stdio.h>
int main()
{
 int rightprice=500;
 int interprice;
 int i;
 for(i=0;i<5;i++)
 {
 printf("请输入商品价格：\n");
 scanf("%d",&interprice);
 if(interprice>rightprice)
 printf("大了！\n");
 else if(interprice<rightprice)
 printf("小了！\n");
 else
 {
    printf("正确，奖励！");
    break;
 }
 }
 return 0;
}


/*循环录入用户性别，用字母F/M，一旦输入错误，结束录入
要求统计录入正确的次数
*/
#include <stdio.h>

int main()
 {
 char sex;
 int sum=0;
 for(;;)
 {
 printf("请输入性别：\n");
 scanf("%c",&sex);
 fflush(stdin);   //清空缓冲区，避免错误
 if(sex=='F'|| sex=='M')
 {
    sum++;
    printf("sum=%d",sum);
 }
 else
 {
 printf("输入错误，强制退出！");
 break;
 }
 }
 return 0;
 }


************************************************************************************************************************************
/*continue跳过本次循环，继续下次循环
while和do-while都是跳到括号内的循环条件，而for是跳到更新循环变量
循环输入5个玩家的年龄，统计年龄为负的录入次数
如果录入正确，则跳过，输入错误则计数器+1
*/
#include <stdio.h>

int main()
 {
 int i;
 int age;
 int sum=0;
 for(i=0;i<5;i++)
 {
 printf("请输入玩家年龄：\n");
 scanf("%d",&age);
 if(age>0)
    continue;   //跳过正确的情况
 else
   sum++;
 }
 printf("输入错误%d次。",sum);
 return 0;
 }
/*continue可用于switch结构和循环结构中
continue只能用于循环结构中
作用：break语句终止某个循环，程序跳转到循环块外的下一条语句
continue跳出本次循环，进入写一次循环
*/
