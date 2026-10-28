#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define PI 3.14
using namespace std;

void testCase()
{
    ifstream file("Fruits.txt");
    
    if(!file.is_open()){cout<<"Cannot open file\n";return;}
    
    string line;
    
    while(getline(file,line)){cout<<line<<endl;}
    
    file.close();
    
    ofstream out("Fruits.txt",ios::app);
    if(!out.is_open()){cout<<"Cannot open file\n";return;}
    
    out<<"\nFresh Fruits";

    out.close();
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
