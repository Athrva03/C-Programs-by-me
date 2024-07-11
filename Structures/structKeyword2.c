#include<stdio.h>
#include<string.h>

struct Employee{
    int employeeID;
    char emplyoeeName[50];
    char emplyoeeDepartment[50];
    double salary; 
};

struct Company{
    char companyName[100];
    int foundedYear;
    char Companytype[50];
    char country[50];
    struct Employee emp;
};

int main(){

    struct Company com;
    strcpy(com.companyName,"Deloitte");
    com.foundedYear=2011;
    strcpy(com.Companytype,"Software");
    strcpy(com.country,"India");

    com.emp.employeeID=101;
    strcpy(com.emp.emplyoeeName,"Unknown");
    strcpy(com.emp.emplyoeeDepartment,"IT");
    com.emp.salary=30000;

    printf("%s %d %s %s\n%d %s %s %.lf", com.companyName,com.foundedYear,com.Companytype,com.country,com.emp.employeeID,com.emp.emplyoeeName,com.emp.emplyoeeDepartment,com.emp.salary);
    return 0;
}//End Main