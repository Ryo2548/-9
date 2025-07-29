#include<iostream>
using namespace std;

int main (){
    int A = 0; //ตัวแปล A มีค่าเป็น 0 และ เป็นประเภท int
    cout<<"Please enter a number to A: "<< endl; //รับค่าที่Terminal
    cin >> A; //ค่าที่รับมาเก็บที่ตัวแปล A

    if(A<5){ //ถ้า A < 8 ให้ทำข้างล่างนี้
        cout<<"Condition met"<<endl; //แสดงที่Terminal Condition met
    }
    
    return 0;
}