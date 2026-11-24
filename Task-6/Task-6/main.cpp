#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ln '\n'
#define el endl
using namespace std;


void testCase()
{
    ofstream out("grades.txt");

    if (!out)
    {
        cout << "Failed to create file!\n";
        return;
    }

    int grades[5] = {90, 80, 70, 60, 50};

    for (int i = 0; i < 5; i++)
        out << grades[i] << '\n';

    out.close();

    ifstream in("grades.txt");

    if (!in)
    {
        cout << "Failed to open file!\n";
        return;
    }

    int x;

    cout << "Original Grades:\n";

    while (in >> x)
        cout << x << '\n';

    in.close();

    int deletedGrade;

    cout << "Enter grade to delete: ";
    cin >> deletedGrade;

    in.open("grades.txt");
    ofstream temp("temporary.txt");

    if (!in || !temp)
    {
        cout << "Failed to open files!\n";
        return;
    }

    bool found = false;

    while (in >> x)
    {
        if (x != deletedGrade)
            temp << x << '\n';
        else
            found = true;
    }

    in.close();
    temp.close();

    if (!found)
    {
        cout << "Grade not found!\n";
        remove("temporary.txt");
        return;
    }

    if (remove("grades.txt") == 0)
    {
        if (rename("temporary.txt", "grades.txt") == 0)
            cout << "Deletion successful!\n";
        else
            cout << "Rename failed!\n";
    }
    else
    {
        cout << "File deletion failed!\n";
    }

    ifstream updated("grades.txt");

    if (updated)
    {
        cout << "\nUpdated Grades:\n";

        while (updated >> x)
            cout << x << '\n';

        updated.close();
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    testCase();

    return 0;
}
