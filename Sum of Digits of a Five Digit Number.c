#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int temb,sum=0;
    scanf("%d", &n);
    while (n!=0) {
    temb=n%10;
    n=n/10;
    sum=sum+temb;
    }
    printf("%d",sum);
    return 0;
}
