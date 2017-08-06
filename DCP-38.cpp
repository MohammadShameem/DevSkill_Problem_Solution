#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);

    while(T--){
        map<string , int>m;
        map<int , string >mp;
        map<int , string>::reverse_iterator  it1;

        string s;
        int v,n;
        scanf("%d",&n);
        for(int i =0;i<n;i++){
            cin>>s>>v;
            m.insert(pair<string,int>(s, v));
            mp.insert(pair<int,string>(v,s));
        }
        for(it1=mp.rbegin();it1!=mp.rend();it1++){
            cout<<it1->second<<" ";
            break;
        }
        cout<<mp.begin()->second<<endl;


    }



    return 0;

}
