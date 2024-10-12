#include <bits/stdc++.h>
#include <unistd.h>///FOR SLEEP
#include <windows.h>
using namespace std;
void getclr(int clr)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, clr);
}
string getrn()
{
    int get=rand()%3;
    if(get==0)
    {
        return "R";
    }
    else if(get==1)
    {
        return "P";
    }
    else
    {
        return "S";
    }
}

int main()
{
    while(1)
    {
        getclr(10);
        string a,b;
        cout << "Enter R or P or S : ";
        getclr(7);
        cin >> a;
        getclr(7);
        if(a!="R" && a!="P" && a!="S")
        {
            getclr(4);
            cout << "\n\n------------------INVALID CHARACTER INPUT-------------------\n\n";
            sleep(1);
            system("cls");
            getclr(7);
            continue;
        }
        b=getrn();
        getclr(2);
        cout << "==================================\n";
        getclr(7);
        cout << "Player Choice    : " << a << endl;
        cout << "Computers Choice : " << b << endl;
        getclr(2);
        cout << "==================================\n";
        getclr(7);
        getclr(15);
        if((a=="P" && b=="R") || (a=="R" && b=="S") || (a=="S" && b=="P"))
        {
            cout << "          Player  Won\n\n";
        }
        else if((a=="R" && b=="P") || (a=="S" && b=="R") || (a=="P" && b=="S"))
        {
            cout << "          Computer Won\n\n";
        }
        else
        {
            cout << "              Draw\n\n";
        }
        getclr(7);
        cout << "\n\n-------------------PRESS ENTER TO PLAY AGAIN-------------------\n";
        cin.ignore();
        cin.get();
        system("cls");
    }
}
