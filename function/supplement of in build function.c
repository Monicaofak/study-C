/*malloc()
全称：memory allocation（动态内存分配），当无法知道内存具体位置的时候，想要绑定真正的内存
空间，就需要用到动态地分配内存
分配长度为num_bytes 字节的内存块
函数原型：extern void * malloc(unsigned int num_bytes)
如果分配成功则返回被分配内存的指针（此存储区中的初始值不确定），否则返回空指针NULL
当内存不再使用时，应使用free()函数将内存块释放（原始内存中的数据保持不变）
实际上molloc是new的前身
动态分配内存：编译的时候没有内存，程序运行后再分配内存
*/
#include <stdio.h>
#include <malloc.h>
int main()    //演示动态分配内存
 {
 int * nums;
 int i;
 nums=(int *)malloc(20);  //通过malloc函数为前面的指针动态分配了20个字节的空间
 //等价于nums=(int *)malloc(size(int)*5)
 //等价于int nums[5]
 //为指针动态分配内存后，指针就变成了数组
 for(i=0;i<5;i++)
 {
 printf("请输入第%d个元素",i+1);
 scanf("%d",nums+i);
 }
 printf("数组元素为：\n");
 for(i=0;i<5;i++)
 {
 printf("%d\t",*(nums+i));
 }
 free(nums); //释放动态分配的内存
 nums=NULL; //良好的编程习惯
 return 0;
 }

//calloc()与malloc()用法类似
//malloc要强制转换，calloc 不要
#include <stdio.h>
#include <stdlib.h>
int main()
 {
 int *num;
 int i;
 num=calloc(5,sizeof(int));
 num[4]=9;
 for(i=0;i<5;i++)
 {
 printf("%d\n",num[i]);
 }
 free(num); 
 return 0;
 }
 
 /*calloc()与malloc()用法类似
malloc要强制转换，calloc 不要。malloc不会自动初始化数组元素，calloc初始化数组元素为0
关于free：必须是通过malloc或calloc或realloc分配内存的指针，释放的指针必须是初始分配的
地址，进行运算后需要恢复
*/
#include <stdio.h>
#include <stdlib.h>
int main()
 {
 int *num;
 int i;
 num=calloc(5,sizeof(int));
 num[4]=9;
 for(i=0;i<5;i++)
 {
 printf("%d\n",num[i]);
 }
 free(num);
 return 0;
 }
 
 
/*realloc()
原型：extern void *realloc(void *mem_address,unsigned int newsize);
用法：#include <stdlib.h>有些编译器需要#include <alloc.h>
功能：改变mem_address所指内存区域的大小为newsize长度
说明：如果重新分配成功则返回指针被分配内存的指针，否则返回空指针NULL
当内存不再使用时，应使用free()函数将内存块释放（原始内存中的数据保持不变）
*/
