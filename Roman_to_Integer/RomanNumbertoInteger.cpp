#include <iostream>
using namespace std;
#include <map>

class MyClass
{
public:
    int romanToInt(string s)

    {
        string z = s;
        int sum = 0;
        map<char, int> roman;
        roman.insert(make_pair('I', 1));
        roman.insert(make_pair('V', 5));
        roman.insert(make_pair('X', 10));
        roman.insert(make_pair('L', 50));
        roman.insert(make_pair('C', 100));
        roman.insert(make_pair('D', 500));
        roman.insert(make_pair('M', 1000));

        size_t pos = s.find("CD");
        if (pos != std::string::npos)
        {
            // Replace the substring with a new string
            s.replace(pos, 2, "CCCC");
        }
        pos = s.find("IV");
        if (pos != std::string::npos)
        {
            // Replace the substring with a new string
            s.replace(pos, 2, "IIII");
        }
        pos = s.find("IX");
        if (pos != std::string::npos)
        {
            // Replace the substring with a new string
            s.replace(pos, 2, "VIIII");
        }
        pos = s.find("XL");
        if (pos != std::string::npos)
        {
            // Replace the substring with a new string
            s.replace(pos, 2, "XXXX");
        }
        pos = s.find("XC");
        if (pos != std::string::npos)
        {
            // Replace the substring with a new string
            s.replace(pos, 2, "LXXXX");
        }
        pos = s.find("CM");
        if (pos != std::string::npos)
        {
            // Replace the substring with a new string
            s.replace(pos, 2, "DCCCC");
        }

        int length = s.length();
        cout<<s<<endl;

        for (int i = 0; i < length;)
        {
            if (i == length && length % 2 != 0)
            {
                sum = roman[s[i]];
                i++;
            }
            else if (i == length - 1 || roman[s[i]] >= roman[s[i + 1]])
            {
                sum = sum + (roman[s[i]] + roman[s[i + 1]]);
                cout << "inaddition";
                cout << sum << endl;
                i = i + 2;
            }
            else
            {
                sum = sum + (roman[s[i + 1]] - roman[s[i]]);
                i = i + 2;
                cout << "deletion";
                cout << sum << endl;
            }
        }

        return sum;
    }
};

int main()
{
    // Create an instance of MyClass
    MyClass myObject;

    // Access the class members
    int total = myObject.romanToInt("MCMXCIV");
    cout << "total : ";
    cout << total << endl;

    return 0;
}
