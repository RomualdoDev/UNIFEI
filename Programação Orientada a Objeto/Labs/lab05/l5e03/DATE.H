// Fig. 10.6: Date.h
// Date class definition with overloaded increment operators.
#ifndef DATE_H
#define DATE_H

#include <array>
#include <iostream>

class Date {
    friend std::ostream& operator<<(std::ostream&, const Date&);
    friend std::istream& operator>>(std::istream&, Date&);
public:
    Date(int d = 1, int m = 1, int y = 1900); // default constructor
    Date& operator++(); // prefix increment operator
    Date operator++(int); // postfix increment operator
    void setDate(int, int, int);
    Date& operator+=(unsigned int); // add days, modify object
    static bool leapYear(int); // is year a leap year?
    bool endOfMonth(int) const; // is day at the end of month?
private:
   unsigned int month;
   unsigned int day;
   unsigned int year;

   static const std::array<unsigned int, 13> days; // days per month
   void helpIncrement(); // utility function for incrementing date
};

#endif

