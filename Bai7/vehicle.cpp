#include "vehicle.hpp" 
using namespace std; 
void Vehicle::input() 
{
    cout << "Nhap chhu so huu"; getline(cin, this->owner); 
    cout << "Nhap loai xe: "; getline(cin, this->model); 
    cout << "Gia tri xe: "; cin >> this->cost; 
    cout << "Dung tich xi lanh: "; cin >> this->xilanh; 
} 
double Vehicle::fine() 
{
    if (this->xilanh < 100) return 0.01 * this->cost; 
    else if (this->xilanh >= 100 && this->xilanh < 200) return 0.03 * this->cost; 
    else return 0.05 * this->cost; 
} 
void Vehicle::output() 
{
    cout << this->getOwner() << '\t'; 
    cout << this->getModel() << '\t'; 
    cout << this->getCost() <<'\t'; 
    cout << this->getXiLanh() <<'\t'; 
    cout << this->fine() << '\t' << endl; 
}    
Vehicle inputVehicle() 
{
    string name; 
    cout << "Nhap chu so huu: "; getline(cin, name); 
    string model; 
    cout << "Nhap model: "; getline(cin, model); 
    double cost; 
    cout << "Nhap gia tien: "; cin >> cost; 
    int xilanh; 
    cout << "Nhap gia tri xi lanh: "; cin >> xilanh; 
    Vehicle v(name, model, cost, xilanh); 
    return v; 
}
int main() 
{
    Vehicle v1("Pham Hoang Thai", "Cub", 1200, 100); 
    Vehicle v2("Hoang Phuc", "Honda", 1200, 50); 
    Vehicle v3; 
    v3.input(); 
    cout << "Ten chu" << '\t' << "Model" << '\t' << "Cost" << '\t' << "XL" << '\t' << "Phat" << endl;   
    v1.output(); 
    v2.output(); 
    v3.output(); 

}