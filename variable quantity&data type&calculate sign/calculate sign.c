/*运算符：赋值运算符、算术运算符、关系运算符、逻辑运算符
表达式
单等号 = 计算顺序：从右到左（赋值运算符）
算术运算符：一元运算符++、--       二元运算符+、-、*、/、%
区分一元运算符与二元运算符：一元运算符要一个数参与，二元运算赋要两个
*/
#include <stdio.h>

int main()
 {
 //复合运算符
 int num=8;
 num%=5;  //两种写法一样
 printf("%d\n",num);
 printf("%d\n",8%5);
 }


#include <stdio.h>

int main()
 {
 int num=5;
 int num1=2;
 int result1=--num1;  //先--再赋给result1
 int result=num++; //如果++在单独一句话，那么前置++与后置++相同
 //而后置++是整个表达式都运算完毕再++一次
 //上句话就是先把num的值赋给result,自己再++一次
 printf("result=%d\n",result);
 printf("result1=%d\n",result1);
 }


/*关系运算符可以比较大小、高低、长短
>、<         >=、<=        ==、！=
位运算 将数字转成二进制在运算
*/
#include <stdio.h>

int main()
 {
 printf("5>8吗？%d\n",5>8);   //C语言中0表示假，1（非零）表示真
 printf("6<9吗？%d\n",6<9);
 }


/*使用sizeof运算符可以获得数据类型占用空间的大小
*/
#include <stdio.h>

int main()
 {
 printf("sizeof(int)=%d\n",sizeof(int));
 printf("sizeof(long)=%d\n",sizeof(1000L));
 printf("sizeof(float)=%d\n",sizeof(34.4f));
 printf("sizeof(double)=%d\n",sizeof(34.4));
 printf("sizeof(char)=%d\n",sizeof(char));
 return 0;
 }
