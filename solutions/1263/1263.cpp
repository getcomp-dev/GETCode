#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    for(;;)
    {
        string entrada;
        int aliteracoes;  // Quantidade de aliterações
        char letra;  // Ultima letra encontrada
        bool novaLetra;  // Flag que define se é a primeira vez que uma letra aparece

        // Obtem uma linha da entrada
        getline(cin, entrada);
        if(!cin)
            break;

        // Define valores iniciais
        aliteracoes = 0;
        letra = tolower(entrada[0]);  // A função tolower() é utilizada para ignorar diferenças entre letras maiúsclas e minúsculas
        novaLetra = true;

        for (int i = 1; i < entrada.length(); ++i)
        {
            // Todas as verificações são realizadas apenas quando encontrar um espaço
            if (entrada[i] == ' ')
            {
                char proximaLetra = tolower(entrada[i+1]);

                if (letra == proximaLetra)
                {
                    if (novaLetra)  // Incrementa o número de aliterações apenas se for a primeira vez que a letra se repete
                    {
                        aliteracoes++;
                        novaLetra = false;
                    }
                }
                else
                {
                    letra = proximaLetra;
                    novaLetra = true;  // Se encontrar uma letra nova, reseta a flag
                }
            }
        }

        cout << aliteracoes << endl;
    }

    return 0;
}