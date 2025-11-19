#include <iostream>
using namespace std;

class TimeConverter
{
    int h, m, s;

public:
    void setTime(int hours, int minutes, int seconds)
    {
        h = hours;
        m = minutes;
        s = seconds;
    }

    void getTotalSeconds()
    {
        int total = h * 3600 + m * 60 + s;
        cout << "Total seconds: " << total << endl;
    }
};

int main()
{
    int h, m, s;

    cout << "Enter hours: ";
    cin >> h;

    cout << "Enter minutes: ";
    cin >> m;

    cout << "Enter seconds: ";
    cin >> s;

    TimeConverter t;
    t.setTime(h, m, s);

    t.getTotalSeconds();

    return 0;
}
