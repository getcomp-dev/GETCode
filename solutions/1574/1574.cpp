#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int T;

    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        int N, P = 0;
        cin >> N;
        cin.ignore();

        int historico[N];
        for (int j = 0; j < N; ++j)
        {
            int direcao = 0;

            string instrucao;
            getline(cin, instrucao);

            if (instrucao[0] == 'L')
                direcao = -1;

            if (instrucao[0] == 'R')
                direcao = 1;

            if (instrucao[0] == 'S')
            {
                const char *temp = instrucao.c_str();
                int value = atoi(temp+8);
                direcao = historico[value-1];
            }

            P += direcao;
            historico[j] = direcao;
        }

        cout << P << endl;
    }

    return 0;
}
