#include <stdio.h>

int main()
{
	int i;
	char source[3] = { 'A','B','C' };
	char target[6];

	for (i = 0;i<3;i++)
	{
		target[i] = source[i];
		printf("%c", source[i]);
	}
	printf("\n");

	for (i = 0;i<3;i++)
		target[5 - i] = source[i];

	for (i = 0;i<6;i++)
		printf("%c", target[i]);

	printf("\n");
	return 0;
}
// �迭�� �迭�� ��ġ�� �ִ� ���� �ϳ��ϳ��� �����Ͽ� �Ҵ��ؾ� �Ѵ�.
// target = source�� ���� �迭�� ��� ���� �����Ѵٴ� ���� ������ ������ �ʴ´�.
// 9�� �� target[i] = source[i]�� ���� �ϳ��ϳ� ���� �Ҵ����ش�.