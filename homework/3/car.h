#include <iostream>
#include <string>

class Engine;
class Driver;

class Car {
 protected:
  int max_speed;
  std::string _brand;
  char _class;
  int weight;
  int speed;
  Engine* engine;
  Driver* driver;

 public:
  Car();
  ~Car() = default;
  void start();
  void move();
  void stop();
  void off();
  void toString() const;
};

class Driver {
 private:
  std::string _name;
  int experience;
  const char gender;

 public:
  Driver();
  ~Driver() = default;
  void toString() const;
};

class Engine {
 private:
  bool on;
  int power;
  std::string manufacturer;
  friend class Car;

 public:
  Engine();
  ~Engine() = default;
  void toString() const;
  bool isOn() { return on; }
};

class Track : public Car {
 private:
  int load_capacity;

 public:
  Track();
  ~Track() = default;
  void toString() const;
};

class Racing_car : public Car {
 private:
  int bonus_speed;

 public:
  Racing_car();
  ~Racing_car() = default;
  void move();
  void toString() const;
};