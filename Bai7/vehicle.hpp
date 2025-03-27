#ifndef DATE_H 
#define DATE_H 
#pragma once 
#include "library.hpp" 
using namespace std; 
class Vehicle 
{
    private: 
        string owner; 
        string model; 
        double cost; 
        int xilanh; 
    public: 
        Vehicle() {} 
        Vehicle(string own, string model, double cost, int xilanh) 
        {
            this->owner = own; 
            this->model = model; 
            this->cost = cost; 
            this->xilanh = xilanh; 
        } 
        double fine(); 
        string getOwner() {
            return this->owner; 
        } 
        string getModel() {
            return this->model; 
        }  
        double getCost() {
            return this->cost; 
        } 
        int getXiLanh() {
            return this->xilanh; 
        } 
        void input(); 
        void output(); 
}; 
#endif