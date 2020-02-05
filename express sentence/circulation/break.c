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
