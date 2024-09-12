1. PACMAN C++
2. O varianta simpla a jocului legendar PacMan utilizand limba de programare C++.
3. Regulile jocului:

Controlul Șarpelui:
Jucătorul controlează mișcarea șarpelui folosind săgețile de pe tastatură (sau alte controale, în funcție de implementare).
Șarpele se mișcă într-o direcție constantă până când jucătorul schimbă direcția.

Obiective și Scor:
Scopul jocului este de a mânca "mere" sau alte obiecte care apar pe ecran.
Fiecare obiect mâncat face ca șarpele să crească în lungime.
Cu cât șarpele este mai lung, cu atât este mai dificil să navighezi, deoarece trebuie să eviți coliziunile cu propriul corp.

Coliziuni:
Dacă șarpele se lovește de marginea ecranului sau de propriul corp, jocul se termină.
Unele variante ale jocului permit șarpelui să traverseze marginile ecranului și să apară pe partea opusă.

Creșterea Șarpelui:
După ce mănâncă un obiect, șarpele crește în lungime.
Lungimea șarpelui este de obicei afișată ca scor în joc.

Temporizare și Viteză:
În multe versiuni, jocul devine mai dificil pe măsură ce șarpele crește, deoarece viteza de mișcare a șarpelui poate crește.

Obiecte Speciale:
Unele variante ale jocului includ obiecte speciale care pot oferi puncte suplimentare sau alte beneficii temporare.

Controale și Interfață:
În majoritatea cazurilor, jucătorul poate schimba direcția șarpelui în timp real, dar nu poate schimba direcția în mod direct invers (de exemplu, dacă șarpele se mișcă la dreapta, nu poate merge direct la stânga).

4. Point (structură):

Definiție: struct Point { int x; int y; };
Explicație: Reprezintă o poziție pe un plan 2D, folosind două coordonate întregi (x și y). Este folosită pentru a localiza obiecte pe tabla de joc, cum ar fi poziția șarpelui și a merelor.
Apple (clasă):

Definiție: class Apple { Point _position; ... };
Explicație: Reprezintă un obiect de tip măr care apare pe tabla de joc. Include un atribut de tip Point care definește poziția mărului pe tablă.
Direction (enumerație):

Definiție: enum class Direction { Top, Left, Right, Bottom };
Explicație: Reprezintă direcțiile în care șarpele se poate mișca. Valorile enumerației indică direcțiile posibile: sus (Top), stânga (Left), dreapta (Right), și jos (Bottom).
Snake (clasă):

Definiție: class Snake { Point _segments[100]; int _nr_segments; ... };
Explicație: Reprezintă șarpele în joc. Utilizează un array de Point pentru a stoca segmentele șarpelui și un întreg pentru a ține evidența numărului de segmente. Această clasă gestionează mișcarea șarpelui, mărimea și interacțiunile cu obiectele din joc.
Board (clasă):

Definiție: class Board { int _width; int _height; ... };
Explicație: Reprezintă tabla de joc pe care șarpele se mișcă. Stochează lățimea (_width) și înălțimea (_height) tablei și este folosită pentru a verifica limitele și dimensiunile jocului.
GameEngine (clasă):

Definiție: class GameEngine { Apple _apple; Snake _snake; Board _board; ... };
Explicație: Reprezintă motorul jocului care controlează logica jocului. Include obiecte de tip Apple, Snake, și Board, și gestionează inițializarea și rularea jocului.
Painter (clasă):

Definiție: class Painter { void DrawImage(Point topLeft, Point bottomRight, char** image); ... };
Explicație: Reprezintă un component de desenare care se ocupă cu afișarea graficelor și textului pe ecran. Utilizează Point pentru a defini pozițiile și dimensiunile imaginilor de desenat.