#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int calcu(vector<int>&v)
{

    map<int,int>m;
    int i,b,c;
    b=-1,c=-1;
    for(i=0;i<v.size();i++)
    {
        m[v[i]]++;
    }
    for(i=0;i<v.size()+1;i++)
    {
        if(m[i]>0)m[i]--;
        else
        {
            b=i;
            break;
        }
    }
    for(i=0;i<v.size()+1;i++)
    {
        if(m[i]>0)m[i]--;
        else
        {
            c=i;
            break;
        }
    }
     v.clear();

    return b+c;
}
    int main()
    {
        optimize();
        int t,i,m;
        cin>>t;
        vector<int>v;
        for(i=1;i<=t;i++)
        {
            cin>>m;

            while(m--)
            {
                int x;
                cin>>x;
                v.push_back(x);
            }
            cout<<calcu(v)<<endl;
            v.clear();

        }
        return 0;
    }



