#include <stdio.h>
main()
{
	int a;
	int b;
	printf("分别输入两个数字表示英尺及英寸\n");
	scanf_s("%d %d", &a, &b);
	float c = b / 12;
	float d = c + a;
	printf("身高是%f米\n",d);
	return 0;

}