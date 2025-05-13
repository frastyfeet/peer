#include <iostream>
#include <memory>
#include <vector>

class Base {
 public:
  virtual void display() const = 0;
  virtual ~Base() = default;
};

class A : public Base {
 private:
  int a;

 public:
  A() : a(5) {}
  A(int a) : a(a) {}
  void display() const override { std::cout << "A: " << a << std::endl; }
};

class B : public Base {
 private:
  int b;

 public:
  B() : b(10) {}
  B(int b) : b(b) {}
  void display() const override { std::cout << "B: " << b << std::endl; }
};

template <typename T>
class Collection {
 private:
  std::vector<std::shared_ptr<Base>> items;

 public:
  void add(const std::shared_ptr<Base>& item) {
    if (dynamic_cast<A*>(item.get()) != nullptr) {
      items.push_back(item);
    } else {
      throw std::invalid_argument("no correct class");
    }
  }
  void display() const {
    for (const auto& item : items) {
      item->display();
    }
  }
};

int main() {
  Collection<Base> myCollection;

  std::shared_ptr<Base> a = std::make_shared<A>(5);
  std::shared_ptr<Base> b = std::make_shared<B>(10);
  try {
    myCollection.add(a);
    myCollection.add(b);
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }

  myCollection.display();

  return 0;
}