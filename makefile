# Compilator
CXX = g++
CXXFLAGS = -I./include -I./libs/SFML/include -I./libs/catch2/include  # Include SFML și Catch2 (sau alte biblioteci de test)

# LDFLAGS - specifică unde să caute fișierele `.a`
LDFLAGS = -L./libs/SFML/lib -lsfml-graphics -lsfml-window -lsfml-system # Lincare cu bibliotecile SFML

# Sursa
SRC = src/main.cpp src/gameengine.cpp src/pacman.cpp src/ghost.cpp src/board.cpp src/painter.cpp src/point.cpp
OBJ = $(SRC:.cpp=.o)

# Teste
TEST_SRC = tests/test_point.cpp tests/test_pacman.cpp tests/test_ghost.cpp tests/test_board.cpp tests/test_painter.cpp
TEST_OBJ = $(TEST_SRC:.cpp=.o)
TEST_EXEC = test_game  # Executabil pentru teste

# Executabil principal
OUT = pacman_game

# Regula principală pentru generarea executabilului
$(OUT): $(OBJ)
	$(CXX) $(OBJ) -o $(OUT) $(LDFLAGS)

# Regula pentru compilarea fișierelor sursă în fișiere obiect
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regula pentru compilarea fișierelor de test
tests/%.o: tests/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regulă pentru generarea executabilului de teste
test: $(OBJ) $(TEST_OBJ)
	$(CXX) $(CXXFLAGS) -o $(TEST_EXEC) $(OBJ) $(TEST_OBJ) $(LDFLAGS)
	./$(TEST_EXEC)

# Curățarea fișierelor intermediare
clean:
	rm -f $(OBJ) $(TEST_OBJ) $(OUT) $(TEST_EXEC)
