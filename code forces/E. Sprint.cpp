#include<iostream>
#include<algorithm>
#define MINI(a,b,c) min(min(a,b),c)
using namespace std;
int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<< MINI(a,b,c)<<endl;
    return 0;
}

