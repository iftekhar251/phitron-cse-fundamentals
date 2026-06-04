#include <bits/stdc++.h>
using namespace std;
int main()
{
   
        string s;
        getline(cin,s);

        string word;
        stringstream ss(s);

        while (ss >> word)
        {
            if (word == "Jessica")
            {
                cout << "YES";
                return 0;
            }
        }

        cout << "NO";
        return 0;
    }