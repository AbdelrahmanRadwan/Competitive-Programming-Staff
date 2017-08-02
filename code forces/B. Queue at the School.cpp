//#include<string>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main ()
//{
//	string word;
//	int size,moves;
//	while(cin>>size>>moves>>word)
//	{
//		for(int j=0;j<moves;j++)
//		{
//		for(int i=0;i<size-1;i++)
//		{
//			if(word[i]=='B' && word[i+1]=='G')
//			{
//				swap(word[i],word[i+1]);
//				i++;
//			}
//		}
//		}
//		cout<<word<<endl;
//	}
//return 0;
//}
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string word;
	int size, moves;
	while (cin >> size >> moves >> word)
	{
		for (int j = 0; j<moves; j++)
		{
			for (int i = 0; i<size - 1; i++)
			{
				if (word[i] == 'B' && word[i + 1] == 'G')
				{
					swap(word[i], word[i + 1]);
					i++;
				}
			}
		}
		cout << word << endl;
	}
	return 0;
}