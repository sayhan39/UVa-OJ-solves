#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string x0="";
    while(1)
    {
        cin>>x0;
        stringstream sin(x0);
        if(x0=="END")
            break;
        vector<int>x;
        x.push_back(x0.length());
        int one;
        sin>>one;
        if(one==x[0])
        {
            cout<<x0<<endl;
            continue;
        }
        int i;
        for(i=0;;i++)
        {
            int val=x[i];
            int j;
            for(j=0;val>0;j++)
            {
                if(val<0)
                    break;
                val/=10;
            }
            x.push_back(j);
            if(x[i]==x[i+1])
                break;
        }
        cout<<x.size()<<endl;
    }
}
