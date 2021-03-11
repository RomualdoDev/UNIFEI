// Fig. 10.7: Date.cpp
// Date class member- and friend-function definitions.
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;


Date::Date(int month, int day, int year) {
   setDate(month, day, year);
}

// set month, day and year
void Date::setDate(int dd, int mm, int yy) {
   if (mm >= 1 && mm <= 12) {
      month = mm;
   }
   else {
      throw invalid_argument{"Mes deve ser entre 1 e 12"};
   }

   if (yy >= 1900 && yy <= 2100) {
      year = yy;
   }
   else {
      throw invalid_argument{"Ano deve ser >= 1900 e <= 2100"};
   }

   // test for a leap year
   if ((month == 2 && leapYear(year) && dd >= 1 && dd <= 29) ||
      (dd >= 1 && dd <= days[month])) {
      day = dd;
   }
   else {
      throw invalid_argument{
         "Dia invalido!"};
   }
}
// initialize static member; one classwide copy
const array<unsigned int, 13> Date::days{
   0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Date constructor

// overloaded prefix increment operator
Date& Date::operator++() {
   helpIncrement(); // increment date
   return *this; // reference return to create an lvalue
}

// overloaded postfix increment operator; note that the
// dummy integer parameter does not have a parameter name
Date Date::operator++(int) {
   Date temp{*this}; // hold current state of object
   helpIncrement();

   // return unincremented, saved, temporary object
   return temp; // value return; not a reference return
}

// add specified number of days to date
Date& Date::operator+=(unsigned int additionalDays) {
   for (unsigned int i = 0; i < additionalDays; ++i) {
      helpIncrement();
   }

   return *this; // enables cascading
}

// if the year is a leap year, return true; otherwise, return false
bool Date::leapYear(int testYear) {
   return (testYear % 400 == 0 ||
      (testYear % 100 != 0 && testYear % 4 == 0));
}

// determine whether the day is the last day of the month
bool Date::endOfMonth(int testDay) const {
   if (month == 2 && leapYear(year)) {
      return testDay == 29; // last day of Feb. in leap year
   }
   else {
      return testDay == days[month];
   }
}

// function to help increment the date
void Date::helpIncrement() {
   // day is not end of month
   if (!endOfMonth(day)) {
      ++day; // increment day
   }
   else {
      if (month < 12) { // day is end of month and month < 12
         ++month; // increment month
         day = 1; // first day of new month
      }
      else { // last day of year
         ++year; // increment year
         month = 1; // first month of new year
         day = 1; // first day of new month
      }
   }
}

// overloaded output operator
ostream& operator<<(ostream& output, const Date& d) {
   static string monthName[13]{"", "Janeiro", "Fevereiro",
      "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto",
      "Setembro", "Outubro", "Novembro", "Dezembro"};
   output << d.day <<" de "<< monthName[d.month] <<  " de " << d.year;
   return output; // enables cascading
}

istream& operator>>(std::istream&, Date& d){
    int dia, mes, ano;
    cin>>dia;
    if ((d.month == 2 && d.leapYear(d.year) && dia >= 1 && dia <= 29) ||
      (dia >= 1 && dia <= d.days[d.month])) {
      d.day = dia;
    }
    else {
        throw invalid_argument{"Dia invalido"};
    }

    cin>>mes;
    if (mes >= 1 && mes <= 12) {
      d.month = mes;
   }
   else {
      throw invalid_argument{"Mes de ser entre 1 e 12"};
   }
    cin>>ano;
    if (ano >= 1900 && ano <= 2100) {
      d.year = ano;
   }
   else {
      throw invalid_argument{"Ano deve ser >= 1900 e <= 2100"};
   }

   // test for a leap year
}
