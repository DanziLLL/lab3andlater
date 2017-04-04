#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double d, x1, x2;
    d = b*b - 4*a*c;
    if (d > 0.0) {
	x1 = (-b + sqrt(d))/(2*a);
	x2 = (-b - sqrt(d))/(2*a);
	printf("x1 = %f, x2 = %f", x1, x2);
	return 0;
    }
    if (d == 0.0) {
	x1 = -b/2*a;
	printf("x = %f", x1);
	return 0;
    }
    if (d < 0.0) {
	printf("Only complex roots");
	return 0;
    }
    return 0;
}