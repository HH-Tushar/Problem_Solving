// given string s="({})[]"
// we need to validate if the order of ValidParentheses is correct.
// use case (){}[]({[]}),{[[]},(({ etc
#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    stack<char> checkEndingStack;
    int i;
    int length = s.size();

    for (i = 0; i < length; i++)
    {
         if(checkEndingStack.empty()&& (s[i]==']'|| s[i]=='}'||s[i]==')'))
    
        {
            return false;
        }

        if (s[i] == '(')
        {
            if (s[i + 1] == ')')
            {
                i++;
            }
            else
            {
                checkEndingStack.push(')');
            }
        }

        else if (s[i] == '{')
        {
            if (s[i + 1] == '}')
            {
                i++;
            }
            else
            {
                checkEndingStack.push('}');
            }
        }
        else if (s[i] == '[')
        {
            if (s[i + 1] == ']')
            {
                i++;
            }
            else
            {
                checkEndingStack.push(']');

            }
        }
        else if (s[i] == checkEndingStack.top())
        {
            checkEndingStack.pop();
        }

        
        
    }
    

    return checkEndingStack.empty();
}

int main()
{
    cout << boolalpha << isValid("([({})])");
    return 0;
}
