#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include<limits>
#include<fstream>

using namespace std;

int main()
{
//    ifstream fin("input.txt");
//    ofstream fout("output.txt");
	int T;
	cin>>T;
	int k=0;
	while(k<T)
	{
	    k++;
		string str;
		cin>>str;
		int len=str.size();
		int i;
        char memory[100]={};
		int pointer = 0;
		for(i=0;i<len;i++)
		{
			if(str[i]=='.')
            {
            }
			else if(str[i]=='>')
			{
			    pointer++;
			    if(pointer>99)
                    pointer=0;
			}
			else if(str[i]=='<')
			{
			    pointer--;
			    if(pointer<0)
                    pointer=99;
			}
			else if(str[i]=='+')
			{
			    memory[pointer]=memory[pointer]+1;
				if(memory[pointer]>255)
					memory[pointer]==0;
			}
			else if(str[i]=='-')
			{
			    memory[pointer]=memory[pointer]-1;
				if(memory[pointer]<0)
					memory[pointer]==255;
			}
		}
		cout<<"Case "<<k<<": ";
		for(int j=0;j<100;j++)
        {
            if(j==99)
            {
                printf("%02X",(unsigned char)memory[j]);
                continue;
            }
            printf("%02X ",(unsigned char)memory[j]);
		}
        cout<<endl;

	}
}
/*
+++<<>><-<<-<<>+<>+++-<->--+>--<+-+<->+>+>->><>-<<-<<><-<<<++>--++--<<+>+-><<>---+--->+>>++<>>+-++<+++<><-<-+>-<+-+<>++++>>><+<-+->>--<<-<>--<+>-<>->++<>+-->->+<><<<<-><+>+<<+>+<+>-++-->--+<<>->+>--++-<>>->>><>-<++<+>-<>-<>+>><>+>-<<<->>-++>>+>+>-><--->-


..++<><<+++>>++++++++++++++++++++++++++>>>+++<+...++<><<+++>>++++++++++++++++++++++++++>>>+++<+...++<><<+++>>++++++++++++++++++++++++++>>>+++<+.



 */
