#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t,n,mnn,gg;
    cin>>t;
    while (t--)
    {
        cin>>n;
       mnn=n/4;
       gg=n%4;
      if(gg!=0)
      {
        mnn=mnn+(gg/2);
        cout<<mnn<<"\n";

      }else{
        cout<<mnn<<"\n";
      }
        

    }
    
    return 0;
}