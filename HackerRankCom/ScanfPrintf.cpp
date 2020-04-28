#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int a;
    long b;
    char c;
    float d;
    double e;

    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);

    printf("%d", a);
    printf("\n");
    printf("%lld", b);
    printf("\n");
    printf("%c", c);
    printf("\n");
    printf("%.2f", d);
    printf("\n");
    printf("%.5lf", e);
    printf("\n");

    return 0;
}

