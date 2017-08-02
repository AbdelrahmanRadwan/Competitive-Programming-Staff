#include<iostream>
#include<string.h>
#include<string>
#include<math.h>
#include<cmath>
using namespace std;
long long power(int a,long long b)
{
   long long result=1;
    for(long long i=0;i<b;i++)
    {
        result*=a;
        result%=1000003;
    }
    return result;
}
long long decimal(string num)
{
    long long result=0;
    long long j=0;
       for(long long i=num.size()-1;i>=0;i--,j++)
        {
            result+=(((power(2,j%1000003))%1000003)*(num[i]-48)%1000003);
            result%=1000003;
        }
        return result%1000003;
}
string GenerateBinary(string word)
{
    string num="\0";
    for(unsigned int i=0;i<word.size();i++)
        {
        switch (word[i])
        {
        case '>':
        {
        num+="1000";
        break;
        }
                case '<':
                {
                    num+="1001";
                    break;
                }
                case '+':
                {
                    num+="1010";
                    break;
                }
                case '-':
                {
                    num+="1011";
                    break;
                }
                case '.':
                {
                    num+="1100";
                    break;
                }
                case ',':
                {
                    num+="1101";
                    break;
                }
                case '[':
                {
                    num+="1110";
                    break;
                }
                case ']':
                {
                    num+="1111";
                    break;
                }
             }
        }
        return num;
}
int main ()
{
    string word;
    while(cin>>word)
    {
   cout<< decimal(GenerateBinary(word))<<endl;

    }
    return 0;
}
