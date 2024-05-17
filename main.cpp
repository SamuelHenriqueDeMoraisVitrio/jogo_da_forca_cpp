#include <array>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> leia() {
  std::ifstream entryFILE("forca/desenhos");

  if (!entryFILE) {
    std::cerr << "\n\tErro ao abrir banco de dados.\n\n";
    exit(1);
  }

  std::string name{""};
  std::vector<std::string> names;

  while (std::getline(entryFILE, name)) { names.push_back(name); }

  entryFILE.close();

  for (std::string nome : names) { std::cout << "\n\t" << nome << '\n'; }

  return names;
}

int main(int argc, char *argv[]) {
  std::array<std::string, 3> PALAVRA_SECRETA{"MELANCIA", "ABACATE", "MAMÃO"};

  /*
  short valor_IN = std::atoi(argv[1]);

  std::cout << '\n' << '\n' << valor_IN << '\n';
  */

  std::vector<std::string> names{leia()};
}
