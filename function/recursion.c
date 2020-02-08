/*递归：函数自己调用自己
递归可以实现的业务逻辑大多可以用玄循环实现
循环有退出条件，递归也有退出条件还有反复执行过程（调用自身）
*/
#include <stdio.h>

int factorial(int num)
  {
  if(num==1)
    return 1;
  else
  {
  num=num*factorial(num-1);
  return num;
  }
  }

 int main()
  {
  //计算5的阶乘
  int result=factorial(5);
  printf("5!=%d",result);
  return 0;
  }
