#include<iostream>
using namespace std;
int main ()
{
    int n;
    while(cin>>n)
    {
        while(n++)
        {
                if(n%10 !=(n/10)%10 && n%10 !=(n/100)%10 &&  n%10 !=(n/1000) && (n/10)%10 !=(n/100)%10 && (n/10)%10 !=(n/1000) &&(n/100)%10 !=(n/1000))
        {
            cout<<n<<endl;
            break;
        }
        }
    }
    return 0;
}