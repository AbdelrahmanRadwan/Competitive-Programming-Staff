#include <iostream>
#include<queue>
#include<stack>
#include<string>
using namespace std;
int main()
{
	int testcases;
	string word;
	cin >> testcases;
	cin.ignore();
	while (testcases--)
	{
		getline(cin, word);
		stack<char>Stack;
		Stack.push('.');
		for (int i = 0; i < word.size(); i++)
			if ((Stack.top() == '[' && word[i] == ']') || (Stack.top() == '(' && word[i] == ')'))
				Stack.pop();
			else
			Stack.push(word[i]);
			if (Stack.size()==1)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
	}

	return 0;
}