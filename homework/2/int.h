#include <iostream>

class Integer {
 private:
  int _num;

 public:
  Integer();
  Integer(const int& _num);
  Integer(const Integer& p);
  int getNum() const;
  void setNum(const int& a);
};
