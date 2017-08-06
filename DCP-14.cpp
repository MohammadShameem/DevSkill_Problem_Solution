#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--){
        float a1,a2,a3,corner;
        cin>>a1>>a2>>a3;
        corner = sqrt(a1*a1+a2*a2+a3*a3);
        printf("%.2f\n",corner);

    }


    return 0;
}
