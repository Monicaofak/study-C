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
  
  
  
  //求1-100间的偶数和
#include <stdio.h>
int main()
 {
 int sum=0;
 int i;
 for(i=0;i<100;i++)
 {
 if(i%2==0)
 {
 sum=sum+i;
 }
 }
 printf("sum=%d",sum);
 return 0;
 }
 //循环次数确定，一般用for循环，不确定一般用while do-while循环

 //打印图形
 //行：一共有几行
//列数：每行有几颗星
//外层循环控制行（行、换行），内层循环控制列（列数，打印的图形）
#include <stdio.h>
int main()
 {
 int i,j;
 for(i=0;i<10;i++)
 {
 for(j=0;j<5;j++)
 {
 printf("%c",'A'+i);
 }
 printf("\n");
 }
 return 0;
 }

#include <stdio.h>
int main()
 {
 int i,j;
 for(i=0;i<10;i++)
 {
 for(j=0;j<5;j++)
 {
 printf("%c",'A'+j);
 }
 printf("\n");
 }
 return 0;
 }

 peer=(peer+1)*2;
 day--;
 }
 printf("peer=%d",peer);
 return 0;
 }

#include <stdio.h>
int main()
 {
 int i,j;
 for(i=0;i<4;i++)
 {
     for(j=0;j<=2-i;j++)
     {
     printf(" ");  //打印空格（嵌套在内层循环中）
     }
     for(j=0;j<=2*i;j++)
     {
     printf("*");
     }
 printf("\n");
 }
 for(i=0;i<3;i++)
 {
     for(j=0;j<=i;j++)
     {
     printf(" ");
     }
     for(j=0;j<=4-2*i;j++)
     {
     printf("*");
     }
 printf("\n");
 }
 return 0;
 }


#include <stdio.h>
int main()
 {
 int i,j;
 for(i=0;i<4;i++)
 {
     for(j=0;j<=2-i;j++)
     {
     printf(" ");  //打印空格（嵌套在内层循环中）
     }
     for(j=0;j<=2*i;j++)
     {
     //挖空：判断什么时候打印*,什么时候打印空格
     if(i==0||i==3||j==0||j==2*i)
        printf("%c",'*');
     else
     printf(" ");
     }
 printf("\n");
 }

 return 0;
 }

