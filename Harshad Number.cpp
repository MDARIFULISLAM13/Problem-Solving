class Solution
{
public:
    int sumOfTheDigitsOfHarshadNumber(int x)
    {
        int sum = 0;
        int y = x;
        while (y < 0)
        {
            sum += y % 10;
            y /= 10;
        }
        if (sum == 0 || x % sum != 0)
        {
            return -1;
        }
        else
        {
            return sum;
        }
    }
};
