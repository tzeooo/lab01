
---

## **Pacman**
Acest proiect reprezintă implementarea jocului clasic **Pacman** folosind limbajul de programare C++. Jocul implică controlul personajului principal, Pacman, care trebuie să navigheze printr-un labirint și să evite fantomele în timp ce colectează puncte.

### **Regulile jocului:**
1. Jucătorul controlează mișcarea lui Pacman folosind săgețile de pe tastatură (sau alte controale configurate).
2. Obiectivul jocului este de a colecta toate punctele din labirint fără a fi prins de fantome.
3. Dacă Pacman este prins de o fantomă, jocul se termină.
4. Fantomele urmăresc Pacman în timp real, fiecare cu un model diferit de mișcare.

### **Fișierele de antet și clasele principale:**

#### **Board.hpp**
- **Clasa `Board`:**
  - Această clasă reprezintă tabloul pe care se desfășoară jocul.
  - Conține două variabile: `_width` și `_height`, care definesc dimensiunile tablei.
  - Metode:
    - `GetWidth()` – returnează lățimea tablei.
    - `GetHeight()` – returnează înălțimea tablei.

```cpp
#pragma once

class Board {
    int _width;
    int _height;
public:
    Board(int width = 20, int height = 20);
    int GetWidth() const;
    int GetHeight() const;
};
```

#### **Direction.hpp**
- **Enumerația `Direction`:**
  - Reprezintă direcțiile în care Pacman și fantomele se pot deplasa: `Up`, `Left`, `Right`, `Down`.

```cpp
#pragma once

enum class Direction {
    Up, Left, Right, Down
};
```

#### **GameEngine.hpp**
- **Clasa `GameEngine`:**
  - Aceasta gestionează logica principală a jocului.
  - Contine obiectele principale ale jocului: `_pacman`, `_ghost`, și `_board`.
  - Metode:
    - `Init()` – inițializează jocul.
    - `Run()` – rulează jocul.

```cpp
#pragma once

#include "pacman.hpp"
#include "ghost.hpp"
#include "board.hpp"

class GameEngine {
    Pacman _pacman;
    Ghost _ghost;
    Board _board;
public:
    GameEngine();
    void Init();
    void Run();
};
```

#### **Ghost.hpp**
- **Clasa `Ghost`:**
  - Reprezintă o fantomă din joc, având o poziție pe tablă.
  - Metode:
    - `Move(int dx, int dy)` – mută fantoma pe tablă cu un offset dat.

```cpp
#pragma once

#include "point.hpp"

class Ghost {
    Point _position;
public:
    Ghost();
    Ghost(const Point& position);
    Point GetPosition() const;
    void Move(int dx, int dy);
};
```

#### **Pacman.hpp**
- **Clasa `Pacman`:**
  - Reprezintă personajul principal, Pacman.
  - Atribute:
    - `_position`: poziția curentă.
    - `_direction`: direcția curentă de mișcare.
  - Metode:
    - `Move(Direction direction)` – mută Pacman în direcția specificată.

```cpp
#pragma once

#include "point.hpp"
#include "direction.hpp"

class Pacman {
    Point _position;
    Direction _direction;
public:
    Pacman();
    Pacman(const Point& position);
    void Move(Direction direction);
    Point GetPosition() const;
};
```

#### **Painter.hpp**
- **Clasa `Painter`:**
  - Se ocupă de afișarea graficelor pe ecran, inclusiv poziționarea imaginilor și textului.

```cpp
#pragma once

#include "point.hpp"

class Painter {
public:
    void DrawImage(Point topLeft, Point bottomRight, char** image);
    void WriteText(Point position, const char* text);
};
```

#### **Point.hpp**
- **Structura `Point`:**
  - Reprezintă o poziție pe tablă, având două coordonate: `x` și `y`.

```cpp
#pragma once

struct Point {
    int x;
    int y;
};
```
