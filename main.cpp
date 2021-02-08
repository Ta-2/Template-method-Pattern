#include <iostream>
#include "Template-method.hpp"
using namespace std;

class Book : public recipe {
public:
  void first_material () override { cout << "paper" << endl; }
  void second_material () override { cout << "pen" << endl; }
  void third_material () override { cout << "ink" << endl; }
};

class Chair : public recipe {
public:
  void first_material () override { cout << "leg" << endl; }
  void second_material () override { cout << "seat" << endl; }
  void third_material () override { cout << "backboard" << endl; }
};

int main(){
  recipe *book = new Book();
  recipe *chair = new Chair();

  cout << "book" << endl;
  book->create();

  cout << endl;

  cout << "chair" << endl;
  chair->create();

  return 0;
}
