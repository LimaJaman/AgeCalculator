#include<stdio.h>
int main()
{
    int n,i;
    printf("\n\n     ************* WELCOME TO MY AGE CALCULATOR *********\n\n");
    printf("Enter number of persons :\n");
    scanf("%d",&n);

    int pd,pm,py,bd[n],bm[n],by[n],D,M,Y;

    printf("Enter pd pm py :");
    scanf("%d %d %d",&pd,&pm,&py);

    for(i=1;i<=n;i++)
    {
        printf("Enter bd bm by :");
        scanf("%d %d %d",&bd[i],&bm[i],&by[i]);

        if(pd<bd[i]&&bm[i]==1||bm[i]==3||bm[i]==5||bm[i]==7||bm[i]==8||bm[i]==10||bm[i]==12)
        {
            pd=pd+31;
            bm[i]=bm[i]+1;
        }
        else if(pd<bd[i]&&bm[i]==4||bm[i]==6||bm[i]==9||bm[i]==11)
        {
            pd=pd+30;
            bm[i]=bm[i]+1;
        }
        else if(pd<bd[i]&bm[i]==2&&by[i]%4==0)
        {
            pd=pd+29;
            bm[i]=bm[i]+1;
        }
        else if(pd<bd[i]&&bm[i]==2)
        {
            pd=pd+28;
            bm[i]=bm[i]+1;
        }
        D=pd-bd[i];
        if(pd>bd)
        {
            pd=pd;
            bm[i]=bm[i];
        }
        D=pd-bd[i];

        if(pm<bm[i])
        {
            pm=pm+12;
            by[i]=by[i]+1;
        }
        M=pm-bm[i];
        Y=py-by[i];
        if(pm>bm)
        {
            pm=pm;
            by[i]=by[i];
        }
        M=pm-bm[i];
        Y=py-by[i];
        if(D>=30)
        {
            D=D%30;
        }

        printf("Day=%d\t  Month=%d\t  Year=%d\n\n",D,M,Y);
    }
    return 0;
}