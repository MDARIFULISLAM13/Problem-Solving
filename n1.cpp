class Solution
{
public:
    int maxBottlesDrunk(int numBottles, int numExchange)
    {
        int sum = 0;
        int x = numBottles;
        int y = numExchange;
        int count = 0;
        while (x != 0)
        {
            x -= 1;
            sum += 1;
            count += 1;
            if (count == y)
            {

                sum += 1;
                count = 0;
            }
        }
        return sum;
    }
}
