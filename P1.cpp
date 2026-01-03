#include <iostream>
using namespace std;
int main()
{
    int subjects ;
    float creditHours[50], gradePoints[50],totalCredit = 0,totalGrades = 0;
    cout << "Enter number of Subjects:";
    cin>> subjects;
    for(int i = 0 ; i < subjects ; i++)
    {cout << "\n Enter credit for subject " << i+1 << ":";
    cin >> creditHours[i] ;
     cout << " \n Enter grade for subjct " << i+1 << ":";
     cin >> gradePoints[i];
     totalCredit += creditHours[i];
     totalGrades += (gradePoints[i]*creditHours[i]);
    }
    float cgpa = totalGrades/ totalCredit;
    cout << "Total Credit: " << totalCredit << endl;
    cout << "Total Grades: " << totalGrades << endl;
    cout << "Your CGPA:" << cgpa << endl ;
}