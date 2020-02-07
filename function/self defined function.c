/*函数定义
return_type function_name([datatype1 arg1],[datatype2 arg2],[...])
{
 函数体
}
函数名、返回值类型、参数列表

*/
//计算圆形、矩形的面积，写一个有返回值的函数
#include <stdio.h>
#include <math.h>
//函数原型
void calacircle();
void calcrectangle();
int calcsum();

void calcrectangle()
 {
 double w,h;
 double s;
 printf("请输入矩形的长和宽：");
 scanf("%lf%lf",&w,&h);
 s=w*h;
 printf("矩形的面积是：%.2lf",s);
 }
void calacircle()
 {
 double radius,s;
 const double PI=3.14;
 printf("请输入圆的半径：");
 scanf("%lf",&radius);
 s=PI*pow(radius,2);
 printf("半径为：%.2lf的圆面积为：%.2lf\n",radius,s);
 }
 int calcsum()
 {
 int i=0;
 int sum=0;
 for(i=1;i<=100;i++)
 {
 if(i%2==0)
    sum=sum+i;
 }
 return sum;
 }
int main()
 {
 //书写函数的步骤：完成函数三要素
 //误区：不要一开始就去考虑如何完成某个功能
 calacircle();  //调用函数
 calcrectangle();
 //函数有返回值，调用时，要使用对应类型的变量来接受
 int sum=calcsum();
 printf("\n1-100的偶数和是%d\n",sum);
 return 0;
 }

/*返回值：
关键字return
只能返回一个值，不能返回多个值
返回值类型必须与原型中的返回值类型匹配
return会立即终止函数并返回，可返回空值
*/

/*书写函数实现数组元素的查找，要求返回找到的元素下标
书写函数实现冒泡排序并返回排序后的数组
书写函数要求用户输入密码（6位，错误则重新输入），返回并打印用户输入的正确密码
*/
#include <stdio.h>
int search();

int search()
 {
 int arrays[]={34,56,78,98,2,45};
 int i;
 int searchnum;
 int searchindex=-1; //要查找的数字和所查找的数字下标
 printf("请输入要查找的整型数字：");
 scanf("%d",&searchnum);
 for(i=0;i<6;i++)
 {
 if(searchnum==*(arrays+i))
 {
    searchindex=i;
    break;
 }
 }
 return searchindex;
 }


int main()
 {
 int index=search();
 printf("数组下标是：%d",index);
 return 0;
 }

