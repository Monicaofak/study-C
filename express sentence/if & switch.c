/*switch结构一般处理数轴中某几个点的情况
用户输入月份，根据月份判断当月的天数
switch 后的表达式只能是整型或字符型
case后的常量表达式的值不能相同
case后面可以有多条语句，不需要大括号
如果不添加break语句，需要特别注意执行顺序
case和default子句的先后顺序可以自行变动
defaul子句可以省略
*/

#include <stdio.h>

int main()
 {
 double price1=229.0;
 double price2=10240.55;
 double price3=2345.5;
 double total=price1+price2+price3;
 double discount;
 double purchase;
 if(price1>1000 || price2>1000 || price3>1000|| total>1000)
 {
 discount=0.3;
 }
 purchase=total*0.3;
 printf("应该支付%lf元",purchase);
 return 0;
 }


/*switch结构一般处理数轴中某几个点的情况
用户输入月份，根据月份判断当月的天数

*/

#include <stdio.h>

int main()
 {
 int mouth;
 printf("请输入月份，我来判断天数：");
 scanf("%d",&mouth);
 switch(mouth)
 {
 case 1:
     printf("31天\n");
     break;
 case 2:
    printf("28天\n");
    break;
 case 3:
    printf("31天\n");
    break;
 case 4:
        printf("30天\n");
        break;
 case 5:
    printf("31天\n");
    break;
 case 6:
    printf("30天\n");
    break;
 case 7:
    printf("31天\n");
    break;
 case 8:
    printf("31天\n");
    break;
 case 9:
    printf("30天\n");
    break;
 case 10:
    printf("31天\n");
    break;
 case 11:
    printf("30天\n");
    break;
 case 12:
    printf("31天\n");
 default:
    printf("输入错误！");
 }
 return 0;
 }
 
 
 /*switch和多重if结构对比
相同点：都使用来处理多分支条件的结构
不同点：switch-等值条件判断，条件是有限个的时候
        多重if-判断某个连续区间的时候
*/

