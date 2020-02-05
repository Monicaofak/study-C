/*数组的删除
数组的长度是固定不变的
所以删除时：查找要删除数字的下标，从下标开始后面一个覆盖前面一个，数组总长度-1
*/
#include <stdio.h>
int main()
 {
 int N=5;
 double arrays[]={42322,45771,40907,41234,40767};
 double deletenum;  //要删除的数值
 int deleindex=-1;  //要删除的下标,给一个初值-1（给一个不可能的初值，方便判断）
 int i;
 printf("请输入要删除的数：\n");
 scanf("%lf",&deletenum);
 for(i=0;i<N;i++)
 {
 if(deletenum==arrays[i])
 {
 //记录下当前的下标
 deleindex=i;
 break;
 }
 }
 if(-1==deleindex)
 {
 printf("没有找到这个数，删除失败！");
 }
 else
 {
 //从下标开始，后面一个覆盖前面一个数字
 for(i=deleindex;i<N-1;i++)
 {
 arrays[i]=arrays[i+1];
 }
 //删除完毕后，总长度-1
 N--;
 }
 printf("删除后的结果为：");
 for(i=0;i<N;i++)
 {
 printf("%.2lf\t",arrays[i]);
 }
 return 0;
 }


//有bug
/*数组的插入
插入后保持数组降序排列

*/
#include <stdio.h>
int main()
 {
 int i;
 int N=5;
 double arrays[]={42322,45771,40907,41234,40767};
 double internum;  //要插入的数值
 printf("请输入要插入的值：\n");
 scanf("%lf",&internum);
 //先将数值插入到最后
 arrays[N]=internum;
 //数组总长度+1
 N++;
 printf("插入后的结果为：");
 for(i=0;i<N;i++)
 {
 printf("%lf",arrays[i]);
 }
 return 0;
 }

