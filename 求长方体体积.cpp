#include<stdio.h>
int main()
{
	int x, y, z, v, r;
	printf("���볤�������������߳������ö��Ÿ���\n");
	r=scanf_s("%d,%d,%d", &x, &y, &z);
	if (r == 3)
	{
        v = x * y * z;
		printf("���Ϊ��%d", v);
	}
	else printf("error\n");
	return 0;
}
