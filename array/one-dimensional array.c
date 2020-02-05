/*数组是一个变量，由数据类型相同的一组元素组成
数组的基本要素：标识符（数组名称，用于区分不同数组），数组元素（向数组中存放的数据）
元素下标（对数组元素进行编号），元素类型（数组元素的数据类型）
数组名称只有一个，数组下标从0开始，数组中每个元素都可以通过下标访问
数组长度固定不变避免数组越界，数组中的所有元素必须属于相同的数据类型
使用数组的好处：
数组就是连续的内存空间，便于操作
一维数组：学生单门学科的成绩
          某类别的商品单价
          某人N个月的工资
语法：datatype arrayName[size];
*/
#include <stdio.h>
int main()
 {
 //一下三种声明都正确
 int years[6]={2012,2013,2014,2015,2016,2017};
 int months[12]={1,3,5,7,8,10,12};
 int days[]={1,15};
 int array[]={}; //错误，未知元素个数！
 }


//动态地从键盘录入信息并赋值
#include <stdio.h>
#define N 5    //宏定义一个常量N用5来代替
int main()
 {
 double score[N];
 int i;
 for(i=0;i<N;i++)  //循环录入
 {
 printf("请输入第%d门课的成绩：",i+1);
 scanf("%lf",&score[i]);
 }
 for(i=0;i<N;i++)
 {
 printf("请输入第%d为同学的成绩：%.2lf\n",i+i,score[i]);
 }
 return 0;
 }

/*有一个数列8,4,2,1,23,344,12
循环输出数列的值，求数列中所有数值的和及平均值，
猜数游戏：从键盘中任意输入一个数据，判断数列中是否包含此数
*/
#include <stdio.h>

int main()
 {
 int array[7]={8,4,2,1,23,344,12};
 int i;
 double sum=0,avg;
 int input;
 for(i=0;i<7;i++)
 {
 printf("第%d个数：%d\n",i+1,array[i]);
 }
 for(i=0;i<7;i++)
 {
 sum=sum+array[i];
 }
 printf("sum=%.2lf\n",sum);
 avg=sum/7.0;
 printf("avg=%lf\n",avg);
 printf("请输入一个数：\n");
 scanf("%d",&input);
 for(i=0;i<7;i++)
 {
 if(input==array[i])
 {
 printf("包含此数！");
  //找到后，跳出循环
 break;
 }
 }
 
 //循环结束后，我们如何判断是否找到呢？
 //通过观察，循环正常退出时，i的值应该为7
 if(i==7)
 {
 printf("没有包含。");
 }
 return 0;
 }
