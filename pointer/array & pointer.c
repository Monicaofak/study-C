//数组：存储在一块连续的内存空间中，数组名就是这块内存空间的首地址
#include <stdio.h>

int main()
 {
 double score[]={98,87,65,43,76};
 printf("数组的首地址：%p\t数组的首元素的地址：%p\n",score,&score[0]);
 //数组名就是数组的首地址
 return 0;
 }


/*指针的算术运算
指针的递增和递减(++、--)
一个类型为T的指针移动，以sizeof(T)为单位
指针可以加上或减去某个整数值，但是如果加多了或减多了会指到别的内存
int num[50]; //num是数组名，也是数组的首地址
num的值与&num[0]是相同的
数组i+1个元素可以表示为：
  第i+1个元素的地址：&num[i+1]或num+i
  第i+1个元素的值：num[i+1]或*(num+i)
为指针数组的指针赋值：
  int * ptr_num=num;或int * ptr_num=&num[0];
指针变量可以指向数组元素：
  int * ptr_num=&num[4];或int * ptr_num=num+4;
*/

#include <stdio.h>

int main()
 {
 int i;
 double score[5]={98,87,65,43,76};
 double * ptr_score;
 ptr_score=score;
 for(i=0;i<5;i++)  //因为是double类型，所以每次移动8个字节
 {
    printf("%.2lf\n",*ptr_score++);//*ptr_score指向数组首元素 ，在加就指向未知地址
    //print("%.2lf\n",ptr_score[i]); 数组的访问方式
    //print("%.2lf\n",*(ptr_score+i)); 想访问几,加几（建议使用：指针不变）
 }
 printf("double型数组的地址占%d个字节\n",sizeof(double));
 //第一重方式重新访问数组元素前，要重置指针的位置
 printf("*********************\n");
 ptr_score=score;
 for(i=0;i<5;i++)
 {
 printf("%.2lf\n",*ptr_score++);
 }
 return 0;
 }


#include <stdio.h>

int main()
 {
 int array[]={15,20,25,30,35};
 int i;
 int * ptr_array=array;
 for(i=0;i<5;i++)
 {
 printf("第%d个元素的值为:%d\t地址为：%p\n",i+1,*ptr_array,ptr_array);
 //print("第%d个元素的值为：%d\t地址为：%p\n",i+1,*(ptr_array+i),ptr_array+i);
 //移动指针的方式（每次循环都会移动指针，有风险，要注意重置）
 //print("第%d个元素的值为：%d\t地址为：%p\n",i+1,*ptr_array++,ptr_array);
 ptr_array++;
 }
 return 0;
 }


#include <stdio.h>
#define N 5
int main()
 {
 int array[N]={15,20,25,30,35};
 //实现数组逆序-数组的首尾元素交换
 int temp;
 int i;
 int * ptr_start=array;  //指向数组首元素的指针
 int * ptr_end=array+N-1;  //指向数组尾元素的指针
 for(i=0;i<N/2;i++)
 {
 temp=array[i];
 array[i]=array[N-i-1];
 array[N-i-1]=temp;
 }
 printf("逆序后：");
 for(i=0;i<N;i++)
 {
 printf("%d\t",*(array+i));
 }
 //使用指针实现逆序
 while(ptr_start!=ptr_end)
 {
 //收尾交换，指针分别进行更新
 temp=*ptr_start;
 *ptr_start=*ptr_end;
 *ptr_end=temp;
 //首元素指针要向后移动
 ptr_start++;
 //尾元素指针要向前移动
 ptr_end--;
 }
 printf("\n逆序后：");
 for(i=0;i<N;i++)
 {
 printf("%d\t",*(array+i));
 }
 return 0;
 }
