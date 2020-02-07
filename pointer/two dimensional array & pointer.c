/*二维数组（一个平面）与指针
二维数组的首地址：&a[0][0]
使用指针访问 二维数组中的元素*(a[1]+2)  *(*(a+1)+2)

2、
*/
#include <stdio.h>

int main()
 {
     int i,j;
   double score[5][3]={
   {55,66,77},
   {52,62,72},
   {15,26,37},
   {54,65,76},
   {55,66,77},
 };
 double (*ptr_score)[3]=score; //此处写double *ptr_score =score错误，指针存在空间问题
 //二维数组的理解：1.由n个一维数组所组成（5个一维数组组成）
 //遍历第一行数据：第一行数组名就是score[0]
 printf("第一行：");
 for(i=0;i<3;i++)
 {
 printf("%.2lf\t",score[0][i]);  //将score0看成了一维数组的名称
 }
 //遍历第二行数据：score[1]表示的是第二行
 printf("\n");
 printf("第二行：");
 for(i=0;i<3;i++)
 {
 printf("%.2lf\t",score[1][i]);
 }
 //遍历整个数组：
 printf("\n整个数组：\n");
 for(i=0;i<5;i++)
 {
 for(j=0;j<3;j++)
 {
 printf("%lf\t",score[i][j]); //等价于print("%lf\t",*(score[i]+j)); 等价于*(*(score+i)+j)
 }
 printf("\n");
 }
 return 0;
 }
