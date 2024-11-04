class Solution {
public:
    bool isPalindrome(string s) {
        // First remove unnecessary spaces and special characters.

        int len = s.length();

        string str;

        for(int i=0; i<len; i++)
        {

            if(isalnum(s[i]))
            {
                str += tolower(s[i]);
                //cout<<str<<endl;
            }
        }

        //cout<<str;

        int len_str = str.length();
        
        int i = 0, j = len_str - 1;

        while(i <= j)
        {
            //cout<<endl<<str[i]<<"    "<<str[j];
            if(str[i] != str[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
