#include <iostream>
using namespace std;

int main() {
  int i;
  cout << "Please enter an integer value: ";
  cin >> i;
  cout << "The value you entered is " << i;
  cout << " and its double is " << i*2 << ".\n";
  cout << "Please Enter another integer: ";
  cin >> num;
  testClass testObj = new testClass(num);
  testObj.calculate();
  testObj.printOut();
  return 0;
}

class testClass {
    private: int num = 0;
    public: testClass(int number) {
        num = number;
    }
    public: int calculate() {
        num *= 4;
    }
    public: int printOut() {
        cout << num;
    }
};