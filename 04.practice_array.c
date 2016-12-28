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
// 배열은 배열의 위치에 있는 값들 하나하나를 지정하여 할당해야 한다.
// target = source과 같은 배열의 모든 값을 복사한다는 뜻의 문법은 허용되지 않는다.
// 9번 줄 target[i] = source[i]과 같이 하나하나 값을 할당해준다.