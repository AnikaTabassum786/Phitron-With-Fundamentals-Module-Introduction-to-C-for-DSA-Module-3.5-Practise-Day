//  Create three static objects with the help of the constructor of the following class.
// Student
// {
// 	name;
// 	roll;
// 	section;
// 	math_marks;
// 	cls;
// }
// Then compare those 3 objects and print who got the highest math_marks and print his/her name.

// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     char name[100];
//     int roll;
//     char section[50];
//     double math_marks;
//     int cls;

//     Student(int r,  double m, int c)
//     {
//         // name[100] = n;
//         roll = r;
      
//         math_marks = m;
//         cls = c;
//     };
// };

// int main()
// {

//     Student a(19,  80, 8);
//     Student b(17,  88, 9);
//     Student c(11,  89, 10);

//     if (a.math_marks > b.math_marks && a.math_marks > c.math_marks)
//     {
//         char temp[100] = "Anika";
//         strcpy(a.name, temp);

//         char temp_sec[50]="A";
//         strcpy(a.section, temp_sec);

//         cout << a.name ;
        

//     }
//     else if (b.math_marks > a.math_marks && b.math_marks > c.math_marks)
//     {
//         char temp[100] = "Rima";
//         strcpy(b.name, temp);

//         char temp_sec[50]="B";
//         strcpy(b.section, temp_sec);

//         cout << b.name ;
//     }
//     else if (c.math_marks > a.math_marks && c.math_marks > b.math_marks)
//     {
//         char temp[100] = "Mili";
//         strcpy(c.name, temp);

//         char temp_sec[50]="C";
//         strcpy(c.section, temp_sec);

//         cout << c.name ;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    char section[50];
    double math_marks;
    int cls;

    Student(const char n[],int r,const char s[], double m, int c)
    {
        strcpy(name,n);
        roll = r;
        strcpy(section,s);
        math_marks = m;
        cls = c;
    };
};

int main()
{

    Student a( "Anika",19, "A", 80, 8);
    Student b("Rima",17, "B" ,88, 9);
    Student c("Mili",11,"C",  89, 10);

    if (a.math_marks > b.math_marks && a.math_marks > c.math_marks)
    {
        
        cout << a.name ;
        

    }
    else if (b.math_marks > a.math_marks && b.math_marks > c.math_marks)
    {
        

        cout << b.name ;
    }
    else if (c.math_marks > a.math_marks && c.math_marks > b.math_marks)
    {
        

        cout << c.name ;
    }

    return 0;
}