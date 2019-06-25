#include<iostream>
using namespace std;

int increment(int counter)
{
    if(counter<4)
        return (counter+1);
    else
        return 4;
}

int main()
{
    int points,counter;
    cin>>points;
    while(points>0)
    {
        string last,signal;
        last="+x";
        for(int i=1;i<points;i++)
        {
            string temp;
            cin>>signal;
            if(signal=="No")
                continue;
            ///2
            if(last=="+x")
                last=signal;
            ///2.5
            else if(last=="-x")
            {
                last[1]=signal[1];
                if(signal[0]=='-')
                    last[0]='+';
                else
                    last[0]='-';
            }
            ///3
            else if(signal[1]!=last[1])
                continue;
            ///4
            else if(last==signal)
                last="-x";
            ///5
            else if(last[1]==signal[1])
                last="+x";
        }
        cout<<last<<endl;
        cin>>points;
        if(points==0)
            break;
    }
}
