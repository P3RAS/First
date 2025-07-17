#include<iostream>
using namespace std;
int main(){
    cout << "Grade Calculator" << endl;
    cout << "Marks (out of 100)" << endl;

    // Defining integer
    int marks1, marks2, marks3, marks4, marks5, marks6;
    cout << "Enter Subject 1 Marks: ";
    cin >> marks1;
    if(marks1 > 100){
        cout << "Invalid" << endl;
    }
    cout << "Enter Subject 2 Marks: ";
    cin >> marks2;
    if(marks2 > 100){
        cout << "Invalid" << endl;
    }
    cout << "Enter Subject 3 Marks: ";
    cin >> marks3;
    if(marks3 > 100){
        cout << "Invalid" << endl;
    }
    cout << "Enter Subject 4 Marks: ";
    cin >> marks4;
     if(marks4 > 100){
        cout << "Invalid" << endl;
    }
    cout << "Enter Subject 5 Marks: ";
    cin >> marks5;
     if(marks5 > 100){
        cout << "Invalid" << endl;
    }
    cout << "Enter Subject 6 Marks: ";
    cin >> marks6;
     if(marks6 > 100){
        cout << "Invalid" << endl;
    }
    
    // average calculation
    int avg;
    avg = (marks1+marks2+marks3+marks4+marks5+marks6)/6;
    
    if(avg>90){
        cout << "Grade A";
    }
    else if(avg<=90 && avg >80){
        cout << "Grade B";
    }
    else if(avg<=80 && avg >70){
        cout << "Grade C";
    }
    else if(avg<=70 && avg >60){
        cout << "Grade D";
    }
    else if(avg<=60 && avg >50){
        cout << "Grade E";
    }
    else if(avg<=50 && avg >40){
        cout << "Grade N";
    }
    else{
        cout << "Fail";
    }
    
    
    return 0;
}




