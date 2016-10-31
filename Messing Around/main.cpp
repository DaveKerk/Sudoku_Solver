#include <iostream>
using std::cout;

int main()
{
    std::string response;
    cout << "Why hello there.\n";
    cout << "You are experiencing the first code I have ever written in CLion.\n";
    cout << "How are you enjoying it so far?\n";
    cout << "Pretty mediocre right?\n";
    cout << "How about we play a game?\n";
    cout << "So? How about it?\n";
    std::cin >> response;
    if (response == "sure" || "y" || "Y" || "yes")
    {
        cout << "Great!! For me... BUAHAHAHAHAHAHA!!!";
        cout << std::endl;
        cout << "What sort of game do you feel like playing?\nA guessing game?\nA maze game?\n";

    }
    return 0;
}