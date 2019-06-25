#include<iostream>
//#include<fstream>
using namespace std;
int main()
{
//    ifstream fin("input.txt");
//    ofstream fout("output.txt");
    long long int a,c;
    cin>>a>>c;
    while(a>0 || c>0)
    {
        int counter=0;
        long long int block[a][c];
        long long int heights[c];
        for(int i=0;i<c;i++)
        {
            cin>>heights[i];
            heights[i]=a-heights[i];
            if(i==0)
                counter=heights[i];
            else if(heights[i-1]<heights[i])
            {
                counter+=(heights[i]-heights[i-1]);
            }
        }
        cout<<counter<<endl;
        cin>>a>>c;
    }
}
