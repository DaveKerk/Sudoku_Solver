#include <iostream>
#include <iomanip>


int main()
{
    int ghost;
    ghost=0;
    for(ghost >= 0; ghost <4;)
    {
        ghost++;
        std::cout<<std::setfill('#')<<std::setw(5);
        std::cout<<"Hello World!";
    }
    return 0;
}