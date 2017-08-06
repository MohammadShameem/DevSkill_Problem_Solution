#include<bits/stdc++.h>
using namespace std;
int sieve(int n){
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(int p=2;p*p<=n;p++){
        if(prime[p]== true){
            for(int i =p*2; i<=n;i+=p){
                    prime[i]=false;

            }

        }

    }
    if(n==0){
        cout<<"No"<<endl;
        return 0;
    }
    else if(n==1){
        cout<<"No"<<endl;
        return 0;
    }
    else if(prime[n]){
        cout<<"Yes"<<endl;

    }
    else{
         cout<<"No"<<endl;

    }
}


int main()
{
    int T,n;
    cin>>T;
    while(T--){
        cin>>n;
        sieve(n);
    }
    return 0;
}
