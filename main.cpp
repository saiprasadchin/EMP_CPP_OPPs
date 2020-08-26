#include<iostream>
#include <ctime>

using namespace std;
const int WAGE_PER_HOUR = 20;
const int FULL_DAY_HOUR = 8;
const int EMPLOYEE_PRESENT = 1;

int checkAttendance()
{
    srand(time(0));
    int attendence = (rand() % 2);
    if( attendence == EMPLOYEE_PRESENT ) {
        cout << "\nEmployee is Present";
        return attendence;
    }
    cout << "\nEmployee is Absent";
    return attendence;
     
}
void calculateDailyWage()
{
    if ( checkAttendance() == EMPLOYEE_PRESENT ) {
        cout << "\nEmployee Wage = "<< WAGE_PER_HOUR * FULL_DAY_HOUR << endl;
    } else {
        cout << "\nEmployee Wage = "<< 0 << endl;
    }
}
int main()
{
    cout <<"\nWelcome to Employee Wage Problem\n";
    calculateDailyWage();
    return 0;
}
