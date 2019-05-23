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

        int history[N];
        for (int j = 0; j < N; ++j)
        {
            int direction = 0;

            string instruction;
            getline(cin, instruction);

            if (instruction[0] == 'L')
                direction = -1;

            if (instruction[0] == 'R')
                direction = 1;

            if (instruction[0] == 'S')
            {
                const char *temp = instruction.c_str();
                int value = atoi(temp+8);
                direction = history[value-1];
            }

            P += direction;
            history[j] = direction;
        }

        cout << P << endl;
    }

    return 0;
}
