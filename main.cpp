#include<iostream>
#include <ctime>

using namespace std;
const int WAGE_PER_HOUR = 20;
const int FULL_DAY_HOUR = 8;
const int PART_TIME_HOUR = 4;
const int WORK_DAYS_IN_MONTH = 20;

int checkAttendance()
{
    int attendence = ( rand() % 3 );
    return attendence;
}
int calculateDailyWage()
{
    int wage = 0;
    switch( checkAttendance() ) {
        case 1:
            wage = WAGE_PER_HOUR * FULL_DAY_HOUR;
            break;
        case 2:
            wage = WAGE_PER_HOUR * PART_TIME_HOUR;
            break;
        default:
            wage = 0;
    }
    return wage;
}
void calculateMonthlyWages()
{
    srand(time(0));
    int monthlyWage = 0;
    for( int day = 1; day <= WORK_DAYS_IN_MONTH; day++ ) {
        int dailyWage = calculateDailyWage(); 
        cout << "Day"<< day <<"    wages : "<< dailyWage << endl;
        monthlyWage += dailyWage;
    }
    cout << "\n\nMonthly Wage = " << monthlyWage << endl;
}
int main()
{
    cout <<"\nWelcome to Employee Wage Problem\n";
    calculateMonthlyWages();
    return 0;
}
