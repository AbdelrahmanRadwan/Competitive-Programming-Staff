#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    string word;
    int size, counter1, counter2;;
    while (cin >> word)
    {
        counter1 = 0;
        counter2 = 0;
        size = word.size();
        for (int i = 1; i < size ; i++)
        {
            
        if (word[0] >= 'a' && word[0] <= 'z')
            {
                if (word[i] >= 'A' && word[i] <= 'Z')
                {
                    counter1++;
                }
            }
            else 
            {
                if (word[i] >= 'A' && word[i] <= 'Z')
                {
                    counter2++;
                }
            }

        }
        if (size == 1 && word[0]>='a' && word[0]<='z')
        {
         word[0] = toupper(word[0]);
        }
        else if (size == 1 && word[0] >= 'A' && word[0] <= 'Z')
        {
         word[0] = tolower(word[0]);
        }
        else if (counter1 == size - 1)
        {
            word[0] = toupper(word[0]);
            for (int i = 1; i < size; i++)
            {
                word[i] = tolower(word[i]);
            }

        }
        else if (counter2 == size-1)
        {
            for (int i = 0; i < size; i++)
            {
                word[i] = tolower(word[i]);
            }
        }
         
        cout << word<<endl;
    }
    return 0;
}