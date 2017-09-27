#include<stdio.h>
int main()
{
    int a,b,ar[10001],i,j,temp=0,c,t=0,d=1,e=0;
    while (scanf("%d %d",&a,&b) != EOF)
    {
        t++;
        d=1;
        e=0;
        if(a==0 && b==0)
            break;

        temp=0;
        for(i=0; i<a; i++)
        {
            scanf("%d",&ar[i]);
        }

        for (i=0; i<a; i++)
        {
            for (j=i+1; j<a; j++)
            {
                if (ar[i]>ar[j])
                {
                    temp=ar[i];
                    ar[i]=ar[j];
                    ar[j]=temp;
                }
            }
        }

        for(i=0; i<b; i++)
        {
            e=0;
            scanf("%d",&c);
            if(d==1)
            {
                printf("CASE# %d:\n",t);
                d++;
            }
            for(j=0;j<a;j++)
            {
                if(ar[j]==c)
                {
                    printf("%d found at %d\n",c,j+1);
                    e++;
                    break;
                }
            }
            if(e==0)
                printf("%d not found\n",c);
        }
    }
    return 0;
}
