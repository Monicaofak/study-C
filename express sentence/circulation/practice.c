/*计算级数n+(n-1)+(n-2)+...+3+2+1的值，其中n的值为用户输入，例如，用户输入的数字是8，则计算
8+7+6+5+4+3+2+1的值，计算结果应该是36
*/
#include <stdio.h>
int main()
 {
 int number;
 int sum=0;
 printf("\n请输入一个整数：");
 scanf("%d",&number);
 if(number>0)
 {
 while(number>0)
 {
 sum=sum+number;
 number=number-1;
 }
 printf("\n和=%d\n",sum);
 }
 else
 {
 printf("\n%d无效。\n",number);
 }
 return 0;
 }


/*猴子摘桃问题：
猴子第一天摘下若干个桃子，当即吃一半，还不够，又多吃了一个，第二天早上又将剩下的桃子吃掉一半，
又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。到第10天早上想吃只剩下一个挑子。求第
一天共摘了多少。
提示：从后往前推
*/
#include <stdio.h>
int main()
 {
 int day=9;  //注意共循环了9次而不是10次
 int peer=1;
 while(day>0)
 {
 peer=(peer+1)*2;
 day--;
 }
 printf("peer=%d",peer);
 return 0;
 }
