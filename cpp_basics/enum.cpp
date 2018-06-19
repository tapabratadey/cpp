#include <iostream>

using namespace std;

enum day_of_week {M, TU, W, TH, F, SA, SN};

string get_day(day_of_week);

int main()
{
    day_of_week day = W;

    std::cout << get_day(day_of_week(1)) << std::endl;

    return (0);
}

string get_day(day_of_week day)
{
    switch (day)
    {
        case M:
            return "Monday";
        case TU:
            return "Tuesday";
        case W:
            return "Wednesday";
        case TH:
            return "Thursday";
        case F:
            return "Friday";
        case SA:
            return "Saturday";
        case SN:
            return "Sunday";
        default:
            return "You entered wrong day.";
    }
}