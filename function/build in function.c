//常用内置函数
#include <stdio.h>
#include <ctype.h>
int main()
 {
 printf("%d\n",isupper('a'));   //判断是否为大写字母
 printf("%d\n",islower('a'));  //判断是否为小写字母
 printf("%d\n",isalpha(97));  //判断是否为字母（传的ASCII码，是字母，为真）
 printf("%d\n",isdigit('8'));  //判断是否为数字
 printf("%d\n",isdigit(9));  //如果传入的是数字，表示的是ASCII码
 //打印所有ASCII码对应的符号
 int i;
 for(i=0;i<127;i++)
 {
 printf("%c,",i);
 }
 printf("\n\n");
 //转换
 printf("%c",toupper('a')); //转换成大写形式
 return 0;
 }


//如何将用户输入的小写数字转成中文大写
//1234 ————> 壹仟贰佰叁拾肆
#include <stdio.h>
int main()
 {
 //有10个，每个长度为4
 int money;
 int bit=0;
 int moneys[6];  //默认支持6位数字
 int i=0;
 char unit[10][4]={"零","壹","贰","叁","肆","伍","祿","柒","捌","僦","拾"};
 printf("请输入金额：");
 scanf("%d",&money);
 //判断用户输了几位数字
 while(money!=0)
 {
 moneys[i]=money%10;  //把最后一位取出来
 money/=10;        //去掉最后一位
 i++;
 bit++;
 }
 printf("用户输入的数字一个有%d位\n",bit);
 printf("数组中的内容：\n");
 for(i=0;i<bit;i++)
 {
 printf("%d-%s\n",moneys[i],unit[moneys[i]]);
 }
 return 0;
 }
/*
int srand(unsigned int) 设置随机数生成种子
int rand(void)           随机产生0-32767的数字，一般与srand联用
void exit(int)           终止程序
void system(const char*) 可以执行dos命令
都属于<stdlib.h>

system函数的常见用法：
1.system("pause");   冻结屏幕，便于观察程序的执行结果
2.system("cls");     清屏操作
3.system("color 4E") 修改背景色及前景色
4.system("shutown/r/t 180"); 设置自动关机
*/

