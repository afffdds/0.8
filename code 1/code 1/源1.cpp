#include <stdio.h>
main()
{
	int a;
	int b;
	printf("�ֱ������������ֱ�ʾӢ�߼�Ӣ��\n");
	scanf_s("%d %d", &a, &b);
	float c = b / 12;
	float d = c + a;
	printf("�����%f��\n",d);
	return 0;

}