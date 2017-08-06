#include <bits/stdc++.h>
using namespace std;
int main() {
	int tc,n;
    while(scanf("%d",&n)==1){
        int t1=0,t2=1,f=0,j=0;
        for(int i=1;i<=n;i++){
            f=t1+t2;
            t1=t2;
            t2=f;
            j++;
            if(f==n)
                break;
        }
        if(j==1){cout<<"Showmic brings "<<n<<" chocolate on "<<j<<"st day."<<endl;}
        else if(j==2){cout<<"Showmic brings "<<n<<" chocolates on "<<j<<"nd day."<<endl;}
        else if(j==3){cout<<"Showmic brings "<<n<<" chocolates on "<<j<<"rd day."<<endl;}
        else{cout<<"Showmic brings "<<n<<" chocolates on "<<j<<"th day."<<endl;}
    }
	return 0;
}
