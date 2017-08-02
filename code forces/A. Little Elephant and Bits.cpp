#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    string word;
    bool a=true;
    while(cin>>word)
    {
        a=true;
        for(unsigned int i=0;i<word.size();i++)
        {
            if(word[i]=='0' && a==true)
            {
                a=false;
                continue;
            }
            if(i==word.size()-1 && a==true)
            {
                continue;
            }
            cout<<word[i];
        }
        cout<<endl;
    }

    return 0;
}
