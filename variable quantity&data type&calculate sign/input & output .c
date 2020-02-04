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
