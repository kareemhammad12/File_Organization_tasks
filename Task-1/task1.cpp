#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define PI 3.14
using namespace std;

void testCase()
{
    ofstream file("Student.txt");
    
    if(!file.is_open()){cout<<"Cannot open file\n";return;}
    
    string fname;
    int id,grade;

    cout<<"Enter name: "<<flush;
    getline(cin,fname);

    cout<<"Enter id: "<<flush;
    cin>>id;

    cout<<"Enter grade: "<<flush;
    cin>>grade;

    file<<"Name: "<<fname<<endl;
    file<<"ID: "<<id<<endl;
    file<<"Grade: "<<grade<<endl;

    file.close();

    file.close();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    //cin>>t;

    while(t--){
        testCase();
    }

    return 0;
}
