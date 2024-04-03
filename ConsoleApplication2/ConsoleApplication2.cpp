#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            cout << "Loop has reached at : " << i << endl;
            continue;
            cout << "You can't see this line ! because you are using continue " << endl;
        }
        else
        {
            cout << "You have reached here !" << endl;
        }
    }

   
    return 0;
}