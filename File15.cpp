/*Input a number for choice:
 1 → Check balance
 2 → Withdraw amount
 3 → Deposit amount
Use switch to handle the menu.*/
#include<iostream>
using namespace std ;
int main()
{
    int choice ;
    float balance = 10000 ;
    float amount ;
    cout << " === Menu === " << endl ;
    cout << "1. Check balance " <<endl;
    cout << "2. Withdraw amount "<<endl;
    cout << "3. Deposit amount "<<endl ;
    cout << "Enter Your choice: ";
    cin >> choice ;
    switch(choice)
    {
        case 1 :
        cout << "Your Balance = " << balance <<"$";
        break;
        case 2: 
        cout << "Enter Amount to withdraw: ";
            cin >> amount ;
        if(amount<= balance)
         {
        balance -= amount ;
        cout << "Withdraw Successfull. New balance = " << balance << "$";
        }
        else
        cout<< "Invalid Balance";
        break;
        case 3 :
        cout << "Enter amount to deposit:";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited Sucessfully. New balance = " << balance << "$";
        break;
        default:
        cout << "Invalid Choice: ";

}

}