#include <stdio.h>
#include <stdlib.h>
void update(int *a,int *b) {
    int temb;
    temb=*a;
    *a=temb+*b;
    *b=abs((temb-*b));
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
