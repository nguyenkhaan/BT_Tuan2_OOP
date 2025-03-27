#include "phanso.hpp"
using namespace std; 
void PhanSo::input() 
{
    int a,b; 
    cin >> a >> b; 
    if (a < 0 && b < 0) {
        a = abs(a); 
        b = abs(b); 
    } 
    else if (b < 0 && a > 0) {
        a *= -1; 
        b *= -1; 
    }
    this->setTs(a); 
    this->setMs(b); 
} 
void PhanSo::reduce() 
{
    int t = __gcd(abs(this->ts) , abs(this->ms)); 
    this->ts /= t; 
    this->ms /= t; 
}
void PhanSo::output() 
{
    int a = this->getTs(); 
    int b = this->getMs(); 
    if (a % b == 0) cout << a / b << endl; 
    else cout << a << '/' << b << endl;  
}
PhanSo Calculate::sum(PhanSo a, PhanSo b) 
{
    PhanSo c; 
    c.setTs(a.getTs() * b.getMs() + b.getTs() * a.getMs()); 
    c.setMs(a.getMs() * b.getMs()); 
    c.reduce(); 
    return c; 
}
PhanSo Calculate::minus(PhanSo a, PhanSo b) 
{
    PhanSo c; 
    c.setTs(a.getTs() * b.getMs() - b.getTs() * a.getMs()); 
    c.setMs(a.getMs() * b.getMs()); 
    c.reduce(); 
    return c; 
}
PhanSo Calculate::product(PhanSo a, PhanSo b) 
{
    PhanSo c; 
    c.setTs(a.getTs() * b.getTs()); 
    c.setMs(a.getMs() * b.getMs()); 
    c.reduce(); 
    return c; 
}
PhanSo Calculate::division(PhanSo a, PhanSo b) 
{
    PhanSo c; 
    c.setTs(a.getTs() * b.getMs()); 
    c.setMs(a.getMs() * b.getTs()); 
    c.reduce(); 
    return c; 
}
int main() 
{
    Calculate L; 
    PhanSo a; 
    PhanSo b; 
    cout << "Nhap du lieu cho phan so thu nhat: "; a.input(); 
    cout << "Nhap du lieu cho phan so thu hai: "; b.input(); 
    cout << "Ket qua cong, tru, nhan chia: " << endl; 
    L.sum(a,b).output(); 
    L.minus(a,b).output(); 
    L.product(a,b).output(); 
    L.division(a,b).output(); 
}