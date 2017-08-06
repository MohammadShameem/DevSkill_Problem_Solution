 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    int T,x1,y1,x2,y2,x,y,c=1;
    cin>>T;
    while(T--){
        cin>>x1>>y1>>x2>>y2;
        x = abs(x2-x1);
        y = abs(y2-y1);
        printf("Case %d: %d\n",c,x+y);
        c++;

    }



     return 0;
 }
