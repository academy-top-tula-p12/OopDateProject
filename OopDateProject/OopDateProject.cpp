#include <iostream>

class Date
{
    int day;
    int month;
    int year;
    int monthDays[13]{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
public:

    int& operator[](std::string index)
    {
        if (index == "day")
            return day;
        if (index == "month")
            return month;
        if (index == "year")
            return year;
    }

};

int main()
{
    Date d1;
    d1["day"] = 25;
    d1["month"] = 7;
    d1["year"] = 2021;

    int d = d1["day"];
}
