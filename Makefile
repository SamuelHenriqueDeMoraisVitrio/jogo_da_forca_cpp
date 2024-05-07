COMP = clang++
OPC = -Wall -std=c++17
NOME = EXE
START = echo "" && echo "Compilação concluida. Iniciando..." && echo "" && echo "" && ./$(NOME)


main: clear
	$(COMP) $(OPC) *.cpp -o $(NOME)
	@$(START)

compile: clear
	$(COMP) $(OPC) -o $(NOME) *.cpp

clear:
	rm -rf $(NOME) .*.cpp.swp .*.h.swp .cache
	clear
	@echo ""
	@ls -alh --color=auto
	@echo ""

run:
	@$(START)
