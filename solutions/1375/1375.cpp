#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int N;
    cin >> N;

    while(N != 0)
    {
        int R[N];
        for (int i = 0; i < N; ++i)
            R[i] = 0; // Marca todas as posições como vazias

        bool possuiErros = false;
        for (int i = 0; i < N; ++i)
        {
            int C, P;
            cin >> C >> P;

            if (possuiErros) continue; // Ignora as entradas caso tenha acontecido algum erro

            int novaPosicao = i + P; // Calcula a nova posição
            if (novaPosicao >= 0 && novaPosicao < N && R[novaPosicao] == 0) // Verifica se a posição é valida e está vazia
            {
                R[novaPosicao] = C; // Posiciona o carro C na nova posição
            }
            else
            {
                possuiErros = true;
            }
        }

        if (possuiErros)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < N-1; ++i)
                cout << R[i] << " ";
            cout << R[N-1] << endl;
        }

        cin >> N;
    }

    return 0;
}
