#include <algorithm>
#include <array>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
  std::array<std::string, 3> PALAVRA_SECRETA{"MELANCIA", "ABACATE", "MAMÃO"};

  /*
  short valor_IN = std::atoi(argv[1]);

  std::cout << '\n' << '\n' << valor_IN << '\n';
  */

  std::ifstream entryFILE("namesSecrets/names.txt");

  if (!entryFILE) {
    std::cerr << "\n\tErro ao abrir banco de dados.\n\n";
    return 1;
  }

  std::string name{""};
  std::vector<std::string> names;

  while (std::getline(entryFILE, name)) { names.push_back(name); }

  entryFILE.close();

  for (std::string nome : names) { std::cout << "\n\t" << nome << '\n'; }
}
