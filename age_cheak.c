#include<stdio.h>//6.8
int main()
{
        int n,c=0,i,a[100],j,tmp;
        for(i=0;i<10;i++)
        {
                scanf("%d",&a[i]);
        }
        for(i=0;i<10;i++)
        {
                for(j=i;j<10;j++)
                {
                        if(a[i]>a[j])
                        {
                                tmp=a[i];
                                a[i]=a[j];
                                a[j]=tmp;
                        }
                }
        }
        for(i=0;i<10;i++)
        {
                if(a[i]>=50&&a[i]<=60)
                        c++;
                if(a[i]>60)
                        continue;
        }
        printf("%d\n",c);
        return 0;
}
