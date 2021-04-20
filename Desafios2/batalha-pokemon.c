// Batalhas
// Turnos

// V: quantidade de vida
// D: um dano inicial

// Fim => V = 0

// Habilidades (2)
//     um ataque de dano
//         que se escolhido causa um dano D igual ao dano atual do
//         pokemon no seu adversário,

// J1 (Clodes)                 J2 (Bezaliel)
// V = 100                     V = 200
// D = 40                      D = 80

// Batalha 1
//     R1 - J1 inicia;
//         J1_H2  => J1 (D1 = 40+50 = 90)
//         J2_H1  => J1 (V1 = 100 - 80 = 20)
//     R2
//         J1_H2  => J1 (D1 = 90+50 = 140)


// Clodes vai usar a habilidade de incrementar o dano de seu 
// pokemon até chegar num ponto que não possa mais perder e só 
// então começar a atacar.

// J1 quando atacar?
//     V2 / D1 (QUANTOS ROUNDS ATÉ GANHAR)
//         <=
//     V1 / D2 (QUANTOS ROUNDS ATÉ EU MORRER)


// V1 = 200
// D1 = 80

// V2 = 300
// D2 = 60

//     um ataque especial
//         que se escolhida aumenta permanentemente o seu dano em
//         50 unidades. 

#include <stdio.h>
#include <math.h>

void batalha(int v1, int v2, int d1, int d2)
{
    if (v2 <= 0)
    {
        printf("Clodes\n");
    }
    else if (v1 <= 0)
    {
        printf("Bezaliel\n");
    }
    else
    {
        // Ataque do clodes
        int rounds_ate_ganhar = ceil((double) v2 / d1);
        int rounds_ate_perder = ceil((double) v1 / d2);

        if (rounds_ate_ganhar <=  rounds_ate_perder)
        {
            v2 -= d1;
        }
        else
        {
            d1 += 50;
        }

        // Ataque do bezaliel
        if (v2 > 0)
        {
            v1 -= d2; // v1 = v1 - d2;
        }

        // Chama o próximo round (recursão)
        batalha(v1, v2, d1, d2);
    }
}

void loop(int n)
{
    int v1, v2, d1, d2;

    if (n > 0)
    {
        scanf("%d%d%d%d", &v1, &v2, &d1, &d2);

        batalha(v1, v2, d1, d2);

        loop(n - 1);
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    loop(n);

    return 0;
}