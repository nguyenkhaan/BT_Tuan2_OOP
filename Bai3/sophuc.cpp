#include "sophuc.hpp" 
void SoPhuc::input() 
{
    double a,b; 
    cin >> a >> b; 
    this->setReal(a); 
    this->setImg(b); 
} 
void SoPhuc::output() 
{
    char ch; 
    if (this->getImg() >= 0) ch = '+'; 
    else ch = '-'; 
    cout << this->getReal() << ch << abs(this->getReal()) << endl; 
} 
double Calculate::len(SoPhuc a) 
{
    return sqrtl(a.getReal() * a.getReal() + a.getImg() * a.getImg());  
} 
SoPhuc Calculate::sum(SoPhuc a, SoPhuc b) 
{
    SoPhuc c; 
    double m1 = a.getReal() + b.getReal(); 
    double m2 = a.getImg() + b.getImg(); 
    c.setReal(m1); 
    c.setImg(m2); 
    return c; 
}
SoPhuc Calculate::minus(SoPhuc a, SoPhuc b) 
{
    SoPhuc c; 
    double m1 = a.getReal() - b.getReal(); 
    double m2 = a.getImg() - b.getImg(); 
    c.setReal(m1); 
    c.setImg(m2); 
    return c; 
}
SoPhuc Calculate::product(SoPhuc a, SoPhuc b) 
{
    SoPhuc c; 
    double m1 = a.getReal() * b.getReal() - a.getImg() * b.getImg(); 
    double m2 = a.getReal() * b.getImg() + b.getReal() * a.getImg(); 
    c.setReal(m1); 
    c.setImg(m2); 
    return c; 
}
SoPhuc Calculate::division(SoPhuc a, SoPhuc b) 
{
    SoPhuc c; 
    double m1 = (a.getReal() * b.getReal() + a.getImg() * b.getImg()) / 1.0*(b.getImg() * b.getImg() + b.getReal() * b.getReal()); 
    double m2 = (b.getReal() * a.getImg() - a.getReal() * b.getImg()) / 1.0*(b.getImg() * b.getImg() + b.getReal() * b.getReal()); 
    c.setReal(m1); 
    c.setImg(m2); 
    return c; 
}
int main() 
{
    SoPhuc a; 
    SoPhuc b; 
    Calculate L; 
    a.input(); 
    b.input(); 
    cout << "Ket qua thuc hien tung phep tinh: "; 
    L.sum(a,b); 
    L.minus(a,b); 
    L.product(a,b); 
    L.division(a,b); 
}