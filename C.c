#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n,prev,cur;
        scanf("%d%d",&n,&prev);
        int ans=0,count=1,flag=0;
        for(int i=1;i<=n-1;i++)
        {
            scanf("%d",&cur);
            if(cur!=prev)
            {
                count++;
                flag=1;
            }
            else
            {
                if(flag==1)
                {
                    ans+=count;
                }
                count=1;
                flag=0;
            }
            prev=cur;
        }
        if(flag==1)
        {
            ans+=count;
        }
        printf("%d\n",ans);
    }
    return 0;
}
