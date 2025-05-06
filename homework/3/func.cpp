#include "car.h"

Car::Car()
    : driver(new Driver()),
      engine(new Engine()),
      _brand("Ferrari"),
      _class('B'),
      weight(1410),
      max_speed(350),
      speed(0) {
  std::cout << "Init Car: " << _brand << std::endl;
}

Driver::Driver() : _name("Alex"), experience(10), gender('M') {
  std::cout << "Init Driver: " << _name << std::endl;
}

Engine::Engine() : on(false), power(986), manufacturer("Ferrari") {
  std::cout << "Init Engine: " << manufacturer << std::endl;
}

void Car::start() {
  if (!engine->on) {
    engine->on = true;
    std::cout << "Engine on" << std::endl;
  } else {
    std::cout << "The engine is already turned on" << std::endl;
  }
}
void Car::move() {
  if (!engine->on) {
    std::cout << "Engine if off!" << std::endl;
    return;
  } else if (speed == max_speed) {
    std::cout << "Max speed!" << std::endl;
    return;
  }
  std::cout << "Picking up speed: " << std::endl;
  while (speed != max_speed) {
    speed += 50;
    std::cout << speed << std::endl;
  }
}

void Car::stop() {
  if (!engine->on) {
    std::cout << "Engine is off!" << std::endl;
    return;
  } else if (speed == 0) {
    std::cout << "Speed is null!" << std::endl;
    return;
  }
  std::cout << "Speed reset: " << std::endl;
  while (speed != 0) {
    speed -= 50;
    std::cout << speed << std::endl;
  }
}

void Car::off() {
  if (engine->on) {
    engine->on = false;
    std::cout << "Engine off" << std::endl;
  } else {
    std::cout << "The engine is already turned off" << std::endl;
  }
}

void Driver::toString() const {
  std::cout << "Driver name: " << _name << std::endl;
  std::cout << "Driver experience: " << experience << std::endl;
  std::cout << "Driver gender: " << gender << std::endl;
}

void Engine::toString() const {
  std::cout << "Engine power: " << power << std::endl;
  std::cout << "Engine manufacturer: " << manufacturer << std::endl;
}

void Car::toString() const {
  driver->toString();
  engine->toString();
  std::cout << "Car brand: " << _brand << std::endl;
  std::cout << "Car class: " << _class << std::endl;
  std::cout << "Car weight: " << weight << std::endl;
  std::cout << "Car max speed: " << max_speed << std::endl;
}

Track::Track() : load_capacity(1000) {
  std::cout << "Init Track: " << load_capacity << std::endl;
}

void Track::toString() const {
  Car::toString();
  std::cout << "Track load capacity: " << load_capacity << std::endl;
}

Racing_car::Racing_car() : bonus_speed(100 + Car::max_speed) {
  std::cout << "Init Race Car: " << _brand << std::endl;
}

void Racing_car::move() {
  if (!engine->isOn()) {
    std::cout << "Engine if off!" << std::endl;
    return;
  } else if (speed == bonus_speed) {
    std::cout << "Max speed!" << std::endl;
    return;
  }
  std::cout << "Picking up speed: " << std::endl;
  while (speed != bonus_speed) {
    speed += 50;
    std::cout << speed << std::endl;
  }
}

void Racing_car::toString() const {
  Car::toString();
  std::cout << "Race bonus speed: " << bonus_speed << std::endl;
}