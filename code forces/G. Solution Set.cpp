#include<iostream>
using namespace std;
int main()
{
    long long int d;
    bool find = false;
    while (cin >>d)
    {
        find = false;
        for (int i = 0; i*i <= d; i++)
        {
            for (int ii = 0; ii*ii <= d; ii++)
            {
                for (int iii = 0; iii*iii <= d; iii++)
                {
                    if (i*i + ii*ii + iii*iii == d)
                    {
                        find = true;
                        cout << i << " " << ii << " " << iii << endl;
                    }
                }
            }
        }
        if (find == false)
        {
            cout << -1 << endl;
        }
    }


    return 0;
}