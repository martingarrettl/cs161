#include <iostream>

using namespace std;

void draw_rect(int i) {
  if (i > 0) {
    draw_rect(--i);
    cout << "********\n";
    cout << "**    **\n";
    cout << "**    **\n";
    cout << "********\n";
  }

}

int main() {

draw_rect(7);

return 0;
}
