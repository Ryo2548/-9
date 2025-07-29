#include <iostream>
using namespace std;

int main() {
  
  	// while loop to print numbers from 1 to 5
    int i = 1; //ตัวแปล i = 1 เป็น int
    while (i <= 5) { //Loop เช็คว่า i <= 5 ไหม เป็นจริงทำข้างล่างนี้
        cout << "Hi  => i = " << i << endl; //แสดงค่าที่Terminal Hi => i = , ค่าของตัวแปล i
        i++; //เพิ่มค่า i ทีละ 1
    }

    return 0;
}