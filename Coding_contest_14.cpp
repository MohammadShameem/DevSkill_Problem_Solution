#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int R,C,T;
    cin>>T;
    while(T--){
        cin>>R>>C;
        int sum=0,r=sqrt(R*C);

        if(r*r==R*C){

           for(int i=1;i<=r;i=i+1){

               sum= sum+i*i*15;
           }
           cout<<sum<<endl;

        }
        else{

            for(int i=1;i<=r;i=i+1){

                sum= sum+i*i*15;
            }
            r= (int)(r*(r+1)*(2*r+1))/6-(int)((r-1)*(r)*(2*(r-1)+1))/6;
            cout<<(sum+(r+1)*15)+15<<endl;
        }



    }




    return 0;
}
