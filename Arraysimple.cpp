#include<iostream>
#include<string>
using namespace std;
int main()
{
    int choice ;
    string group[4] = {"Ali","Ahmad","Aslam","Arsalan"};
    cout<< "Enter choice: " ;
    cin >> choice;
    for(int i = 0; i < 4 ; i++){
    {
        if(i== choice -1)
         cout<<group[i];
    }
       
    }

}