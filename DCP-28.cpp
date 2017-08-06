#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--){
        float R,S,s,b;
        cin>>R>>S;
        b=R*2;
        b=roundf((b*100)/100);
        s=S*sqrt(2);
        s=roundf((s*100)/100);
        if(b==s ){
            printf("Yes\n");

        }
        else
            printf("No\n");


    }


    return 0;
}

