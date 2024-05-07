#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<std::string> PALAVRA_SECRETA{"MELANCIA", "ABACATE", "MAMÃO"};

  int valor_IN{static_cast<int>(*argv[1] - 0)};
  std::cout << valor_IN << '\n';
}
