#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,c=1,n,r;
    scanf("%d",&T);
    while(T--){

        scanf("%d",&n);
        r=sqrt(n);
        printf("Case %d: ",c);
        c++;
        if(r*r==n)printf("YES\n");
        else printf("NO\n");
    }
    return 0;


    return 0;
}
