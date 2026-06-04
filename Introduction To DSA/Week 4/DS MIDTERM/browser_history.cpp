#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> l;
    string adress;

    while (cin >> adress && adress != "end")
    {
        l.push_back(adress);
    }

    int q;
    cin >> q;

    auto current = l.begin();

    while (q--)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string address;
            cin >> address;

            auto it = find(l.begin(), l.end(), address);

            if (it != l.end())
            {
                current = it;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            auto temp = current;
            temp++;

            if (temp != l.end())
            {
                current++;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (current != l.begin())
            {
                current--;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}