#include "int.h"

Integer::Integer() {
  _num = 0;
  std::cout << "Init num" << std::endl;
}

Integer::Integer(const int& _num) {
  this->_num = _num;
  std::cout << "Init num" << std::endl;
}

Integer::Integer(const Integer& other) { _num = other._num; }

int Integer::getNum() const {
  std::cout << _num << std::endl;
  return _num;
}

void Integer::setNum(const int& a) { _num = a; }