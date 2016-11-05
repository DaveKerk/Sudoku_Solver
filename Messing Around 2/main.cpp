#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        for (int x=0; x < 3; x++)
        {
            for(int x =0; x < 4; x++)
                    {
                            cout << setw(10) << "#####" << setw(10);
                    }
            cout << endl;
        }
    return 0;
}