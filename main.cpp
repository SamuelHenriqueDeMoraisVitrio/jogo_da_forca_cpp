#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<std::string> PALAVRA_SECRETA{"MELANCIA", "ABACATE", "MAMÃO"};

  std::cout << "\n\t" << *argv[1] << '\t' << static_cast<int>(*argv[1]) << '\t'
            << static_cast<char>(*argv[1]) << "\n\t" << argv[1] << '\t'
            << static_cast<int>(std::atof(argv[1])) << '\t' << static_cast<char *>(argv[1]);

  int valor_IN{static_cast<int>(*argv[1] - 0)};
  std::cout << '\n' << '\n' << valor_IN << '\n';
}
