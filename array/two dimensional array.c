/*二维数组：实际上是一个平面
可以表示学生多门学科的成绩
语法：datatype name[rowSize][colSize];
double score[5][3];
int animate[4][4];
*/
#include <stdio.h>
#define ROW 3
#define COL 3
int main()
 {
 double score[ROW][COL];
 int i,j;
 for(i=0;i<ROW;i++)
 {
 for(j=0;j<COL;j++)
 {
 printf("第%d位同学的第%d门课程：",i+1,j+1);
 scanf("%lf",&score[i][j]);
 }
 }
 //打印成绩
 for(i=0;i<ROW;i++)
 {
 for(j=0;j<COL;j++)
 {
 printf("%.2lf\t",score[i][j]);
 }
 printf("\n");
 }
 return 0;
 }

#include <stdio.h>

int main()
 {
 int i,j;
 double score[4][3]={
 {98,67,89},
 {89,67,88},
 {99,77,55},
 {78,99,67},
 };

 for(i=0;i<4;i++)
 {
 for(j=0;j<3;j++)
 {
 printf("%.2lf\t",score[i][j]);
 }
 printf("\n");
 }

 return 0;
 }
