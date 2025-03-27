#include "library.hpp" 
#ifndef PHAN_SO_H
#define PHAN_SO_H 
class PhanSo 
{
    private: 
        int ts; 
        int ms; 
    public: 
        void setMs(int ms) {
            this->ms = ms; 
        }
        void setTs(int ts) {
            this->ts = ts; 
        }
        int getTs() {
            return this->ts; 
        }
        int getMs() {
            return this->ms; 
        }
        void input(); 
        void output(); 
        void reduce(); 
}; 
class Calculate 
{
    public: 
        PhanSo sum(PhanSo, PhanSo); 
        PhanSo minus(PhanSo, PhanSo); 
        PhanSo product(PhanSo, PhanSo); 
        PhanSo division(PhanSo, PhanSo); 
}; 
#endif