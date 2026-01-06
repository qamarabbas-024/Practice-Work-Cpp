#include<iostream>
using namespace std;
void SwapNum(int x , int y )
{
    int z = x;
    x = y ;
    y = z ;
}
int main()
{
    int p = 5 ;
    int q = 10 ;
    cout << "Before Swap: " <<p <<" "<<q <<endl;
    SwapNum(p,q);
    
    cout << "Numbers after swap: "<<p <<" "<< q ;

    return 0;

}