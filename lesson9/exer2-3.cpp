#include <iostream>
using namespace std;

// Рядок у якому виконується присвоєння нової адреси константному поінтеру
// викликає помилку компілятора, така дія є невірною

// exer2-3.cpp:13:13: error: assignment of read-only variable 'pVarOne'
// pVarOne = &VarTwo;

int main()
{
    int VarOne{};
    int *const pVarOne = &VarOne;

    VarOne = 6;
    *pVarOne = 7;

    int VarTwo{};
    pVarOne = &VarTwo;
}