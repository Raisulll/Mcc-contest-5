#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t,s,a;
    scanf("%d",&t);
    while (t--)
    {
        a=0;
        scanf("%d",&s);
        for (int i = s; i>=5; i/=5)
        {
            a+=(i/5);
        }
        printf("%d\n",a);
    }
    return 0;
}
