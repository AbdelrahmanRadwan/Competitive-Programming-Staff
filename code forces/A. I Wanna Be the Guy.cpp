#include<iostream>
#include<set>
using namespace std;
int main ()
{
    unsigned int level;
    int Size,n;
    set<int>levels;
    while(cin>>level)
    {
        cin>>Size;
        levels.clear();
        for(int i=0;i<Size;i++)
        {
            cin>>n;
            levels.insert(n);
        }
        cin>>Size;
         for(int i=0;i<Size;i++)
        {
            cin>>n;
            levels.insert(n);
        }
        if(levels.size()>=level)
        {
            cout<<"I become the guy."<<endl;
        }
        else
        {
          cout<<"Oh, my keyboard!"<<endl;
        }
    }
    return 0;
}
