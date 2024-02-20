/*write a program to impliment digital clock*/
#include<iostream>
#include<cstdlib>
#include<windows.h>
using namespace std;

class Digital_Clock
{
    int hour, min, sec;

public:
    Digital_Clock()
    {
        hour = 0;
        min = 0;
        sec = 0;
    }

    Digital_Clock(int x, int y, int z)
    {
        hour = x;
        min = y;
        sec = z;
    }

    /*logic prototype*/
    void logic();
    /*end*/

    void display()
    {
        cout << hour << ":" << min << ":" << sec << endl;
    }
};

void AMPM(int i)
{
    if (i >= 12)
        cout << "PM";
    else
        cout << "AM";
}

/*logic begin*/
void Digital_Clock::logic()
{
    int i, j, k;
    double l;
    for (i = hour; i < 24; i++)
    {
        for (j = min; j < 60; j++)
        {
            for (k = sec; k < 60; k++)
            {
                system("cls");
                cout << i << ":" << j << ":" << k << " ";
                AMPM(i);
                for (l = 0; l < 280000000; l++) {}
            }
            k = 0;
        }
        j = 0;
    }
    i = 0;
}

/*logic ends*/

void chekout(int x, int y, int z)
{
    if (x > 24 || y > 60 || z > 60)
    {
        cout<<"Data format incorrect...";
        exit(0);
    }
    else
    {
        cout << "Data format correct...";
    }
}

int main()
{
    int x, y, z;
    system("cls");

    cout << "Enter Time (HH MM SS): ";
    cin >> x >> y >> z;

    chekout(x, y, z);

    Digital_Clock s(x, y, z);
    s.logic();
    s.display();

    return 0;
}