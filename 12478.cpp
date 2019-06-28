#include<iostream>
using namespace std;

int counter[8]= {};

int checker(string name, string namegrid[])
{
    int len=name.size();
    int i=0;
    int j=0;
    int k=0;
    int l=0;
    int r_count=0;
    int c_count=0;
    int counter=0;
    for(i=0;i<len;i++)
    {
        for(j=0;j<9;j++)
        {
            for(k=0;k<9;k++)
            {
                if(name[k]==namegrid[i][j])
                {
                    r_count++;
                    break;
                }
                else{
                    r_count=0;
                }
            }
            for(l=0;l<9;l++)
            {
                if(name[l]==namegrid[j][i])
                {
                    c_count++;
                    break;
                }
                else{
                    c_count=0;
                }
            }
            if(r_count==len)
            {
               counter=counter+1;
            }
            if(c_count==len)
            {
                counter=counter+1;
            }
        }
    }
    return counter;
}

int main()
{
    string namegrid[9]= {"OBIDAIBKR","RKAULHISP","SADIYANNO","HEISAWHIA","IRAKIBULS","MFBINTRNO","UTOYZIFAH","LEBSYNUNE","EMOTI0NAL"};
    string names[8]= {"RAKIBUL","ANINDYA","MOSHIUR","SHIPLU","KABIR","SUNNY","OBAIDA","WASI"};

    int counter[8]={};


    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            cout<<namegrid[i][j]<<"    ";
        }
        cout<<endl;
    }

    for(int i=0; i<8; i++)
    {
        counter[i] = checker(names[i],namegrid);
    }

    for(int i=0;i<8;i++)
    {
            cout<<names[i]<<" Counted: "<<counter[i]<<endl;
    }



}
