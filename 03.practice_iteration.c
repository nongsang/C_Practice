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
// i가 0일때 j = i 이므로 공백을 출력하지 않고 *만 출력한다.
// i가 1일때 j < i 이므로 공백을 처음 한번 출력하고 뒤애 *을 출력한다. 맨 뒤의 * 뒤에는 공백조차 없다.