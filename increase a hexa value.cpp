#include<iostream>
#include<cmath>
using namespace std;

int hexToDec(bool y,string hex)
{
    int num[10]={};
    int j=0;
    for(int i=(hex.length()-1);i>=0;j++,i--)
    {
        if(hex[i]<=57 && hex[i]>=48)
        {
            num[i]=pow(16,j)*(hex[i]-'0');
        }
        else
        {
            num[i]=pow(16,j)*(((int)hex[i])-55);
        }
    }
    int val=0;
    for(int i=0;i<10;i++)
        val+=num[i];
    cout<<"decimal value: "<<val<<endl;
    if(y)
        return (val-1);
    return (val+1);
}

string decToHexa(bool y,string hexa)
{
    int n=hexToDec(y,hexa);
    // char array to store hexadecimal number
    char hexaDeciNum[2];
    char temp[3]={};

    // counter for hexadecimal number array
    int i = 0;
    while(n!=0)
    {
        // temporary variable to store remainder
        int temp  = 0;

        // storing remainder in temp variable.
        temp = n % 16;

        // check if temp < 10
        if(temp < 10)
        {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else
        {
            hexaDeciNum[i] = temp + 55;
            i++;
        }

        n = n/16;
    }

    // printing hexadecimal number array in reverse order
    int k=0;
    for(int j=i-1; j>=0; j--)
    {
        temp[k++]=hexaDeciNum[j];
    }
        //temp[k++] = hexaDeciNum[j];
    temp[2]='\0';
    string hex(temp);
    return hex;
}





int main()
{
    cout<<"9 + 1 : "<<decToHexa(false,"9");
}
