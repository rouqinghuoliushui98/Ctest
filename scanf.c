#include <stdio.h>
int main()
{
    const int Amount=100;
    int price = 0;
    printf("请输入金额（元）：\n");
    scanf("%d",&price);
    int change=Amount-price;
    printf("找您%d元。",change);

}