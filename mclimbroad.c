#include <stdio.h>


int main ()
{
	int mile, f;
	scanf("%d\n%d", &mile, &f);
	mile *= 5280;

	printf("%d", mile / f);

	return 0;
}
