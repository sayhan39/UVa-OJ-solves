#include<iostream>
using namespace std;
int main()
{
    int n1=12345;
    int d;
    for(d=0;;)
    {
        d=d+(n1%10);
        n1=n1/10;
        if(n1==0)
        {
            n1=d;
            if(d>=10)
                d=0;
            else
                break;
        }
    }
    cout<<n1<<endl;

}
