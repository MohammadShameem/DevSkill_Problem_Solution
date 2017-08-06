#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int b1,b2,p1,p2,T=2,c=0;
        while(T--){
            cin>>b1>>b2>>p1>>p2;
             if(b1+b2>p1+p2){
                c++;
            }
        }
        if(c==2){
            printf("Banglawash\n");

        }
        else{
            printf("Miss\n");
        }
    }

    return 0;
}
