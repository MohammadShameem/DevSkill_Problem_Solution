#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,c=1;
    scanf("%d",&T);
    while(T--){

        long long int n;
        double m;
        cin>>n;
        m =ceil(sqrt(n));

        if(m*m==n){
            printf("Case %d: Yes\n",c);
            c++;
        }
        else
            printf("Case %d: No\n",c);
            c++;
    }
    return 0;
}
