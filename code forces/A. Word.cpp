#include<iostream>
#include<string>
#include<string.h>
using namespace std;
void upper(string word)
{
    for(unsigned int i=0;i<word.size();i++)
    {
        word[i]=toupper(word[i]);
    }
    cout<<word<<endl;
}
void lower(string word)
{
    for(unsigned int i=0;i<word.size();i++)
    {
        word[i]=tolower(word[i]);
    }
    cout<<word<<endl;
}
void counter(string word)
{
    unsigned int counter=0;
    for(unsigned int i=0;i<word.size();i++)
    {
       if(word[i]<='z' && word[i]>='a')
       {
           counter++;
       }
    }
    if(counter>=word.size()-counter)
    {
        lower(word);
    }
    else
    {
        upper(word);
    }
}
int main ()
{
    string word;
    while(cin>>word)
    {
        counter(word);
    }
    return 0;
}