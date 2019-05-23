#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for(;;)
    {
        int N, M;

        cin >> N >> M;

        if (N == 0 && M == 0)
            break;

        int quantCopiado = 0;
        bool encontrado[N];
        bool copiado[N];
        for (int j = 0; j < N; ++j)
        {
            encontrado[j] = false;
            copiado[j] = false;
        }

        int T;
        for (int i = 0; i < M; ++i)
        {
            cin >> T;
            T = T - 1;

            if (encontrado[T])
            {
                if(!copiado[T])
                {
                    copiado[T] = true;
                    quantCopiado++;
                }
            }
            encontrado[T] = true;
        }

        cout << quantCopiado << endl;
    }

    return 0;
}
