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

        int quantCopied = 0;
        bool found[N];
        bool copied[N];
        for (int j = 0; j < N; ++j)
        {
            found[j] = false;
            copied[j] = false;
        }

        int T;
        for (int i = 0; i < M; ++i)
        {
            cin >> T;
            T = T - 1;

            if (found[T])
            {
                if(!copied[T])
                {
                    copied[T] = true;
                    quantCopied++;
                }
            }
            found[T] = true;
        }

        cout << quantCopied << endl;
    }

    return 0;
}
