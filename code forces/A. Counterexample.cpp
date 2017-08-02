#include <iostream>
using namespace std;
int main()
{
    long long int a,b;
    while(cin>>a>>b)
    {
        if(a%2!=0)
        {
            a++;
        }
        if(a>=b ||b-a==1)
            cout<<-1<<endl;
        else
        cout<<a<<" "<<a+1<<" "<<a+2<<endl;
    }

    return 0;
}
