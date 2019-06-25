#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{
    string name1,name2;
    while(getline(cin,name1))
    {
        getline(cin,name2);
        int n1=0;
        int n2=0;
        for(int i=0;i<name1.length();i++)
        {
            if(name1[i]>='a' && name1[i]<='z')
                n1+=(name1[i]-96);
            if(name1[i]>='A' && name1[i]<='Z')
                n1+=(name1[i]-64);
        }
        for(int i=0;i<name2.length();i++)
        {
            if(name2[i]>='A' && name2[i]<='Z')
                n2+=(name2[i]-64);
            if(name2[i]>='a' && name2[i]<='z')
                n2+=(name2[i]-96);
        }
        int d;
        for(d=0;;)
        {
            d=d+(n1%10);
            n1=n1/10;
            if(n1==0 && d>=10)
            {
                n1=d;
                d=0;
            }
            else if(n1==0)
            {
                n1=d;
                break;
            }
        }
        for(d=0;;)
        {
            d=d+(n2%10);
            n2=n2/10;
            if(n2==0 && d>=10)
            {
                n2=d;
                d=0;
            }
            else if(n2==0)
            {
                n2=d;
                break;
            }
        }
        int temp;
        if(n1>n2)
        {
            temp=n1;
            n1=n2;
            n2=temp;
        }
        double na1=(double)n1;
        double na2=(double)n2;
        double t=(na1/na2);
        t*=100;
        //printf("%.2d",t);
        cout<<setprecision(2)<<fixed<<t<<" %"<<endl;
    }
}
