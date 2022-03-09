#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;

class MyClass {
public:
  MyClass() { cout << "default constructor" << endl; }
  MyClass(const MyClass & m) { cout << "copy constructor" << endl; } 
  MyClass(int x) { cout << "(int) constructor" << endl; }
  ~MyClass() { cout << "Destructor" << endl; }
private:
};

// MyClass b; // GLOBAL - don't use

void fcn_by_value(MyClass x1)
{
  cout << "start of fcn_by_value" << endl;
  // MyClass z(10);
}
void fcn_by_reference(MyClass & x1)
{
  cout << "start of fcn_by_reference" << endl;
}
void fcn_by_const_reference(const MyClass & x1)
{
  cout << "start of fcn_by_const_reference" << endl;
}
MyClass fcn_return_by_value()
{
  MyClass b; // local variable
  // ... do something
  return b;
}
int main()
{
  cout << "start of main()" << endl;

  MyClass a;
  //MyClass b = a;
  //fcn_by_value(a);
  //fcn_by_reference(a);
  //fcn_by_const_reference(a);
  //a = fcn_return_by_value();

  vector<MyClass> v(5);
  v[2] = a;

  cout << "end of main()" << endl;
}
// Destructor for a called here
