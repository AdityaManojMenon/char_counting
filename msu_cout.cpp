// working code 
#include <iostream>

int main() {
  int count = 0;
  char c;
  do {
    std::cin >> c;
    if (c == 'M' || c == 'S' || c == 'U' || c == 'm' || c == 's' ||c == 'u') {
      ++count;
    }
  } while(c != '.');

  std::cout << "The count of letters (\"MSU\") is " << count << "." << std::endl;

}
