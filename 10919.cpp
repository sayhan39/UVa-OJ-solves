#include<iostream>
#include<cstddef>
using namespace std;

bool find_course(int len,string courses[],string course)
{
    for(int i=0; i<len; i++)
    {
        if(courses[i]==course)
            return true;
    }
    return false;
}

int main()
{
    int k,m;
    cin>>k;
    while(k>0)
    {
        cin>>m;
        string courses[k];
        for(int i=0; i<k; i++)
        {
            cin>>courses[i];
        }
        int catagory;
        int minimum;
        int right;
        bool ok=true;
        int i;
        for(i=0; i<m; i++)
        {
            cin>>catagory>>minimum;
            string course;
            int check=0;
            for(int j=0;j<catagory; j++)
            {
                cin>>course;
                if(find_course(k,courses,course)==true)
                    check++;
            }
            if(check!=minimum && check<minimum)
                ok=false;
            check=0;
         }
         if(!ok)
            cout<<"no"<<endl;
         else
            cout<<"yes"<<endl;
         cin>>k;
    }
}
