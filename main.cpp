#include <array>
#include <cstdlib>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  std::array<std::string, 3> PALAVRA_SECRETA{"MELANCIA", "ABACATE", "MAMÃO"};

  short valor_IN = std::atoi(argv[1]);

  std::cout << '\n' << '\n' << valor_IN << '\n';
}
