#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void sorting(string &word)
{
    if(word.size()>=3)
    for(unsigned int i=0;i<word.size()-2;i+=2)
    {
         for(unsigned int j=i+2;j<word.size();j+=2)
    {

        if(word[j]<word[i])
        {
            swap(word[i],word[j]);
        }
    }
    }
    }
int main()
{
    string word;
    while(cin>>word)
    {
        sorting(word);
        cout<<word<<endl;
    }
    return 0;
}