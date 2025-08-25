class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int sum = 0;
        int start = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == ' ' && start == 1)
            {
                break;
            }
            else if (s[i] != ' ')
            {
                start = 1;
                sum++;
            }
        }
        return sum;
    }
};