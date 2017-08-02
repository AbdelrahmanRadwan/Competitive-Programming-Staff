#include<string>
#include<iostream>
using namespace std;
int main()
{
	string word,Word;
	int size,size1;

	while (getline(cin, word))
	{
		Word = "\0";
		size = word.size();
		for (int i = 0; i < size; i++)
		{
			if (isalpha(word[i]))
			{
				Word += word[i];
			}
		}
		size = Word.size();
		size1 = size;
		for (int i = 0; i < size-1; i++)
		{
			for (int j = i+1; j < size; j++)
			{
				if (Word[i] == '.')
				{
					break;
				}
				if (Word[j] == Word[i])
				{
					Word[j] = '.';
					size1--;
				}
			}
		}
		cout << size1 << endl;
	}
	return 0;
}