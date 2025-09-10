//https://codeforces.com/problemset/problem/2132/A
//A. Homework

#include<bits/stdc++.h>
using namespace std;

int main ()
{

    int t;
    cin >>t;
    while(t--){

        int a,b;
        string A,B,c,new_str;
        cin>>a>>A>>b>>B>>c;
        new_str=A;
        for(int i=0;i<b;i++)
        {


            if(c[i]=='V'){

                //<--
                new_str=B[i]+new_str;
            }else{
                //-->
                new_str+=B[i];

            }
        }
        cout<<new_str<<endl;

    }


    return 0;
}