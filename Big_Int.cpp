#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;

string sum(string str1, string str2)
{
	string arr;
	string::iterator it;
	int n=0,i;
	if(str1.size()>str2.size())
	{
		/*reverse(str2.begin(),str2.end());
		for(i=str1.size()-1,it=str2.begin(); i>=0, it < str2.end(); it++,i--)
		{
			int m=n/10;
			n=(str1[i]-'0')+(*it-'0')+m;
			char c=(char)n%10+48;
			arr+=c;
		}
		if(n/10>0)
			arr+=(char)n/10+48+(str1[i]-'0');
		arr+=str1.substr(0,i+1);*/
		str1.swap(str2);
	}
	if(str1.size()<str2.size())
	{
		reverse(str1.begin(),str1.end());
		it=str1.begin();
		for( i=str2.size()-1 ; i>=0 ; i--)
		{
			int m=n/10;
			if(it != str1.end())
			{
				n=(str2[i]-'0')+(*it-'0')+m;
				it++;
			}
			else
				n=(str2[i]-'0')+m;
			char c=(char)n%10+48;
			arr+=c;
		}
		if(n/10>0)
			arr+=(char)n/10+48;
	}
	else
	{
		for(int i=str2.size()-1; i>=0; i--)
		{
			int m=n/10;
			n=(str1[i]-'0')+(str2[i]-'0')+m;
			char c=(char)n%10+48;
			arr+=c;
		}
		if(n/10>0)
			arr+=(char)n/10+48;
	}
	reverse(arr.begin(),arr.end());
	return arr;
}

string subtracting(string str1, string str2)
{
	string arr;
	string::iterator it;
	int n=0,i;
	if(str1.size()>str2.size())
	{
		reverse(str2.begin(),str2.end());
		for(i=str1.size()-1,it=str2.begin(); i>=0, it < str2.end(); it++,i--)
		{
			n=(str1[i]-'0')-(*it-'0');
			char c=(char)n%10+48;
			arr+=c;
		}
		arr+=str1.substr(0,i+1);
	}
	else
	{
		reverse(str1.begin(),str1.end());
		for(i=str2.size()-1,it=str1.begin(); i>=0, it < str1.end(); it++,i--)
		{
			n=(str2[i]-'0')-(*it-'0');
			char c=(char)n%10+48;
			arr+=c;
		}
		arr+=str2.substr(0,i+1);
	}
	reverse(arr.begin(),arr.end());
	return arr;
}

string multilplication(string str1, string str2)
{
	string arr,mult,prev_mult;
	int n=0;
	for(int i=str1.size()-1; i>=0; i--)
	{
		mult="";
		for(int j=str2.size()-1; j>=0; j--)
		{
			int m=n/10;
			n=(str1[i]-'0')*(str2[j]-'0')+m;
			char c=(char)n%10+48;
			mult+=c;
		}
		if(n/10>0)
			mult+=(char)n/10+48;
		reverse(mult.begin(),mult.end());
		if(i!=str1.size()-1)
		{
			for(int j=str1.size()-1; j>i; j--)
				mult+='0';
			reverse(mult.begin(),mult.end());
		}
		arr="";
		arr=sum(mult,prev_mult);
		prev_mult="";
		prev_mult+=mult;
	}
	//reverse(arr.begin(),arr.end());
	return arr;
}


int main()
{ 
	string str,arr;
	while(cin>>str>>arr)
	{
		cout<<sum(str,arr)<<endl;
		cout<<subtracting(str,arr)<<endl;
		cout<<multilplication(str,arr)<<endl;
	}
	return 0;
}