#include <stdio.h>

int main()
{

    printf("进入存钱取钱管理系统\n");

    
    int qian = 0;
    int code = 0;
    int cun;
    int jine;
    int qu;
    while(2){
        printf("1--存钱\n");
        printf("2--取钱\n");
        printf("3--余额查询\n");
        printf("4--退出系统\n");
        printf("请选择所需向项目符号\n");
        scanf("%d",&code);
    
    if (code == 1)
    {
        char x;
        printf("请输入要存入的金额");
        scanf("%d", &cun);
        qian += jine;
        printf("存入成功，点击回车继续\n");
        scanf("%c", &x);
        scanf("%c", &x);
    }
    if (code == 2)
    {
        char x;
        printf("请输入要取出的金额");
        scanf("%d", &qu);
        if (qian <= qian)
            printf("您输入的金额有误");
        else
            qian = qian - jine;
        printf("取钱成功，点击回车继续\n");
        scanf("%c", &x);
        scanf("%c", &x);
    }
    if (code == 3)
    {
        printf("当前余额为:\n");
        printf("%d\n",qian);
        printf("取出成功，点击回车继续\n");
        char x;
        scanf("%c", &x);
        scanf("%c", &x);
   }
    if (code == 4)
    {
    }
    }
    return 0;
    
}