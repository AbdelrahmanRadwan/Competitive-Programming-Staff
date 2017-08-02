#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int powerofworrior,numberofdragons;
    pair<int ,int>*arr;
    bool yes_or_no=true;
    cin>>powerofworrior>>numberofdragons;
        arr=new pair<int , int> [numberofdragons];
        for(int i=0;i<numberofdragons;i++)
        {
            cin>>arr[i].first>>arr[i].second;
        }
        sort(arr,arr+numberofdragons);
        for(int i=0;i<numberofdragons;i++)
        {
            if(arr[i].first>=powerofworrior)
            {
            yes_or_no=false;
            break;
            }
            else
            {
            powerofworrior+=arr[i].second;
            }
        }
        if(yes_or_no==false)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    return 0;
}
