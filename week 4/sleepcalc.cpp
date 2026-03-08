#include<iostream>
using namespace std;

int main()
{
    int holidays;
    cout<<"Enter the number of holidays: ";
    cin >> holidays;

    int workingDays = 365 - holidays;

    int playTime = workingDays * 63 + holidays * 127;

    int norm = 30000;

    int diff;
    diff = norm - playTime;
    int hours = diff / 60;
    int minutes = diff % 60;

    if(playTime <= norm)
    {
        

        cout << "Tom sleeps well" << endl;
        cout << hours << " hours and " << minutes << " minutes less for play";
    }
    else
    {
        

        cout << "Tom will run away" << endl;
        cout << hours << " hours and " << minutes << " minutes more for play";
    }

    return 0;
}