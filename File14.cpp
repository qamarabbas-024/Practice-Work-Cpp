/*Input a character and check if it is a vowel or consonant (use switch for vowels).*/
#include<iostream>
using namespace std;
int main()
{
    char c ;
    cout << "Enter a alpthabet: ";
    cin >> c;
    switch(c)
    {
        case 'a':
        case 'A':
        cout << "Your entered a vowal";
        break;
        case 'e':
        case 'E':
        cout << "Your entered a vowal";
        break;
        case 'i':
        case 'I':
        cout << "Your entered a vowal";
        break;
        case 'o':
        case 'O':
        cout << "Your entered a vowal";
        break;
        case 'u':
        case 'U':
        cout << "Your entered a vowal";
        break;
        default:
        cout << "Your entered a consonant";
    }

}