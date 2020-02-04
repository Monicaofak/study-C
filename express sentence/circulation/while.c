/*循环三要素：循环变量的初值、循环变量的判断、循环变量的更新
while循环的特点：先判断，再执行
*/
#include <stdio.h>

int main()
 {
 int i=0;
 while(i<10)
 {
 i++; //通过控制i的值来控制循环的次数
 printf("第%d遍\n",i);
 }
 return 0;
 }
 
 
 //计算1-100累加和
 #include <stdio.h>

int main()
 {
 int i=0;
 int sum=0;
 while(i<100)
 {
 i++;
 sum=sum+i;
 }
 printf("sum=%d",sum);
 return 0;
 }

//使用循环实现三次密码输入，输错就退出
#include <stdio.h>
int main()
 {
 int i=0;
 int password;
 while(i<3)
 {
 printf("请输入密码：\n");
 scanf("%d",&password);
 if(123456!=password)
 {
 printf("输入错误！\n");
 }
 if(i==2)
 {
 printf("密码输错3次，强制退出系统！");
 exit(0);  //告诉操作系统，程序正常退出
 }
 i++;
 }
 return 0;
 }
 
 
 //某宝双2015年双11交易额为800亿，每年递增25%，哪年交易额到2000亿
#include <stdio.h>

int main()
 {
 double money=800;
 double rate=1.25;
 int year=2015;
 while(money<2000)
 {
 money=money*rate;
 year++;
 }
 printf("year=%d",year);
 return 0;
 }

***************************************************
//补充：随机数种子
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
 {
 //srand用时间做种子，每次产生随机数不一样
 srand((unsigned) time(NULL));
 //rand()取值范围：0-32767
 printf("%d\n",rand());
 return 0;
 }
 
 
 //使用循环实现玩家对战
//双方初始HP均为100，每次攻击5-15中随机，HP最先到0或以下的被KO
#include <stdio.h>
#include <stdlib.h>  //标准库
#include <time.h>   //time
#include <windows.h> //sleep
int main()
 {
 int hp1=100;
 int hp2=100;
 int i=0;    //对战轮数
 int att1,att2;
 while(hp1>=0 && hp2>=0)
 {
 //默认1p首先攻击
 //x % 5 取值0-4  x % 10 取值0-9 以此类推
 //x % 16+5 取值5-15
 att1=rand()%11+5;  //取值为5-15之间
 if(att1==15)      //暴击
    att1*2;
 att2=rand()%11+5;
 if(att2==15)
    att2*2;
 hp2=hp2-att1;
 hp1=hp1-att2;
 printf("************************\n");
 printf("第%d轮\n",i+1);
 printf("玩家一攻击力%d，玩家二剩余血量：%d\n",att1,hp2);
 printf("玩家二攻击力%d，玩家一剩余血量：%d\n",att2,hp1);
 printf("************************\n");
 i++;
 Sleep(500);   //每隔500毫秒打印一次
 }
 printf("游戏结束！玩家一的血量：%d\t玩家二的血量%d\n",hp1,hp2);
 return 0;
 }


