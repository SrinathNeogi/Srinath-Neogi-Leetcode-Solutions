class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> v(150,INT_MIN);
        vector<int> v1(150,INT_MIN);

        if(s.length() != t.length())
        {
            return false;
        }

        else
        {
            for(int i=0; i<s.length(); i++)
            {
                int s_ascii = (int)s[i];
                int t_ascii = (int)t[i];

                if(v[s_ascii] == INT_MIN)
                {
                    v[s_ascii] = s_ascii - t_ascii;
                }
                else
                {
                    if(v[s_ascii] != s_ascii - t_ascii)
                    {
                        return false;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
            for(int i=0; i<s.length(); i++)
            {
                int s_ascii = (int)s[i];
                int t_ascii = (int)t[i];

                if(v1[t_ascii] == INT_MIN)
                {
                    v1[t_ascii] = t_ascii - s_ascii;
                }
                else
                {
                    if(v1[t_ascii] != t_ascii - s_ascii)
                    {
                        return false;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
        }
        return true;
    }
};
