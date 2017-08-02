#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main ()
{
    string word;
    int Size,sum1,sum2;
    bool lucky;
    while(cin>>Size>>word)
    {
        lucky=true;
        sum1=sum2=0;
        for(int i=0;i<Size;i++)
        {
            if(word[i]!='4' && word[i]!='7' )
            {
                lucky=false;
                break;
            }
        }
        for(int i=0,j=Size-1;i<Size/2;j--,i++)
        {
            sum1+=word[i];
            sum2+=word[j];
        }
        if(sum1!=sum2 || lucky==false)
        {
             cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
