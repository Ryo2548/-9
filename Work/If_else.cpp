#include<iostream>
using namespace std;

int main() {
    int A = 0; //ตัวแปล A มีค่าเป็น 0 และ เป็นประเภท int
    cout << "Please enter a number for A: " << endl; //รับค่าที่Terminal
    cin >> A; //ค่าที่รับมาเก็บที่ตัวแปล A

    if (A == 8) { //ถ้า A = 8 ให้ทำข้างล่างนี้
        cout << "A is 8" << endl; //แสดงที่Terminal A is 8
    } else if (A > 8) { //ถ้า A > 8 ให้ทำคำสั่งข้างล่างนี้
        cout << "A is greater than 8" << endl; //แสดงที่Termianl A is greater than 8
    } else { //ถ้าไม่ใช่เงื่อนไขข้างบน ทำคำสั่งข้างล่างนี้
        cout << "A is less than 8" << endl; //แสดงที่Terminal A is less than 8
    }

    return 0;
}