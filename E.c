#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t,n,i,lc;
    scanf("%d",&t);
    double count;
    lc=0;
    while(t--)
    {
        count=0;
        scanf("%d",&n);
        for ( i = 1; i<=n; i++)
        {
            count+=1.0/i;
        }
        lc++;
        printf("Case %d: %.11llg\n",lc,count);
    }
    return 0;
}
