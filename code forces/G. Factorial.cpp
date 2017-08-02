#include<iostream>
using namespace std;
long long int factorial(int a)
{
    if(a==0 ||a==1)
    {
        return 1;
    }
    return a*factorial(a-1);

}
int main()
{
    int a;
    cin>>a;
    cout<<factorial(a)<<endl;
    return 0;
}
