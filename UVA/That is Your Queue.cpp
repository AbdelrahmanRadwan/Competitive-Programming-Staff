#include<queue>
#include<iostream>
#include<list>
#include<deque>
#include<algorithm>
using namespace std;

int main()
{
	char TempChar;
	list<long long >hospital;
	long long people, commands,counter=1,TempLong;
	while (cin >> people >> commands)
	{
		if (people == 0 && commands == 0)break;
		hospital.clear();
		for (long long i = 1; i <= min(people, (long long)1000); i++)hospital.push_back(i);
		
		cout << "Case " << counter++ << ":" << endl;
		
		for (int i = 0; i < commands; i++)
		{
			cin >> TempChar;
			if (TempChar == 'N')
			{
				cout << hospital.front() << endl;
				hospital.push_back(hospital.front());
				hospital.pop_front();
			}
			else if (TempChar=='E')
			{
				cin >> TempLong;
				//if(TempLong<=min(people,(long long)1000))
					hospital.remove(TempLong);
				hospital.push_front(TempLong);
			}
		}

	}
	return 0;
}
