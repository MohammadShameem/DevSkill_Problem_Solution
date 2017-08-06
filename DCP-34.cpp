#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
        int n,c=0;
        scanf("%d",&n);
        if(n==0){
            printf("1\n");
        }
        else{
            while(n!=0)
            {
                int rev=n%10;
                n=n/10;
                c++;
            }
            cout<<c<<endl;
        }

    }
    return 0;

}


