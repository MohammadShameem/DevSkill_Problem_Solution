#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,c=1;;
    cin>>T;
    while(T--){

        double  Cx, Cy, R, Px, Py,d;
        cin>>Cx>>Cy>>R>>Px>>Py;
        d = sqrt((Cx-Px)*(Cx-Px))+((Cy-Py)*(Cy-Py));
        if(d==R){
            printf("Case %d: OnCircle\n",c);
            c++;
        }
        else if(d>R){
            printf("Case %d: Outside\n",c);
            c++;
        }
        else{
            printf("Case %d: Inside\n",c);;
            c++;
        }

    }


    return 0;
}

