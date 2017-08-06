#include<bits/stdc++.h>
#define max 1000
int dp[max];
long long int fib(int n)
{
    if (n == 1)
      return 1;
    if (n == 2)
      return 3;
    if(dp[n]!= -1){
        return dp[n];
    }
    else{
        dp[n]= fib(n-1) + fib(n-2);
        return dp[n];
    }
}

int main ()
{

    int T;
    scanf("%d",&T);
    memset(dp,-1,sizeof(dp));
    while(T--){
        int n ;
        scanf("%d",&n);
        printf("%lld\n", fib(n));
    }

  return 0;
}
