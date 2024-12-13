#include<bits/stdc++.h>

using namespace std;

int main()
{


long long m,n;
cin>>m>>n;
long long x=1;
for(int i=2;i<=n;i++){
x=(x*i)%m;
}
cout<<x<<" "<< x%m<<"\n";
return 0;
}
