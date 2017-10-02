#include<stdio.h>
int main()
{
    int lu[50001],i=0,t,t2,j,so,hi,s,h,tol;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&lu[i]);
        i++;
    }
    scanf("%d",&t2);
    while(t2--)
    {
        scanf("%d",&tol);
        so=0,hi=0,s=0,h=0;
        for(j=0; j<i; j++)
        {
            if(tol>lu[j])
            {
                so=lu[j];
                s=1;
            }
            else if(tol<lu[j] && h==0)
            {
                hi=lu[j];
                h=1;
            }
        }
        if(s==1 && h==1)
            printf("%d %d\n",so,hi);
        else if(s==1 && h==0)
            printf("%d X\n",so);
        else if (s==0 && h==1)
            printf("X %d\n",hi);
        else
            printf("X X\n");
    }
    return 0;
}
