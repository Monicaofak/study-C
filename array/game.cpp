//后宫游戏
//游戏一共进行10天
//每天结算好感度，一旦有3个或以上的嫔妃好感度低于60，则发生暴乱，游戏结束
//新增妃子，默认好感度100 其他人好感度同一-10  打印所有妃子状态
#include <stdio.h>
#include <string.h>  //支持字符串操作
#define MAX 6 //常量MAX表示系统要求的最大贵妃数量
int main()
 {
 char name[10];  //皇帝名号，给10个空间
 int choice;
 int i;
 int j,p,temp;    //循环标量和临时整型变量
 int searchindex=-1; //查找的下标
 int count=5;  //当前未打入冷宫的人数
 char tempname[10]; //翻牌的名字
 //使用数组来表示嫔妃与嫔妃的各项状态
 char names[MAX][10]={"貂蝉","杨玉环","不知火舞","西施","郭德纲"};  //6个，每个名字长度为10
 char levelnames[5][10]={"贵人","嫔妃","贵妃","皇贵妃","皇后"}; //5个级别，每个长度为10
 //存放每位妃子级别的数组
 int levels[MAX]={1,2,0,0,0,-1}; //貂蝉、杨玉环为嫔妃和贵妃，其他为贵人
 //好感度
 int loves[MAX]={100,100,100,100,100,-1};  //现在还没有最后一个人，所以是-1
 /*
 print("\n********************************\n");
 printf("测试代码：查看当前嫔妃状态\n");
 printf("%-12s\t级别\t好感度\n","姓名");
 for(i=0;i<count;i++)
 {
 printf("%-12s\t%s\t%d\n",names[i],levelnames[levels[i]],loves[i]);//将二维数组当做一维数组操作
 }
 print("*********************************\n");
   */
 printf("请输入当前登基的皇帝名称：");
 scanf("%s",name);   //录入字符串%s，不用&（字符数组本身就是一个指针）
 printf("欢迎当前皇帝：%s,万岁！\n",name);
 printf("1、皇帝下旨选妃：\t\t（增加功能）\n");
 printf("2、翻牌宠幸：\t\t（修改状态功能）\n");
 printf("3、打入冷宫\t\t（删除功能）\n");
 printf("4、临幸\n");
 printf("陛下请选择：");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:    //皇帝下旨选妃
     //增加数组元素（names，loves，levels）
     //增加前需要判断数组有没有空间
     if(count<MAX)
     {
     printf("请输入新娘娘的名字：");
     scanf("%s",names[count]);
     //将新娘娘的状态初始化
     levels[count]=0;  //级别初始为0
     loves[count]=100;  //好感初始为100
     count++;   //添加完元素后数量+1
     }
     else
     {
     printf("陛下注意龙体！后宫满了！添加失败！\n");
     }
 break;
 case 2://翻牌
     //找到要宠幸妃子的下标
     //修改这个妃子的状态 好感+10，级别+1 最高级不在加
     //修改其他妃子的状态 好感度-10
     printf("请输入今天翻牌的娘娘：");
     scanf("%s",tempname);
     //字符串的查找strcmp,需要引入<string.h>
     //strcmp(tempname,"abc") 0-两个字符串相等；1：前一个大于后一个 -1：前一个小于后一个
     for(i=0;i<count;i++)
     {
     if(strcmp(tempname,names[i])==0)  //如果输入的姓名刚好等于数组中谋个姓名
     {
      loves[i]+=10;
      // 级别不能超过5级（0-4）之间
      levels[i]=levels[i]>=4?4:levels[i]+1;//如果>=4,就为4，否则+1
     }
     else
     {
     loves[i]-=10;//其他人的好感度-10
     }
     }
 break;
 case 3://打入冷宫
     //查找
     //后面一个赋给前面一个元素
     //总数-1
     //修改其他妃子的状态，好感度+20
     printf("请输入要打入冷宫的娘娘的名字：");
     scanf("%s",tempname);
     for(i=0;i<count;i++)
     {
     if(strcmp(tempname,names[i])==0);
     {
     //记录下要查找的下标
     searchindex=i;
     break;
     }
     }
     if(-1==searchindex)  //searchindex值为初值，查找失败
     {
     printf("虚惊一场！无人打入冷宫！");
     }
     else
     {
     for(i=searchindex;i<count-1;i++)
     {
     // names[i]=names[i+1];  因为是字符串，C语言中不支持数组的直接赋值
     //我们需要使用strcty函数实现数组的赋值
     strcpy(names[i],names[i+1]);
     loves[i]=loves[i+1];
     levels[i]=levels[i+1];
     }
     count--;
     }

 break;
 case 4:
     //查找
     //增加好感度
     
 break;
 default:
    printf("君无戏言，陛下请再确认！\n");
 }
 //最后所有娘娘按级别排序，使用冒泡排序
 for(j=0;j<count-1;j++)
 {
 for(p=0;p<count-j-1;p++)
 {
 if(levels[p]<levels[p+1])
 {
 //需要交换姓名、级别、好感度
 temp=levels[p];
 levels[p]=levels[p+1];
 levels[p+1]=temp;
 temp=loves[p];
 loves[p]=loves[p+1];
 loves[p+1]=temp;
 //注意字符串的交换
 strcpy(temp,names[p]);
 strcpy(names[p],names[p+1]);
 strcpy(names[p+1],temp);
 }
 }
 }


 printf("\n********************************\n");
 printf("测试代码：查看当前嫔妃状态\n");
 printf("%-12s\t级别\t好感度\n","姓名");
 for(i=0;i<count;i++)
 {
 printf("%-12s\t%s\t%d\n",names[i],levelnames[levels[i]],loves[i]);//将二维数组当做一维数组操作
 }
 printf("*********************************\n");
 return 0;
 }
