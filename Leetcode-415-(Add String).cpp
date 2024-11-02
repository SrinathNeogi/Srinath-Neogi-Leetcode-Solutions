class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.length() - 1;
        int j = num2.length() - 1;

        string sum;
        int carry = 0;

        while(i>=0 || j>=0 || carry > 0)
        {
            if(i >= 0)
            {
                carry += num1[i--] - '0';
            }
            if(j >= 0)
            {
                carry += num2[j--] - '0';
            }

            sum += carry % 10 + '0';
            carry /= 10;
        }

        reverse(sum.begin(),sum.end());

        return sum;
    }
};
