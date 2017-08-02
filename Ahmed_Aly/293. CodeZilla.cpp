#include<iostream>
#include<string>
using namespace std;
void small(string &a)
{
    for(unsigned int i=0;i<a.size();i++)
    {
        a[i]=tolower(a[i]);
    }
}
bool searching(char a,string b)
{
   for(unsigned int i=0;i<b.size();i++)
    {
        if(b[i]==a)
        {
            return true;
        }
    }
    return false;
}
int main ()
{
    string first,last,member;
    int testcases,num;
    cin>>testcases;
    for(int i=1;i<=testcases;i++)
    {
        cin>>num;
        cin>>first>>last;
        small(first);
        small(last);
        cout<<"Case "<<i<<":"<<endl;
        for(int j=0;j<num;j++)
        {
            cin>>member;
            small(member);
            if(first[0]!=last[0])
            {
                cout<<"YES"<<endl;
            }
            else
            {

                if( searching(first[0],member)==true)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}
