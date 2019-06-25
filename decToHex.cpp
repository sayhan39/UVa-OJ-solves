#include<iostream>
using namespace std;
void decToHexa(int n)
{
    // char array to store hexadecimal number
    char hexaDeciNum[2];

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
    for(int j=i-1; j>=0; j--)
        cout << hexaDeciNum[j];
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string str;
        cin>>str;
        int n=str.length();
        int pointer=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='>')
                pointer++;
            else if(str[i]=='<')
                pointer--;
            else if(str[i]=='+')
                str[pointer]++;
            else if(str[i]=='-')
                str[pointer]--;
        }
    }
}
