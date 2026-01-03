/*Write a program that asks the user to enter a product 
price and discount percentage, then displays the price after discount.*/
#include<iostream>
using namespace std;
int main()
{
    float price , discount, finalPrice;
    cout << "Enter price of the product: ";
    cin >> price;
    cout <<"Enter Discount: ";
    cin >> discount;
    finalPrice = price - (price*discount/100);
    cout << "Final Price = " <<finalPrice;
}