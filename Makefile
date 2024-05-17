COMP = clang++
NOME = EXE
START = echo "" && echo "Compilação concluida. Iniciando..." && echo "" && echo "" && ./$(NOME) && echo ""


main: clear
	$(COMP) main.cpp -o $(NOME)
	@$(START)

compile: clear
	$(COMP) -o $(NOME) main.cpp

clear:
	rm -rf $(NOME) .*.cpp.swp .*.h.swp .cache
	clear
	@echo ""
	@ls -alh --color=auto
	@echo ""

run:
	@$(START)
