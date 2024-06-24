class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        int rem = 0;
        long num = 0;

        if(original < 0)
        {
            return false;
        }

        while(x != 0)
        {
            rem = x % 10;
            num = num*10 + rem;
            x = x / 10;
        }
        if(original == num)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
