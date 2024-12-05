CXX = g++
CXXFLAGS = -I./include -I./libs/SFML/include -I./tests/Catch2-devel/src/catch2 # SFML & Catch2 

LDFLAGS = -L./libs/SFML/lib -lsfml-graphics -lsfml-window -lsfml-system # bibliotecile SFML

SRC = src/main.cpp src/gameengine.cpp src/pacman.cpp src/ghost.cpp src/board.cpp src/painter.cpp src/point.cpp
OBJ = $(SRC:.cpp=.o)

# Teste
TEST_SRC = tests/test_point.cpp tests/test_pacman.cpp tests/test_ghost.cpp tests/test_board.cpp tests/test_painter.cpp
TEST_OBJ = $(TEST_SRC:.cpp=.o)
TEST_EXEC = test_game  # Executabil pentru teste

OUT = pacman_game

$(OUT): $(OBJ)
	$(CXX) $(OBJ) -o $(OUT) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

tests/%.o: tests/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: $(OBJ) $(TEST_OBJ)
	$(CXX) $(CXXFLAGS) -o $(TEST_EXEC) $(OBJ) $(TEST_OBJ) $(LDFLAGS)
	./$(TEST_EXEC)

clean:
	rm -f $(OBJ) $(TEST_OBJ) $(OUT) $(TEST_EXEC)
