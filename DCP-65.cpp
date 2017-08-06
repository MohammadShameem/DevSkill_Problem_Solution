#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int n,sum=0,c=0;
        cin>>n;
        for(int i=1;;i++){
            if(sum>=n)break;
            sum=sum+i;
            c++;
        }
        cout<<c<<endl;

    }
    return 0;
}
