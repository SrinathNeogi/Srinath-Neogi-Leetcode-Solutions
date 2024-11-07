class Solution {
public:
    string largestOddNumber(string num) {
        string ans;

        int len = num.length();

        int last = num.find_last_not_of('0');

        string num1 = num.substr(0,last+1);
        
        //cout<<num1;
        
        for(int i=num1.length()-1; i>=0; i--)
        {
            int x = num1[i];
            cout<<endl<<num1[i]<<"   ";
            if(x % 2 != 0)
            {
                ans = num1.substr(0,i+1);
                cout<<ans;
                return ans;
            }
        }
        return ans;
    }
};
