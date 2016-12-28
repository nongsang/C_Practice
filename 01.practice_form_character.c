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
// 20번째 줄
// %는 화면에 출력할 수 없다.
// y % z로 적으면 화면에 y만 나오게 된다.
// 따라서 y % z 를 화면에 출력하고 싶으면 y %% z로 적어야 y % z로 출력이 된다.