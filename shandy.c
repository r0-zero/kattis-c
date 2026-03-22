#include <stdio.h>
#define MIN(x, y) ((x) < (y) ? (x) : (y))

int main ()
{
	int l, b;
	scanf("%d %d", &l, &b);

	printf("%d", MIN(l, b) * 2);


	return 0;
}
