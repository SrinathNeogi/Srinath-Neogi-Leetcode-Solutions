#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>

using namespace std;

int main()
{
    string s;

    getline(cin,s);

    //reverse(s.begin(),s.end());

    stringstream ss(s);

    string temp;
    
    vector<string> v; 
    
    while(ss >> temp)
    {
        v.push_back(temp);
    }

    //int len = v[0].size(); -----------> if reverse function  is used.
    
    int len = v[v.size() - 1].size();

    cout<<len;
}
