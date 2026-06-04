#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int marks;

    Student()
    {
        cin >> id >> name >> section >> marks;
    }
};

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        Student a[3];
        Student best = a[0];
        for (int j = 1; j < 3; j++)
        {
            if (a[j].marks > best.marks)
            {
                best = a[j];
            }
            else if (a[j].marks == best.marks && a[j].id < best.id)
            {
                best = a[j];
            }
        }

        cout <<best.id<<" "<< best.name <<" "<< best.section <<" "<< best.marks << endl;
    }

    return 0;
}
