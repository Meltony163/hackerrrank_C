#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1001];
    scanf("%s",s);
    int arr[10]={0};
    for (int i=0; i<strlen(s); i++) {
    if (s[i]>=48&&s[i]<=57) {
    arr[(int)s[i]-48]++;
    }
    }
    for (int i=0; i<10; i++) {
    printf("%d ",arr[i]);
    }
    return 0;
}
