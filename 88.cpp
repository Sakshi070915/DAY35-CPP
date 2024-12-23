#include <iostream>
#include <stdexcept>  // For using standard exceptions

using namespace std;

int main()
{
    try
    {
        int age = 15;
        if (age >= 18)
        {
            cout << "access granted - you are old enough.";
        }
        else
        {
            throw 505;
        }
    }

    catch (int myNum)
    {
        cout << "access denied - you must be at least 18 years old.\n";
        cout << "error number: " << myNum;
    }
    return 0;
}