#include "MyStack.h"

#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand((unsigned) time(nullptr));

  MyStack<int> st(10);
  int val1 = rand();
  int val2 = rand();
  int val3 = rand();
  st.push(val1);
  cout << val1 << " pushed" << endl;
  st.push(val2);
  cout << val2 << " pushed" << endl;
  st.push(val3);
  cout << val3 << " pushed" << endl;

  while (!st.isEmpty()) {
    std::cout << st.pop() << " popped" << endl;
  }
  return 0;
}
