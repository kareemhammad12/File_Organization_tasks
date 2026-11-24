#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ln '\n'
#define el endl
using namespace std;


void testCase()
{
    ofstream out("names.txt");
    if (!out)
    {
        cout << "Failed to open file!";
        return;
    }

    out<<"Hadeer Mahmoud"<<ln<<"Youssef Ali"<<ln<<"Ahmed Mostafa"<<ln<<"Esraa Ebrahim";

    out.close();

    ifstream input("names.txt");

    if (!input)
    {
        cout << "Failed to open file!";
        return;
    }

    string name;
    vector<string> names;

    while (getline(input, name))
    {
        names.push_back(name);
    }

    input.close();

    sort(names.begin(), names.end());

    cout << "Sorted Names:\n";

    for (int i = 0; i < names.size(); i++)
    {
        cout << names[i] << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    testCase();

    return 0;
}
