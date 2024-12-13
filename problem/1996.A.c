#include<stdio.h>

int main()
{

     int t,n,mnn,gg;
    scanf("%d",t);
    while (t--)
    {
        scanf("%d",n);
       mnn=n/4;
       gg=n%4;
      if(gg!=0)
      {
        mnn=mnn+(gg/2);
        printf("%d\n",mnn);

      }else{
                printf("%d\n",mnn);

      }
        

    }
    return 0;
}


