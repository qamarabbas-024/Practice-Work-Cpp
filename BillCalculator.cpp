/*0–100 units → Rs. 15 / unit
101–200 units → Rs. 18 / unit
201–300 units → Rs. 22 / unit
Above 300 units → Rs. 28 / unit*/
#include<iostream>
using namespace std;
int main()
{
   int units,bill;
   float tax = 0 , finalBill;
   cout << "Enter your units: ";
   cin >> units;
   if (units <= 100)
{
    bill = units * 15;
}
else if (units <= 200)
{
    units = units - 100;
    bill = (100*15)+ (units *18);
}
else if(units<= 300)
{
    units = units - 200;
    bill = (100*15)+(100*18)+ (units*22);    
}
else 
{
    units = units - 300 ;
    bill = (100*15)+(100*18)+(100*22)+(units*28);
}
if (bill > 5000)
{
    tax = bill * 0.10 ;
}
  finalBill = bill + tax ;
    cout << " ==== Electricity Bill ==== "<<endl;
    cout << "Total units = " <<units<<endl;
    cout << "Your Bill = " << bill << " Rs"<<endl;
    cout << "Tax applied = "<<tax << " Rs"<<endl;
    cout << "Total Bill = "<<finalBill << " Rs";


}