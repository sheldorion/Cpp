#include < iostream > #include < string > #include < vector > #include < ctime > #include < numeric > #include < math.h >

  using namespace std;

class Warrior {
  public:
    string name;
  int health, block, power;
  int maxattack;
  int maxblock;

  Warrior(string name, int health, int block, int power) {
    this - > name = name;
    this - > health = health;
    this - > block = block;
    this - > power = power;

  }

  int Attack() {
    maxattack = fabs(rand() % power);
    return maxattack;
  }

  int Block() {
    maxblock = fabs(rand() % block);
    return maxblock;
  }

};

class Battle {
  public:
    static string startafight(Warrior & a, Warrior & b) {
      while (a.health > 0 && b.health > 0) {
        Result(a, b);
        if (b.health <= 0) {
          b.health = 0;
          cout << a.name << "Kazandi" << endl;
          break;
        }
        Result(b, a);
        if (a.health <= 0) {
          a.health = 0;
          cout << b.name << "Kazandi" << endl;
          break;
        }

      }

      return "Oyun bitti";

    }

  static void Result(Warrior & a, Warrior & b) {
    int attackamount;
    int blockamount;

    attackamount = a.Attack() - b.Block();
    if (attackamount <= 0) {
      attackamount = 1;
    }

    b.health = b.health - attackamount;
    cout << a.name << " Saldirdi " << b.name << " verdigi zarar " <<
      attackamount << b.name << " kalan can " << b.health << endl;
  }
};

int main() {
  srand(time(NULL));
  Warrior thor("thor", 100, 50, 50);
  Warrior hulk("hulk", 100, 60, 70);
  Battle::startafight(hulk, thor);

  return 0;
}
