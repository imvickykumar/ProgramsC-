// function template
#include <iostream>
using namespace std;

template <uppername T>
void GetMax (T a, T b) {
  T c;
  c=a+b;
  cout<<c<<"\n";
}

int main () {
  
  GetMax<int>(5,4);
  GetMax<float>(5.5,4.4);
  
  return 0;
}
