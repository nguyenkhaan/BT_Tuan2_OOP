#ifndef SOPHUC_H 
#define SOPHUC_H 
#include "library.hpp"
using namespace std; 
class SoPhuc 
{
    private: 
        double real;
        double img; 
    public: 
        void setReal(double real) {
            this->real = real; 
        } 
        void setImg(double img) {
            this->img = img; 
        } 
        double getReal() {
            return this->real; 
        } 
        double getImg() {
            return this->img; 
        } 
        void input(); 
        void output(); 
    }; 
class Calculate 
{
    public: 
        double len(SoPhuc); 
        SoPhuc sum(SoPhuc, SoPhuc); 
        SoPhuc minus(SoPhuc, SoPhuc); 
        SoPhuc product(SoPhuc, SoPhuc); 
        SoPhuc division(SoPhuc, SoPhuc); 
}; 
#endif