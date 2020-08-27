#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <ctime>

class Employee
{
public:
    int checkAttendance();
    int getDailyWorkingHours();
    void calculateMonthlyWages();
};

#endif