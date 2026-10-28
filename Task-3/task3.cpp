#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define PI 3.14
using namespace std;

void fastIO(){ios::sync_with_stdio(false);cin.tie(nullptr);}

void testCase()
{
    ofstream file("welcome.txt");

    if(!file.is_open()){cout<<"failed\n";return;}

    file<<"Hello Everybody";
    file.close();

    ifstream in("welcome.txt");

    string text;
    getline(in,text);
    
    in.close();

    int pos=text.find("body");

    if(pos!=string::npos){text.replace(pos,4,"one");}

    ofstream out("welcome.txt");
    out<<text;
    out.close();

    cout<<text;
}

int main()
{
    fastIO();
    int t=1;
    //cin>>t;

    while(t--){testCase();}

    return 0;
}
