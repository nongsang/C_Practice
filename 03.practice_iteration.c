#include  <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");

		for (; j < 7 - i; j++)
			printf("*");

		printf("\n");
	}

	return 0;
}
// i�� 0�϶� j = i �̹Ƿ� ������ ������� �ʰ� *�� ����Ѵ�.
// i�� 1�϶� j < i �̹Ƿ� ������ ó�� �ѹ� ����ϰ� �ھ� *�� ����Ѵ�. �� ���� * �ڿ��� �������� ����.