#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
       int arr[n-1];
    int index;
    for(int i=n;i>=1;i--)
    {
        index =0;
        for(int j=n;j>i;j--)
        {
            arr[index]=j;
            index++;
            printf("%d ",j);
        }
        for(int k=0;k<i-1;k++)
        {
            arr[index]=i;
            index++;
            printf("%d ",i);
        }
        printf("%d ",i);
        for(int m=n-2;m>=0;m--)
        {
            printf("%d ",arr[m]);
        }
        printf("\n");
    }
    for(int i=2;i<=n;i++)
    {
        index=0;
        for(int j=n;j>=i;j--)
        {
            arr[index]=j;
            index++;
            printf("%d ",j);
        }
        for(int k=i-2;k>0;k--)
        {
            arr[index]=i;
            index++;
            printf("%d ",i);
        }
        printf("%d ",i);
        for(int m=n-2;m>=0;m--)
        {
            printf("%d ",arr[m]);
        }
        printf("\n");
    }


    return 0;
}
