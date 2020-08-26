#include<iostream>
#include <ctime>

using namespace std;
const int WAGE_PER_HOUR = 20;
const int FULL_DAY_HOUR = 8;
const int PART_TIME_HOUR = 4;

int checkAttendance()
{
    srand(time(0));
    int attendence = ( rand() % 3 );
    return attendence;
}
void calculateDailyWage()
{
    switch( checkAttendance() ) {
        case 1:
            cout << "Employee is Full Time\n";
            cout << "Wage = " << WAGE_PER_HOUR * FULL_DAY_HOUR;
            break;
        case 2:
            cout << "Employee is Part Time\n";
            cout << "Wage = " << WAGE_PER_HOUR * PART_TIME_HOUR;
            break;
        default:
            cout << "Employee is Absent\n";
    }
}
int main()
{
    cout <<"\nWelcome to Employee Wage Problem\n";
    calculateDailyWage();
    return 0;
}
