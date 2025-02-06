#include <iostream>

using namespace std;

// Bugs: №1 *pInt не ініціалізован, тож позилаеться на невизначени ділянку пам'яті
//   Далі ми у цю ділянку намагаємось записати значення 9, що може призвести до
//   помилки одразу, або згодом.

int main()
{
    int *pInt;
    *pInt = 9;
    cout << " The value at pInt: " << *pInt;

    return 0;
}
