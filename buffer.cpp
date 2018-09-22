#include <iostream>
using namespace std;

int main(void) {
  int importantData = 1;
  int buffer[10];
  bool correctInput = false;
  int temp;
  int num_elements;
  while (!correctInput) {
    cout << "How many numbers?" << endl;
    cin >> num_elements;
    if (num_elements <= 10) {
      correctInput = true;
    }
    else {
      cout << "Enter the value again" << endl;
    }
  }

  for (int i = 0; i < num_elements; i++) {
    cout << "Please type a number" << endl;
    cin >> temp;
    buffer[i] = temp;
  }

  cout << "After buffer overflow" << endl;
  cout << "Important data = " << importantData << endl;
  return 0;
}
