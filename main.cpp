#include<iostream>
#include <ctime>

using namespace std;

void checkAttendance()
{
    srand(time(0));
    int attendence = (rand() % 2);
    if(attendence == 1) {
        cout << "\nEmployee is Present\n" << endl;
    }
    else {
        cout << "\nEmployee is Absent\n" << endl;
    }  

}
int main()
{
    cout <<"\nWelcome to Employee Wage Problem\n";
    checkAttendance();
    return 0;
}
