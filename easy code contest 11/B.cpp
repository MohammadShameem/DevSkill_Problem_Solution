

#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int tc,c=1;
        scanf("%d",&tc);
        while(tc--)
        {

            long long int a,b,d;
            scanf("%lld %lld",&a,&b);
            if(a==1)
            {
                d=(b-a)+2;
            }else{
                  d=(b-a)+1;
            }
            if(d%2==0)
            {
              
                printf("Case %d: Even\n",c);
            }
            else{
               
               printf("Case %d: Odd\n",c);
            }

	   c++;

        }

return 0;
    }

