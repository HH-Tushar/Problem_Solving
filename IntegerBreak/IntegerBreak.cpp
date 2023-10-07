#include <iostream>
using namespace std;


    int integerBreak(int n) {
         int output=1, x=1;
    if(n==3){return 2;}
    else
    {
        for (int i = 2; i < n; i++)
    {
        cout<<output<<" "<< i <<endl;
        int givenValue = n;
        if (x > output)
        {
            output = x;
        }
        x=1;
        while (givenValue != 0)
        {

         if (givenValue - i == 1)
            {
                x *= i + 1;
                givenValue -= i + 1;
            }
            else if(givenValue-i<0){
                x*=givenValue;
                givenValue=0;

            }
            else
            {
                x *= i;
                
            givenValue -= i;
                
            }
        }
    }
   
    }
    
     return output;
        
    }

    


int main()
{

    cout << integerBreak(10);
}