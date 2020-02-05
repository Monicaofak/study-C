/*循环录入5个数字，进行降序排列后输出结果（从大到小）
方案：使用冒泡排序
冒泡排序的基础原理：查找（遍历）和交换
每一轮两两比较，某个数字如果小于后面的数字，那就交换，
最小的数字就冒到了最后
冒泡排序：
需要比较多轮 （n-1）轮
第一轮需要比较n-1次（n为数的个数），第二轮n-2次，依次类推，每轮比较次数上次-1
（数组长度-1）-当前轮数
*/
#include <stdio.h>
#define N 5  //宏定义，不是必须的
int main()
 {
 int arrays[N]={16,25,9,90,23};
 int i,j;
 int temp;
 //外层循环控制轮数
 for(i=0;i<N-1;i++)
 {
 //每层循环控制每一轮的比较次数
 for(j=0;j<N-1-i;j++)
 {
 //如果当前值小于后面一个值，就交换
 if(arrays[j]<arrays[j+1])
 {
 temp=arrays[j];
 arrays[j]=arrays[j+1];
 arrays[j+1]=temp;
 }
 }
 }
 printf("排序后：\n");
 for(i=0;i<N;i++)
 {
 printf("%d\t",arrays[i]);
 }
 printf("\n");
 //数组有序的情况下，逆序可以重复采用冒泡排序的方式
 for(i=0;i<N-1;i++)
 {
 //每层循环控制每一轮的比较次数
 for(j=0;j<N-1-i;j++)
 {
 //如果当前值小于后面一个值，就交换
 if(arrays[j]>arrays[j+1])
 {
 temp=arrays[j];
 arrays[j]=arrays[j+1];
 arrays[j+1]=temp;
 }
 }
 }
 printf("逆序后：\n");
 for(i=0;i<N;i++)
 {
 printf("%d\t",arrays[i]);
 }
 return 0;
 }
 
 //无序数组逆序
#include <stdio.h>
#define N 7
int main()
 {
 int arrays[N]={21,54,93,34,90,1,45};
 int i;
 int temp;
 for(i=0;i<N/2;i++)  //注意i的范围一定是<N/2！
 {
 //第一个元素：i 最后一个元素：N-i-1
 temp=arrays[i];
 arrays[i]=arrays[N-i-1];
 arrays[N-i-1]=temp;
 }
 printf("逆序后:\n");
 for(i=0;i<N;i++)
 {
 printf("%d\t",arrays[i]);
 }
 return 0;
 }

