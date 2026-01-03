
#include <iostream>
#include <cstdlib> 
using namespace std;

void clearScreen()
 {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void waitForKey() {
    cout << "\nPress Enter to return to menu...";
    cin.ignore();
    cin.get();
}

void question1() {
    clearScreen();
    cout << " Question 1\n";
    cout << "#include<iostream>\nusing namespace std ;\nint main()\n{\n"
         << "    int A = 10;\n    int B = 20;\n    int C = 30;\n"
         << "    cout << \"Value of A = \" << A << \"\\n\";\n"
         << "    cout << \"Value of B = \" << B << \"\\n\";\n"
         << "    cout << \"Value of C = \" << C;\n}\n";
    waitForKey();
}

void question2() {
    clearScreen();
    cout << " Question 2 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    cout << \"C language is a powerful programing language.\";\n}\n";
    waitForKey();
}

void question3() {
    clearScreen();
    cout << " Question 3 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    int a = 10, b = 20, temp;\n"
         << "    cout << \"Values before Interchanging: a = \" << a << \" b = \" << b;\n"
         << "    temp = a;\n    a = b;\n    b = temp;\n"
         << "    cout << \"\\nValues after Interchanging: a = \" << a << \" b = \" << b;\n}\n";
    waitForKey();
}

void question4() {
    clearScreen();
    cout << " Question 4 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    int years = 10, months;\n"
         << "    months = years*12;\n"
         << "    cout << \"Years: \" << years << \"\\nMonths: \" << months;\n}\n";
    waitForKey();
}

void question5() {
    clearScreen();
    cout << " Question 5 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    int num1, num2, sum, product;\n"
         << "    cout << \"Enter First Number:\"; cin >> num1;\n"
         << "    cout << \"Enter Second Number:\"; cin >> num2;\n"
         << "    sum = num1+num2;\n    product = num1*num2;\n"
         << "    cout << \"Sum = \" << sum << \"\\nProduct = \" << product;\n}\n";
    waitForKey();
}

void question6() {
    clearScreen();
    cout << " Question 6 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    int ageYears, ageMonths;\n"
         << "    cout << \"Enter Your age in Years:\"; cin >> ageYears;\n"
         << "    ageMonths = ageYears*12;\n"
         << "    cout << \"Your age in Months: \" << ageMonths;\n}\n";
    waitForKey();
}

void question7() {
    clearScreen();
    cout << " Question 7 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    int total, marks1,marks2,marks3;\n"
         << "    char rollNo[20];\n"
         << "    float average;\n"
         << "    cout << \"Enter Your Rollno:\"; cin >> rollNo;\n"
         << "    cout << \"Enter your PF Marks:\"; cin >> marks1;\n"
         << "    cout << \"Enter your IC Marks:\"; cin >> marks2;\n"
         << "    cout << \"Enter your CG Marks:\"; cin >> marks3;\n"
         << "    total = marks1+marks2+marks3;\n"
         << "    average = total/3.0;\n"
         << "    cout << \"Your roll no is: \" << rollNo << \"\\nTotal: \" << total << \"\\nAverage: \" << average;\n}\n";
    waitForKey();
}

void question8() {
    clearScreen();
    cout << " Question 8 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    float fahren, cel;\n"
         << "    cout << \"Enter Temperature in Fahrenheit:\"; cin >> fahren;\n"
         << "    cel = 5.0/9.0*(fahren-32);\n"
         << "    cout << \"Your Temperature in Celsius:\" << cel;\n}\n";
    waitForKey();
}

void question9() {
    clearScreen();
    cout << " Question 9 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    int num1,num2,num3,num4,max;\n"
         << "    cout << \"Enter Four Numbers:\"; cin >> num1 >> num2 >> num3 >> num4;\n"
         << "    max=num1;\n"
         << "    if(num2>max) max=num2;\n    if(num3>max) max=num3;\n    if(num4>max) max=num4;\n"
         << "    cout << \"Maximum number is: \" << max;\n}\n";
    waitForKey();
}

void question10() {
    clearScreen();
    cout << " Question 10 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    float miles, km;\n"
         << "    miles = 2.5;\n"
         << "    km = miles*1.609;\n"
         << "    cout << \"Kilometers = \" << km;\n}\n";
    waitForKey();
}

void question11() {
    clearScreen();
    cout << " Question 11 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    int a = 5, b = 10;\n"
         << "    float average;\n"
         << "    average = (a + b)/2;\n"
         << "    cout << \"Average = \" << average;\n}\n";
    waitForKey();
}

void question12() {
    clearScreen();
    cout << " Question 12 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    float H, R, V;\n    const float PI = 3.14;\n"
         << "    cout << \"Enter Value of Radius:\"; cin >> R;\n"
         << "    cout << \"Enter Value of Height:\"; cin >> H;\n"
         << "    V = PI * R * R * H;\n"
         << "    cout << \"Volume = \" << V;\n}\n";
    waitForKey();
}

void question13() {
    clearScreen();
    cout << " Question 13 \n";
    cout << "#include<iostream>\n#define PI 3.14\nusing namespace std;\nint main()\n{\n"
         << "    float R, A;\n    cout << \"Enter value of Radius:\"; cin >> R;\n"
         << "    A = PI * R * R;\n    cout << \"Area = \" << A;\n}\n";
    waitForKey();
}

void question14() {
    clearScreen();
    cout << " Question 14 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    float inches, mm;\n    cout << \"Enter Value in mm:\"; cin >> mm;\n"
         << "    inches = mm/25.4;\n    cout << mm << \" mm in inches = \" << inches;\n}\n";
    waitForKey();
}

void question15() {
    clearScreen();
    cout << " Question 15 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    int a = 10, b = 20, temp;\n"
         << "    temp = a; a = b; b = temp;\n"
         << "    cout << \"Values after Interchanging: a = \" << a << \" b = \" << b;\n}\n";
    waitForKey();
} 
void question16() {
    clearScreen();
    cout << " Question 16 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    int a, b, c, product;\n    a = b = c = 3;\n"
         << "    product = a * b * c;\n    cout << \"Product is \" << product;\n}\n";
    waitForKey();
}

void question17() {
    clearScreen();
    cout << " Question 17 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    float num = 15.58971;\n    int integral;\n    float fractional;\n"
         << "    integral = (int)num;\n    fractional = num - integral;\n"
         << "    cout << \"Original number \" << num << endl;\n"
         << "    cout << \"Integral Value \" << integral << endl;\n"
         << "    cout << \"Fractional Value \" << fractional;\n}\n";
    waitForKey();
}

void question18() {
    clearScreen();
    cout << " Question 18 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    float a = 2.2, vi = 5.0, t = 6.5, S;\n"
         << "    S = vi*t + 0.5*a*t*t;\n"
         << "    cout << \"Value of S = \" << S;\n}\n";
    waitForKey();
}

void question19() {
    clearScreen();
    cout << " Question 19 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    int ageYear = 19, ageMonths, ageDays;\n"
         << "    ageMonths = ageYear*12;\n    ageDays = ageYear*365;\n"
         << "    cout << \"Your age in Months = \" << ageMonths << endl;\n"
         << "    cout << \"Your age in Days = \" << ageDays;\n}\n";
    waitForKey();
}

void question20() {
    clearScreen();
    cout << " Question 20 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    cout << \"C:\\\\Windows> \\n 'P' 'A' 'K'\\n\" << \"\\\"Pakistan\";\n}\n";
    waitForKey();
}

void question21() {
    clearScreen();
    cout << " Question 21 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    cout << \"XXXXX\\nXXXX\\nXXX\\nXX\\nX\";\n}\n";
    waitForKey();
}

void question22() {
    clearScreen();
    cout << " Question 22 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    int age;\n    float height;\n    char gender;\n    string name;\n"
         << "    cout << \"Enter Your Name:\"; cin >> name;\n"
         << "    cout << \"Enter Your Age:\"; cin >> age;\n"
         << "    cout << \"Enter Your Height:\"; cin >> height;\n"
         << "    cout << \"Enter Your Gender:\"; cin >> gender;\n"
         << "    cout << \"Your name is: \" << name << endl << \"Your age is: \" << age << endl\n"
         << "         << \"Your gender is: \" << gender << endl << \"Your height is: \" << height;\n}\n";
    waitForKey();
}

void question23() {
    clearScreen();
    cout << " Question 23 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    float pi = 3.14, r, area, circumference;\n"
         << "    cout << \"Enter radius:\"; cin >> r;\n"
         << "    area = pi*r*r;\n    circumference = 2*pi*r;\n"
         << "    cout << \"Area = \" << area << endl << \"Circumference = \" << circumference;\n}\n";
    waitForKey();
}

void question24() {
    clearScreen();
    cout << " Question 24 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    int total, marks1,marks2,marks3,marks4,marks5;\n    float average;\n"
         << "    cout << \"Enter your PF Marks:\"; cin >> marks1;\n"
         << "    cout << \"Enter your ICT Marks:\"; cin >> marks2;\n"
         << "    cout << \"Enter your CAG Marks:\"; cin >> marks3;\n"
         << "    cout << \"Enter your FE Marks:\"; cin >> marks4;\n"
         << "    cout << \"Enter your AP Marks:\"; cin >> marks5;\n"
         << "    total = marks1+marks2+marks3+marks4+marks5;\n"
         << "    average = total/5.0;\n"
         << "    cout << \"Total Marks: \" << total << \"\\nAverage: \" << average;\n}\n";
    waitForKey();
}

void question25() {
    clearScreen();
    cout << " Question 25 \n";
    cout << "#include<iostream>\n#include<cmath>\nusing namespace std;\nint main()\n{\n"
         << "    float a, b, c, s, area;\n    cout << \"Enter values of 3 sides(a,b,c):\";\n"
         << "    cin >> a >> b >> c;\n    s = (a+b+c)/2.0;\n"
         << "    area = sqrt(s*(s-a)*(s-b)*(s-c));\n"
         << "    cout << \"Area of triangle = \" << area;\n}\n";
    waitForKey();
}

void question26() {
    clearScreen();
    cout << " Question 26 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    int dollar, rupees;\n    rupees = 12000;\n    dollar = rupees/60;\n"
         << "    cout << rupees << \" Rs in dollars = \" << dollar << \"$\";\n}\n";
    waitForKey();
}

void question27() {
    clearScreen();
    cout << " Question 27 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    int hours, minutes, seconds, total_seconds;\n"
         << "    cout << \"Enter hours: \"; cin >> hours;\n"
         << "    cout << \"Enter minutes: \"; cin >> minutes;\n"
         << "    cout << \"Enter seconds: \"; cin >> seconds;\n"
         << "    total_seconds = (hours*3600) + (minutes*60) + seconds;\n"
         << "    cout << \"Total seconds: \" << total_seconds;\n}\n";
    waitForKey();
}

void question28() {
    clearScreen();
    cout << " Question 28 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    float a, b, c, disc;\n"
         << "    cout << \"Enter value of a: \"; cin >> a;\n"
         << "    cout << \"Enter value of b: \"; cin >> b;\n"
         << "    cout << \"Enter value of c: \"; cin >> c;\n"
         << "    disc = (b*b) - 4*a*c;\n"
         << "    cout << \"The value of discriminant = \" << disc;\n}\n";
    waitForKey();
}

void question29() {
    clearScreen();
    cout << " Question 29 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main()\n{\n"
         << "    int n;\n    cout << \"Enter value of n:\"; cin >> n;\n"
         << "    if(n > 100)\n        cout << \"The number is greater than 100\";\n}\n";
    waitForKey();
}

void question30() {
    clearScreen();
    cout << " Question 30 \n";
    cout << "#include<iostream>\nusing namespace std;\nint main() {\n"
         << "    int number;\n    cout << \"Enter an integer: \"; cin >> number;\n"
         << "    if(number % 2 == 0) {\n        cout << number << \" is even.\" << endl;\n"
         << "    }\n    if(number % 2 != 0) {\n        cout << number << \" is odd.\";\n    }\n"
         << "    return 0;\n}\n";
    waitForKey();
}

int main() {
    int choice;
    do {
        clearScreen();
        cout << "====================================" << endl;
        cout << "    PROGRAMMING MENU  25014119-024  " << endl;
        cout << "====================================" << endl;
        for (int i = 1; i <= 30; i++) cout << i << ". Question " << i << endl;
        cout << "0. Exit" << endl;
        cout << "==============================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); 

        switch(choice) {
            case 1: question1(); break;
            case 2: question2(); break;
            case 3: question3(); break;
            case 4: question4(); break;
            case 5: question5(); break;
            case 6: question6(); break;
            case 7: question7(); break;
            case 8: question8(); break;
            case 9: question9(); break;
            case 10: question10(); break;
            case 11: question11(); break;
            case 12: question12(); break;
            case 13: question13(); break;
            case 14: question14(); break;
            case 15: question15(); break;
            case 16: question16(); break;
            case 17: question17(); break;
            case 18: question18(); break;
            case 19: question19(); break;
            case 20: question20(); break;
            case 21: question21(); break;
            case 22: question22(); break;
            case 23: question23(); break;
            case 24: question24(); break;
            case 25: question25(); break;
            case 26: question26(); break;
            case 27: question27(); break;
            case 28: question28(); break;
            case 29: question29(); break;
            case 30: question30(); break;

            case 0: cout << "Exiting program..."; break;
            default:
                cout << "Invalid choice! Press Enter to try again...";
                cin.get();
        }
    } while(choice != 0);

    return 0;
}
