#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << fixed <<setprecision(2);
    cout <<"Customer Name:Faisal"<<setw(30)<<"Phone Number: 03219876543"<<endl;
    cout<<"Bill Date : October 27, 2024"<<endl;
    cout << left; 
    cout << setw(15) << "Product Name (15)";
    cout << setw(11) << "Unit Price (11)";
    cout << setw(8)  << "Quantity (8)";
    cout << setw(8)  << "Total (8)" << endl;
    cout << left << setw(15) << "Apples";     
    cout << right;                           
    cout << setw(11) << 1.00;
    cout << setw(8)  << 3;
    cout << setw(8)  << 3.00 << endl;
    cout << "Grand Total: Rs." << right << setw(24) << 11.00 << endl;

}