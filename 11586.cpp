#include<iostream>
using namespace std;
int main()
{
    int c;
    cin>>c;
    string result[c];
    string temp;
    getline(cin,temp);
    for(int i=0;i<c;i++)
    {
        string line;
        getline(cin,line);
        int len=line.length();
        int f=0;
        int m=0;
        for(int j=0;j<len;j++)
        {
            if(line[j]=='F')
                f++;
            else if(line[j]=='M')
                m++;
        }
        if(f==m && f>1)
            result[i]="LOOP";
        else
            result[i]="NO LOOP";
    }
    for(int i=0;i<c;i++)
        cout<<result[i]<<endl;
}
