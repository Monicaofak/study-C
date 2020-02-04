/*数据类型就是用来规定变量的内存空间有多大的
现实中的数据
数值                   非数值
整型      非整型        char
int       float
short     double（精度更高）
long
其他类型 构造类型、指针类型、空类型
*/

//float范围：7位有效数字,小数点前后加起来7位数字
//float 类型变量赋值时要在末尾加f
//float类型的占位符是%f
//%.2f可以控制数字的显示精度
#include <stdio.h>

int main()
 {
 float height=4.0f;
 float width=2.5f;
 float s=width*height;
 printf("长方形的面积是：%.2f\n",s);  //s的值不变，只是显示的精度变化
 return 0;
 }

/*双精度浮点型double
16位有效数字
声明时后面不加f
占位符是%lf
通常小数被存储为double类型，如2.0,9.0
数字后使用L时，数字边成long double 类型，如4.76L
%.2f可以控制数字的显示精度
*/
#include <stdio.h>

int main()
 {
 double radius=2.5;
 double area=3.141592653*radius*radius;
 printf("圆的面积是：%lf\n",area);
 }

//char类型 8位二进制表示 占用一个字节
//char型变量实质是以整型保存的
//有符号signed char 取值范围-128~127
//无符号unsigned char取值范围0~255，char 类型是否有符号取决于编译器
//大写字母与小写字母差一个空格（32）
#include <stdio.h>
#include <stdlib.h>

void main()
{
    char ch1='a';
    char ch2='A';
    char ch3=' ';
    printf("字符\tASCII码\n");
    printf("%c\t%d\n",ch1,ch1);
    printf("%c\t%d\n",ch2,ch2);
    printf("%c\t%d\n",ch3,ch3);
    printf("%c\t%d\n",ch1-32,ch1-32);
}



#include <stdio.h>

int main()
 {
  double num=6; //整型转双精度浮点型（小类型转大类型-自动类型转换）
  int num1=(int)num;  //大类型转小类型，会损失精度（强制类型转换）
  }


