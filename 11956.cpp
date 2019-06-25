#include<cstdio>
#include<iostream>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
//    ifstream fin("input.txt");
//    ofstream fout("output.txt");
    int T;
    cin>>T;
    while(T--)
    {
        char str[100000];
        cin>>str;
        char memory[100]={};
        int len=100000;
        int pointer=0;
        for(int i=0;i<len;i++)
        {
            if(str[i]=='<')
            {
                pointer--;
                if(pointer<0)
                    pointer=99;
            }
            else if(str[i]=='>')
            {
                pointer++;
                if(pointer>99)
                    pointer=0;
            }
            else if(str[i]=='+')
            {
                memory[pointer]=memory[pointer]+1;
                if(memory[pointer]>=255)
                    memory[pointer]=0;
            }
            else if(str[i]=='-')
            {
                memory[pointer]=memory[pointer]-1;
                if(memory[pointer]<0)
                    memory[pointer]=0;
            }
        }
        cout<<"Case "<<T+1<<": ";
        for(int i=0;i<100;i++)
//            cout<<hex<<memory[i]<<" ";
            printf("%02X ",memory[i]);
        cout<<endl;
    }
}

/*
..++<><<+++>>++++++++++++++++++++++++++>>>+++<+...++<><<+++>>++++++++++++++++++++++++++>>>+++<+...++<><<+++>>++++++++++++++++++++++++++>>>+++<+.
*/
