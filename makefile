# Compilator
CXX = g++
CXXFLAGS = -I./include -I./libs/SFML/include  # Include SFML și alte fișiere de antet

# LDFLAGS - specifică unde să caute fișierele `.a`
LDFLAGS = -L./libs/SFML/lib -lsfml-graphics -lsfml-window -lsfml-system # Lincare cu bibliotecile SFML

# Sursa
SRC = src/main.cpp src/gameengine.cpp src/pacman.cpp src/ghost.cpp src/board.cpp src/painter.cpp src/point.cpp
OBJ = $(SRC:.cpp=.o)
OUT = pacman_game

# Regula principală pentru generarea executabilului
$(OUT): $(OBJ)
	$(CXX) $(OBJ) -o $(OUT) $(LDFLAGS)

# Regula pentru compilarea fișierelor sursă în fișiere obiect
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Curățarea fișierelor intermediare
clean:
	rm -f $(OBJ) $(OUT)
