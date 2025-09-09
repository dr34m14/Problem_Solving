//https://codeforces.com/problemset/problem/2132/B


//B. The Secret Number

#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<long long int> arr;
    long long int t,n;
    cin>>t;
    while (t--){
        cin>>n;
        long long int total_have=0;
        if (n%11!=0){
            cout<<0<<endl;
        }else{
            long long int total_loop=to_string(abs(n)).length()-1;
            for(long long int i =0;i <=total_loop;i++)
            {

                if(n%(1+(long long int)pow(10,i))==0)
                {
                    total_have++;
                    arr.push_back(n/(1+(long long int)pow(10,i)));


                }
            }
            cout<<total_have<<endl;
            for (int i  = 0;  i< arr.size(); i++)
            {
        
                cout<<arr[i]<<" ";    
            }
            arr.clear();
            cout<<endl;

        }
    }

    return 0;
}