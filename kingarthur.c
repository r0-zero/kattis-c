#include <stdio.h>
#define PI 3.14159

int main()
{
	double d, w;
	int count;
	scanf("%lf\n%lf\n%d", &d, &w, &count);

	int fits = (int)(PI * d / w);
	printf("%s\n", fits >= count ? "YES" : "NO");

	return 0;
}
