#include <stdio.h>
#include <iostream>
void update(int* a, int* b) {
    
    int an = *a; int bn = *b;
    int sum, subt;

    sum = an + bn; subt = an - bn;

    *a = abs(sum);
    *b = abs(subt); 
}

int main() {
    int a, b;
    int* pa = &a, * pb = &b;

    scanf_s("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
