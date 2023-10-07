#include <iostream>
using namespace std;

int integerBreak(int n)
{
    int output, x = 1;
    for (int i = 2; i < n; i++)
    {
        int givenValue = n;
        if (x > output)
        {
            output = x;
        }
        while (givenValue != 0)
        {

            if (givenValue % i != 0)
            {
                x *= i + givenValue % i;
                givenValue -= i + givenValue % i;
            }
            else
            {
                x *= i;
                givenValue -= i;
            }
        }
    }
    return output;
}

int main()
{

    cout << integerBreak(3);
}