#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
        int n,arr[100001];
        cin>>n;
        for(int i =0;i<n;i++){
            cin>>arr[i];

        }
        sort(arr,arr+n);

        for(int i =0;i<n;i++){
            printf("%d ",arr[i]);

        }
    }
    return 0;
}
