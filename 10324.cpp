#include<iostream>
using namespace std;
int main()
{
    int k=0;
    string value;
    cin>>value;
    while(1)
    {
        if(value[0]==NULL)
            break;
        k++;
        int zero,one;
        zero=0;
        one=0;
        //fin>>value;
        int n;
        cin>>n;
        int beg[n];
        int en[n];
        for(int i=0; i<n; i++)
        {
            cin>>beg[i]>>en[i];
            int temp;
            if(beg[i]>en[i])
                swap(beg[i],en[i]);
        }
        cout<<"Case "<<k<<":"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=beg[i]; j<=en[i]; j++)
            {
                if(value[j]=='1')
                    one++;
                else
                    zero++;
            }
            if(one==0 || zero==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
            one=0;
            zero=0;
        }
        getline(cin,value);
        getline(cin,value);
        if(value[0]=='\n')
            break;
    }
    return 0;
}
