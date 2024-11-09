/*Reverse Words in a String*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;

string reverseWords(string s);

int main()
{
    string str;

    cout<<"Enter string : ";
     getline(cin,str);

    cout<<endl<<"Reversed String = "<<reverseWords(str);
}

string reverseWords(string s)
{
    string ans = "";

    stringstream ss(s);

    string temp;

    while(ss >> temp)
    {   //cout<<endl<<"temp = "<<temp;
        reverse(temp.begin() , temp.end());
        //cout<<"   stemp reverse "<<temp;
        ans = ans + temp + " ";
        //cout<<"    ans = "<<ans;
    }
    ans.erase(ans.length()-1);
    reverse(ans.begin(),ans.end());
    cout<<endl<<ans<<")";

    return ans;
}
