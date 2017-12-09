#include <iostream>

int main() {
  std::cout << "Hello world\n";
#ifdef __GNUC__
  std::cout << "g++\n";
#endif
#ifdef __clang__
  std::cout << "clang++\n";
#endif
}
