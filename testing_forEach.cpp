#include <iostream>
#include "forEach.h"

const int MAX_ARRAY_SIZE = 4;

using namespace std;

void testing_forEach_with_Int_types();
template <class U>
void print_items(U item);

int main() {
  testing_forEach_with_Int_types();
  return 0;
}

void testing_forEach_with_Int_types() {
  int int_a[] = {-2,141,0,29};
  short short_a[] = {-2,141,0,29};
  long long_a[] = {-2,141,0,29};
  unsigned int unsigned_int_a[] = {2,141,0,29};
  unsigned short unsigned_short_a[] = {2,141,0,29};
  unsigned long unsigned_long_a[] = {2,141,0,29};

  forEach(int_a,MAX_ARRAY_SIZE,print_items<int>);
  cout << endl;
  forEach(short_a,MAX_ARRAY_SIZE,print_items<short>);
  cout << endl;
  forEach(long_a,MAX_ARRAY_SIZE,print_items<long>);
  cout << endl;
  forEach(unsigned_int_a,MAX_ARRAY_SIZE,print_items<unsigned int>);
  cout << endl;
  forEach(unsigned_short_a,MAX_ARRAY_SIZE,print_items<unsigned short>);
  cout << endl;
  forEach(unsigned_long_a,MAX_ARRAY_SIZE,print_items<unsigned long>);
}

template <class U>
void print_items(U item){
  cout << item << ", ";
}
