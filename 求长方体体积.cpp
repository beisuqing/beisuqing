#include<stdio.h>
int main()
{
	int x, y, z, v, r;
	printf("输入长方体三边整数边长，并用逗号隔开\n");
	r=scanf_s("%d,%d,%d", &x, &y, &z);
	if (r == 3)
	{
        v = x * y * z;
		printf("体积为：%d", v);
	}
	else printf("error\n");
	return 0;
}
