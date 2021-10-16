#include <iostream>
using namespace std;

void au();

int main()
{
    au();
}

void au()
{
    double light_years, au;
    cout << "Enter the number of light years: ";
    cin >> light_years;

    au = light_years * 63240;
    cout << light_years << " light years = " << au << " astronomical units." << endl;
}