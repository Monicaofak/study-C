/*转换字符   输出              示例
%d or %i   有符号十进制整数  printf("%d心%d意\n",3,2);
%C         单个字符          printf("少林功夫好(y/n)~%c\n",'y');
%s         字符串            printf("爱我的人%s,我爱的人%s\n","呵呵呵","老美了");
%f         浮点数默认精确6位小数  printf("圆周率：%.2f\n",3.1415926);
%%         打印一个百分号    printf("45%%")
转义序列
输入函数scanf最通用，可以读取不同格式的数据
格式字符串的用法与printf函数类似
读取基本类型的值时，变量前要加&符号
*/
#include <stdio.h>

int main()
 {
 int num;
 printf("请输入数量：");
 scanf("%d",&num);
 printf("数量是%d",num);
 }


//getchar 是读取用户输入的单个字符
//输入时将输入放到缓存空间，getchar读取时一个一个读取

#include <stdio.h>

int main()
 {
 char ch1,ch2;
 printf("请输入一个字符：");
 //scanf("%c",&ch); 输入单个字符的等价写法
 ch1=getchar();  //a
 //清空缓冲区
 fflush(stdin);
 printf("请输入第二个字符:");
 ch2=getchar();  //回车键\n
 //打印单个字符
 printf("您输入的字符是：");
 putchar(ch1);
 putchar(',');
 putchar(ch2);  //putchar一次只能打印一个字符
 return 0;
  }



#include <stdio.h>

int main()
 {
 //printf控制打印数字的宽度
 printf("**%d**\n",8);
 printf("**%4d**\n",8);  //打印宽度为4
 printf("**%04d**\n",8); //打印时补0
 printf("**%8.2f**\n",4.5);  //打印长度为8 保留两位小数，默认是右对齐
 printf("**%-8.2f**\n",4.5); //加上负号，变成左对齐
 return 0;
  }

