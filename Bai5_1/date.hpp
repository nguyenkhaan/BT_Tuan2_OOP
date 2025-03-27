#ifndef DATE_H 
#define DATE_H 
#include "library.hpp"
using namespace std; 
class Date {
    private:
        int day, month, year;
    public:
        Date() {} 
        void set();
        void get();
        bool isLeapYear();
        int dayInMonth();
        Date getNextDay();
        Date addDays(int x);
        void input(); 
        string getDayOfWeek(); 
        void output(); 
};
#endif  