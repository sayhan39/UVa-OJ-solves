#include<iostream>
#include<climits>
using namespace std;
int dif(int i,int j)
{
    if(i>j)
        return i-j;
    return j-i;
}

int main()
{
    int len;
    cin>>len;
    while(len)
    {
        string road;
        cin>>road;
        int d,r;
        bool res=false;
        bool dig=false;
        bool z=false;
        int distance=INT_MAX;
        for(int j=0; j<len; j++)
        {
            if(road[j]=='.')
                continue;
            else if(road[j]=='Z')
            {
                z=true;
            }
            else if(road[j]=='R')
            {
                r=j;
                res=true;
            }
            else if(road[j]=='D')
            {
                d=j;
                dig=true;
            }
            if(dig && res)
            {
                j--;
                dig=false;
                res=false;
                if(distance>dif(d,r))
                    distance=dif(d,r);
            }
            if(z)
            {
                distance=0;
                break;
            }
        }
        cout<<distance<<endl;
        cin>>len;
    }
}
