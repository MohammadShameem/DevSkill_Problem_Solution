#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int T;
    cin>>T;
    int j=0;
    while(T--){
        long long int n,r=1;
        cin>>n;
        if(n%2==0){
            r=3*n;
            cout<<"Case #"<<++j<<": "<<r<<" "<<r-1<<" "<<r-2<<endl;
        }

        else{
            r=3*n;
            cout<<"Case #"<<++j<<": "<<r-2<<" "<<r-1<<" "<<r<<endl;



        }

    }
    return 0;
}
