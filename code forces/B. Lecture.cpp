#include<iostream>
#include<string>
using namespace std;
int main()
{
    string lecture[3000][2];
    string *note;
    int n, m;
    cin >> n >> m;
    note = new string[n];
    for (int i = 0; i < m; i++)
    {
        cin >> lecture[i][0] >> lecture[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> note[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (note[i] == lecture[j][0])
            {
                if (lecture[j][0].size() <= lecture[j][1].size())
                {
                    cout << lecture[j][0];
                }
                else
                {
                    cout << lecture[j][1];
                }

            }
        }
        if (i != n - 1)
            cout << " ";
    }
    cout << endl;



    return 0;
}