#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ln '\n'
#define el endl
using namespace std;

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}


struct Student
{
    char name[20];
    int id;
    float grade;
};

void testCase()
{
    ofstream out("Students.txt",ios::app);
    if(!out.is_open()){cout<<"Failed";return;}
    
    Student s;
    
    while(true){
        cin.getline(s.name,20);
        cin>>s.id>>s.grade;
        cin.ignore();
        
        out << s.name << ", " << s.id << ", "<< s.grade << " $" << '\n';

        char c;
        cout << "Do you want to add another student? (y/n): ";
        cin >> c;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (c == 'n')break;
    }

    ifstream in("Students.txt");
    if(!in.is_open()){cout<<"Failed\n";return;}

    vector<Student>students;
    Student S;

    char delim;

    while(in.getline(S.name,20,',')){
        in>>S.id;
        in>>delim;
        in>>S.grade;
        in>>delim;

        students.push_back(S);
    }

    in.close();

    for (auto x : students){
        cout << x.name << " "<< x.id << " "<< x.grade << ln;
    }
}

int main()
{
    fastIO();
    int t=1;
    //cin>>t;
    while(t--){testCase();}

    return 0;
} 
