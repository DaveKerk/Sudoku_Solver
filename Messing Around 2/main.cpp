#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    for (int x=0; x < 4; x++)
    {
        for (int x = 0; x++; (x==1||x==3||x==5||x==7))
        {
            for (int x = 0; x < 4; x++)
            {
                cout << setw(10) << "#####" << setw(10);
            }
            cout << endl;
        }
        for (int x=0; x < 3; x++)
        {
            for(int x=0; x++; (x==2||x==4||x==6||x==8))
            {
                cout << setw(15) << "#####" <<setw(15);

            }
            cout << endl;

        }
    }
    return 0;
}