#include <iostream>
#include <conio.h>

using namespace std;
int main()
{

    int num = 0;
    bool isPrime = true;
    int counter = 2;
    cout << "Please enter the number";
    cin >> num;
    if (num <= 1)
    {
        cout << "Not a Prime Number" << endl;
    }
    else
    {
        while (counter <num)
        {
            if ( num %counter== 0)
            {
                isPrime = true;
                counter++;
            }
           
            break;
           
        }
        if (isPrime == false)
        {
            cout << "It is Prime Number";
        }
        else
        {
            cout << "It is not a Prime Number";
        }
    }
    
    return 0;
}
