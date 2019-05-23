#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for(;;)
    {
        int N, K;
        int quant = 0;
        int frequencia[100];

        cin >> N >> K;

        if (N == 0 && K == 0)
            break;

        for (int i = 0; i < 100; ++i)
            frequencia[i] = 0;

        int P;
        for (int i = 0; i < N; ++i)
        {
            cin >> P;

            frequencia[P - 1]++;
        }

        for (int i = 0; i < 100; ++i)
        {
            if (frequencia[i] >= K)
                quant++;
        }

        cout << quant << endl;
    }

    return 0;
}
