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


struct Person
{
    string name;
    int age;
};

void testCase()
{
    int n;cin>>n;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    ofstream out("Persons.txt");

    for(int i=0;i<n;i++){
        Person p;
        getline(cin,p.name);
        cin>>p.age;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        out<<p.name<<ln<<p.age<<ln;
    }

    out.close();

    
    ifstream in("Persons.txt");

    vector<Person>people;
    Person p;

    while(getline(in,p.name)){
        if(!(in>>p.age))break;
        in.ignore(numeric_limits<streamsize>::max(),'\n');
        people.push_back(p);
    }
    
    in.close();


    if (people.empty())
    {
        cout<<"No valid data found!"<<ln;
        return;
    }

    int mn=people[0].age;
    int mx=people[0].age;

    for(int i=1;i<people.size();i++){
        mn=min(mn,people[i].age);
        mx=max(mx,people[i].age);
    }

    ofstream dis("Result.txt");

    dis<<"Youngest Person:\n";

    for(int i=0;i<people.size();i++){
        if(people[i].age==mn){
            dis<<people[i].name<<' '<<people[i].age<<ln;
        }
    }

    dis<<ln<<"Oldest Person:\n";

    for(int i=0;i<people.size();i++){
        if(people[i].age==mx){
            dis<<people[i].name<<' '<<people[i].age<<ln;
        }
    }

    dis.close();


}

int main()
{
    fastIO();
    int t=1;
    //cin>>t;
    while(t--){testCase();}

    return 0;
} 
