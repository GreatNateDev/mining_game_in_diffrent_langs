#include <iostream>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
using namespace std;
int exec = 1;
string choice = "null";
long long money = 0;
long long rock = 0;
int multi = 1;
void clear()
{
    std::cout << "\033[2J\033[H";
}
int main()
{
    clear();
    while (exec = 1)
    {
        cout << "Welcome to the mine!\n";
        cout << "you have " << money << " coins" << endl;
        cout << "you have " << rock << " rocks" << endl;
        cout << "your choices are as follows:\nmine\nshop\nsell\nexit:\n";
        cin >> choice;
        if (choice == "mine")
        {
            clear();
            cout << "You mined one rock!\n";
            if (multi == 1)
            {
                ++rock;
            }
            else if (multi == 2)
            {
                rock += 2;
            }
            else if (multi == 3)
            {
                rock += 3;
            }
            else if (multi == 4)
            {
                rock += 4;
            }
            else if (multi == 5)
            {
                rock += 5;
            }

            sleep(1);
            clear();
        }
        else if (choice == "shop")
        {
            clear();
            cout << "Things you van buy are as follows:\nx2:50\nx3:100\nx4:1000\nx5:10000\nWIN:100000\nLeave\n";
            cin >> choice;
            if (choice == "x2")
                if (money >= 50)
                {
                    money -= 50;
                    multi = 2;
                }
                else
                {
                    clear();
                    cout << "You don't have enough money to buy this.\n";
                    sleep(1);
                    clear();
                }
            else if (choice == "x3")
                if (money >= 100)
                {
                    money -= 100;
                    multi = 3;
                }
                else
                {
                    clear();
                    cout << "You don't have enough money to buy this.\n";
                    sleep(1);
                    clear();
                }
            else if (choice == "x4")
                if (money >= 1000)
                {
                    money -= 1000;
                    multi = 4;
                }
                else
                {
                    clear();
                    cout << "You don't have enough money to buy this.\n";
                    sleep(1);
                    clear();
                }
            else if (choice == "x5")
                if (money >= 10000)
                {
                    money -= 10000;
                    multi = 5;
                }
                else
                {
                    clear();
                    cout << "You don't have enough money to buy this.\n";
                    sleep(1);
                    clear();
                }
            else if (choice == "WIN")
            {
                if (money >= 100000)
                {
                    money -= 100000;
                }
                else
                {
                    clear();
                    cout << "You don't have enough money to buy this.\n";
                    sleep(1);
                    clear();
                }
            }
            else if (choice == "Leave")
            {
                clear();
            }
            else
            {
                sleep(1);
                cout << "ERR: BAD CHOICE.\n";
                clear();
            }
        }
        else if (choice == "sell")
        {
            clear();
            cout << "You sold " << rock << " rocks for " << rock << " coins.\n";
            money += rock;
            rock = 0;
            sleep(1);
            clear();
        }
        else if (choice == "exit")
        {
            clear();
            exec = 0;
            return 0;
        }
        else
        {
            clear();
            cout << "ERR: BAD CHOICE.\n";
            sleep(1);
            clear();
        }
    }
}
