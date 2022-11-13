#include<stdio.h>
int main() {
	double a, b;
	a = 0;
	b = 0;
	int c, d;
	c = -1;
	d = 0;
	for (; d < 100;) {
		d++;
		c = -c;
		b = 1 / d * c;
		a = a + b;
	}
	printf("%lf\n", a);
	return 0;


}