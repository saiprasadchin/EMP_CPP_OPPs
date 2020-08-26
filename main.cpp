#include<iostream>
#include <ctime>

using namespace std;
const int WAGE_PER_HOUR = 20;
const int FULL_DAY_HOUR = 8;
const int PART_TIME_HOUR = 4;
const int WORK_DAYS_IN_MONTH = 20;
const int WORK_HOURS_IN_MONTH = 100;

int checkAttendance()
{
    int attendence = ( rand() % 3 );
    return attendence;
}
int getDailyWorkingHours()
{
    int workHrs = 0;
    switch( checkAttendance() ) {
        case 1:
            workHrs = FULL_DAY_HOUR;
            break;
        case 2:
            workHrs = PART_TIME_HOUR;
            break;
        default:
            workHrs = 0;
    }
    return workHrs;
}
void calculateMonthlyWages()
{
    srand(time(0));
    int monthlyWage = 0;
    int day = 1;
    int workingHours = 0;
    while( day <= WORK_DAYS_IN_MONTH && workingHours <= WORK_HOURS_IN_MONTH ) {
        day++;
        int hours = getDailyWorkingHours(); 
        cout << "Day"<< day <<"    wages : "<< hours * WAGE_PER_HOUR << endl;
        workingHours += hours;
    }
    cout << "\n\nMonthly Wage = " << workingHours * WAGE_PER_HOUR << endl;
}
int main()
{
    cout <<"\nWelcome to Employee Wage Problem\n";
    calculateMonthlyWages();
    return 0;
}
