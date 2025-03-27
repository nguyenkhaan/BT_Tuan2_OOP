#include "date.hpp"
using namespace std;
string days[] = {"Thu Bay", "Chu Nhat", "Thu Hai", "Thu Ba", "Thu Tu", "Thu Nam", "Thu Sau"};
void Date::input() 
{
    cout << "Nhap ngay - thang - nam: "; 
    cin >> this->day >> this->month >> this->year; 
}
void Date::output() 
{
    cout << this->day << " / " << this->month << " / " << this->year << endl; 
}
bool Date::isLeapYear() {
    return (this->year % 4 == 0 && this->year % 100 != 0) || (this->year % 400 == 0);
};

int Date::dayInMonth()
{
    if(month == 2) {
        if(this->isLeapYear()) return 29;
        else return 28;
    } else if (this->month < 8) return 30 + month % 2;
    else return 31 - month % 2;
};

Date Date::getNextDay()
{
    Date nextDate = *this;
    nextDate.day++;
    if(nextDate.day > this->dayInMonth()) {
        nextDate.day = 1;
        nextDate.month++;
    };
    if(nextDate.month > 12) { 
        nextDate.month = 1;
        nextDate.year++;
    };
    return nextDate;
};

Date Date::addDays(int x)
{
    this->day += x;
    while(this->day >= this->dayInMonth()) {
        this->day -= this->dayInMonth();
        this->month++;
        if(this->month > 12) {
            this->month = 1;
            this->year++;
        };
    };
    return *this;
}

string Date::getDayOfWeek() 
{
    if (this->month < 3) {
        this->month += 12;
        this->year -= 1;
    }
    int k = this->year % 100;   
    int j = this->year / 100;   
    int h = (this->day + (13 * (this->month + 1)) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;
    return days[h];
}
signed main() 
{
    Date d; 
    d.input(); 
    if (d.isLeapYear()) cout << "La nam nhuan" << endl; 
    else cout << "Khong la nam nhuan" << endl; 
    cout << "Ngay trong tuan: " << d.dayInMonth() << endl; 
    cout << "Nhap so ngay muon them: ";  
    int x; 
    cin >> x; 
    d.addDays(x);  
    d.output(); 
    cout << "Ngay tiep theo: "; d.getNextDay().output(); 
}