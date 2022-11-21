#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,x,y,z,a=0,b=0,c=0;
    scanf("%d",&n);
    for (int i = 1; i <=n ; i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        a+=x;
        b+=y;
        c+=z;
    }

    if (a==0 && b==0 && c==0)
    {
        printf("YES\n");
    }
    else printf("NO\n");
    return 0;
}
