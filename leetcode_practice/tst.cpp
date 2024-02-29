#include <iostream>
using namespace std;
class Base {
public: 
  virtual std::string f1(int a) {
    return "fb";
  }
};

class Derived1: public Base {
};

class Derived2: public Derived1 {
public:
  virtual std::string f1(int a) {
    return "fd2";
  }
};


int main() {
    Derived2 *d2 = new Derived2(); 
    cout<<((Derived1 *)d2)->f1();
    //cout<<d->f1();
    return 0;
}
