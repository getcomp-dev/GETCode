#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int A, B, C;

    cin >> A;
    cin >> B;
    cin >> C;

    int melhor = 0*A + 1*B + 2*C;

    if (melhor > 1*A + 0*B + 1*C)
        melhor = 1*A + 0*B + 1*C;

    if (melhor > 2*A + 1*B + 0*C)
        melhor = 2*A + 1*B + 0*C;

    cout << melhor * 2 << endl;

    return 0;
}
