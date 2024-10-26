class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());

        int n = strs.size();

        string first = strs[0];
        string last = strs[n-1];
        string common = "";

        if(n == 1)
        {
            return strs[0];
        }

        else
        {
            if(first.length() < last.length())
            {
                for(int i=0; i<first.length(); i++)
                {
                    if(first[i] != last[i])
                    {
                        break;
                    }
                    else
                    {
                        if(first[i] == last[i])
                        {
                            common = common + first[i];
                        }
                    }
                }
            }
            else
            {
                for(int i=0; i<last.length(); i++)
                {
                    if(first[i] != last[i])
                    {
                        break;
                    }
                    else
                    {
                        if(first[i] == last[i])
                        {
                            common = common + last[i];
                        }
                    }
                }
            }

            return common;
        }

        return common;
    }
};
