/*#include <iostream>
#include<algorithm>
using namespace std;
int sorting (int arr[],int Size)
{
    int counter=0;
    for(int i=0;i<Size-1;i++)
    {
        for(int j=i+1;j<Size;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
                counter++;
            }
        }
    }
    return counter;

}
int main()
{
    int testcases,Size,*arr;
    cin>>testcases;
    for(int i=0;i<testcases;i++)
    {
        cin>>Size;
        arr=new int[Size];
        for(int j=0;j<Size;j++)
        {
            cin>>arr[j];
        }
        cout<<"Optimal train swapping takes "<<sorting(arr,Size)<<" swaps."<<endl;
    }
    return 0;
}
*/


/*
//rails
#include<iostream>
using namespace std;
void input(int arr[],int Size)
{
    for(int i=1;i<Size;i++)
    {
        cin>>arr[i];
    }
}

bool increasing (int arr[],int Size)
{
    for(int i=1;i<Size;i++)
    {
        if(arr[i]!=i+1)
        {
            return false;
        }
    }
    return true;
}
bool decreasing (int arr[],int Size)
{
    for(int i=1,j=Size-1;i<Size;i++,j--)
    {
        if(arr[i]!=j)
        {
            return false;
        }
    }
    return true;




}
int main()
{
    int Size,*arr;
    while(cin>>Size)
    {
        if(Size==0)
        {
            break;
        }
        arr=new int[Size];
        while(cin>>arr[0])
        {
        if(arr[0]==0)
        {
            cout<<endl;
            break;
        }
        else if(arr[0]==Size)
        {
        input(arr,Size);
        if(decreasing(arr,Size)==true)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        }
        else if(arr[0]==1)
        {
        input(arr,Size);
        if(increasing(arr,Size)==true)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    }
    return 0;
}
*/
          /*  //number chains


*/
/* PERFECTION
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    long long sum=0,i=0;
    bool a=true;
    while (cin>>n){
            if(a==true)
            {
                cout<<"PERFECTION OUTPUT"<<endl;
                a=false;
            }
            sum=0;
            if (n==0){
                break;
            }

        for (int i=1;i<=n/2;i++){
            if (n%i==0){
                sum+=i;
            }
        }
        if (sum==n){
            cout<<setw(5)<<n<<"  "<<"PERFECT"<<endl;
        }
        else if(sum<n){
            cout<<setw(5)<<n<< "  "<<"DEFICIENT"<<endl;
        }
        else {
            cout<<setw(5)<<n<<"  "<<"ABUNDANT"<<endl;
        }
        i++;
    }
    cout<<"END OF OUTPUT"<<endl;
    return  0;
}
*/
/*
#include<iostream>
#include<string>
#include<algorithm>
#include<string.h>
#include<cstring>
using namespace std;
bool increasing(int a,int b)
{
    return a>b;
}
int main ()
{
    unsigned long long  word_decrease[100000000],word_increase[100000000],word_last[100000000],word_before[100000000];
    unsigned int Size,counter=0;
    cin>>word_last;
        word_increase=word_decrease=word_last;
        counter++;
        cout<<"Original number was "<<word_last<<endl;
        Size=word_last.size();
        word_before="\0";
        sort(word_increase.begin(),word_increase.end(),increasing);
        sort(word_decrease.begin(),word_decrease.end());
        for(int i=0;i<Size;i++)
        {


          word_before+=(word_increase[i]-word_decrease[i]);
          // cout<<word_increase[i]-word_decrease[i]<<endl;
        }
        cout<<word_decrease<<" - "<<word_increase<<" = "<<word_before<<endl;
cout<<"Chain length "<<counter<<endl;
    return 0;
}
*/

/*
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main ()
{
    string number,number_decrease="123",number_increase="321";
    for(int i=2;i>=0;i--)
    {
        if(number_increase[i]>number_decrease[i])
        {
            number_increase[i-1]--;

        }
        cout<<(number_increase[i]-number_decrease[i]);//-'0')-(number_decrease[i]-'0');
    }

}
*//*
#include<iostream>
using namespace std;
void input(int arr[],int Size)
{
    for(int i=1;i<Size;i++)
    {
        cin>>arr[i];
    }
}

bool increasing (int arr[],int Size)
{
    for(int i=1;i<Size;i++)
    {
        if(arr[i]!=i+1)
        {
            return false;
        }
    }
    return true;
}
bool decreasing (int arr[],int Size)
{
    for(int i=1,j=Size-1;i<Size;i++,j--)
    {
        if(arr[i]!=j)
        {
            return false;
        }
    }
    return true;




}
int main()
{
    int Size,*arr;
    while(cin>>Size)
    {
        if(Size==0)
        {
            break;
        }
        arr=new int[Size];
        while(cin>>arr[0])
        {
        if(arr[0]==0)
        {
            cout<<endl;
            break;
        }
        else if(arr[0]==Size)
        {
        input(arr,Size);
        if(decreasing(arr,Size)==true)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        }
        else if(arr[0]==1)
        {
        input(arr,Size);
        if(increasing(arr,Size)==true)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        }
        else if(arr[0]!=1 && arr[0]!=Size )
        {
            input(arr,Size);
            cout<<"No"<<endl;
        }
    }
    }
    return 0;
}
*/
#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
int main ()
{
            int testcases,Size,a,b;
            pair<double,int>*arr;
            cin>>testcases;
            cout<<endl;
            for(int i=0;i<testcases;i++)
            {
                cin>>Size;
                for(int k=0;k<Size;k++)
                {
                arr=new pair<double,int> [Size];
                cin>>a>>b;
                arr[i].second=k+1;
                arr[i].first=b/a;
            }
            }
            sort(arr,arr+Size);
for(int i=0;i<Size;i++)
{
    cout<<arr[i].second<<" ";
}
cout<<endl;
        return 0;
    }