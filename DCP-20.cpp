#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,i;
    double e,r;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d %lf %d %d",&a,&b,&r,&c,&d);
        e=sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
        printf("Case %d: ",i);
        if(e>r)
            printf("Outside\n");
        else if(e==r)
            printf("OnCircle\n");
        else
            printf("Inside\n");
    }
    return 0;
}
