#include <stdio.h>

int main()
{
	int x, y, z;
	int result;

	printf("input x : ");
	scanf("%d", &x);

	printf("input y : ");
	scanf("%d", &y);

	printf("input z : ");
	scanf("%d", &z);

	result = (x + y) * (x + z) / (y % z);

	printf("( x + y ) * ( x + z ) / ( y %% z ) = %d \n", result);
}
// 20��° ��
// %�� ȭ�鿡 ����� �� ����.
// y % z�� ������ ȭ�鿡 y�� ������ �ȴ�.
// ���� y % z �� ȭ�鿡 ����ϰ� ������ y %% z�� ����� y % z�� ����� �ȴ�.