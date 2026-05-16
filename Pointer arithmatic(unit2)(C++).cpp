#include <iostream>
using namespace std;
int main() {
  int arr[3] = {10, 20, 30};
  int* ptr = arr; // points to first element
  
  cout << *ptr << endl;//10
  ptr++;// move to next integer
  cout << *ptr << endl;// 20
  ptr++;// move again
  cout << *ptr << endl;// 30
   
  return 0;
}
