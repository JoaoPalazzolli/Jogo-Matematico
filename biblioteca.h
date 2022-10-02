#include <stdio.h>
#include <unistd.h>
#include <windows.h>

int loading() // carregamento
{

    int loadi, loadj, t, load;

    system("cls");

    printf("\n\nCarregando: \n\n");

    for (loadi = 0; loadi <= 20; loadi++)
    {

        t = loadi * 5; // Porcentagem do Load

        printf("  %d%%\r", t);
        fflush(stdout);

        for (loadj = 0; loadj < loadi; loadj++)
        {

            if (!loadj)
                printf("  ");

            fflush(stdin);
            printf("%c", 219); // Barra de Loading
            Sleep(5);
        }
    }

    printf("\n\n Inicializando"); // Inicialização do Programa
    for (load = 0; load < 3; load++)
    {
        printf(".");
        Sleep(1000);
    }
    system("cls");
}

int dificult() // dificuldade do jogo
{
    int odf, limp;
    printf("Digite a dificuldade: \n [1] F%ccil\n [2] M%cdio\n [3] Dif%ccil\n\n [4] Voltar\n\n> ", 160, 130, 161);
    limp = scanf("%d", &odf);
    fflush(stdin); // Limpeza
    if (limp == 0) // Opção Inválida
        odf = 5;
    return odf;
}

void invalido() // Opção Inválida
{
    system("cls");
    printf("Op%c%co Inv%clida! Digite novamente\n\n", 135, 198, 160);
}

int menu() // Menu
{
    int limp1, op;
    printf("\nDigite a modalidade que quer jogar:\n [1] Soma\n [2] Subtra%c%co\n [3] Multiplica%c%co\n [4] Divis%co\n\n [5] Gabarito\n\n [6] Sair\n\n -> ", 135, 198, 135, 198, 198);

    limp1 = scanf("%d", &op);

    fflush(stdin); // Limpeza

    if (limp1 == 0) // Opção Inválida
        op = 7;
    return op;
}

int gabarito() // Menu do Gabarito
{
    int limp, odg;
    printf("Digite a modalidade que deseja ver:\n [1] Soma\n [2] Subtra%c%co\n [3] Multiplica%c%co\n [4] Divis%co\n\n [5] Voltar\n\n> ", 135, 198, 135, 198, 198);
    limp = scanf("%d", &odg);
    fflush(stdin);                       // Limpeza
    if (limp == 0 || odg > 5 || odg < 1) // Opção Inválida
    {
        odg = 6;

        invalido(); // Opção Inválida
    }
    return odg;
}

int voltar() // Opção de Voltar do Gabarito
{
    int limp1, odg;
    printf("\n\n [5] Voltar\n\n> ");
    limp1 = scanf("%d", &odg);
    fflush(stdin); // Limpeza

    if (limp1 == 0 || odg != 5) // Opção Inválida
    {
        odg = 6;

        invalido(); // Opção Inválida
    }
    return odg;
}

int final() // Menu de Finalização
{
    int limp, odf;
    printf("Deseja mesmo finalizar o jogo?\n [1] Sim\n [2] N%co\n\n -> ", 198);
    limp = scanf("%d", &odf);
    fflush(stdin); // Limpeza

    if (limp == 0) // Opção Inválida
        odf = 3;

    return odf;
}

void cinvalido() // Opção Inválida para Conta
{
    system("cls");
    printf("Use apenas n%cmeros!\n\n\n", 163);
}

int acerto(int acertos) // Acertos
{
    acertos++;
    printf("\n\nResposta correta!\n");
    printf("\n\nVoc%c retornar%c ao In%ccio em 2 segundos!\n\n", 136, 160, 161);
    sleep(2);
    system("cls");
    return acertos;
}

int fim() // Fim do Programa
{
    system("cls");
    printf("\n\nObrigado por jogar! UwU\n\n\n");
    system("pause");
    return 0;
}

int serro(int fass1, int fass2, int mess1, int mess2, int diss1, int diss2, int erros, int dif) // Erro da Soma
{
    if (dif == 1)
    {
        erros++;
        printf("\n\nResposta errada!\n");
        printf("\n\nA resposta correta seria: %d\n", fass1 + fass2);
        printf("\n\nVoc%c retornar%c ao In%ccio em 3 segundos!\n", 136, 160, 161);
        sleep(3);
        system("cls");
    }

    else if (dif == 2)
    {
        erros++;
        printf("\n\nResposta errada!\n");
        printf("\n\nA resposta correta seria: %d\n", mess1 + mess2);
        printf("\n\nVoc%c retornar%c ao In%ccio em 3 segundos!\n", 136, 160, 161);
        sleep(3);
        system("cls");
    }

    else
    {
        erros++;
        printf("\n\nResposta errada!\n");
        printf("\n\nA resposta correta seria: %d\n", diss1 + diss2);
        printf("\n\nVoc%c retornar%c ao In%ccio em 3 segundos!\n", 136, 160, 161);
        sleep(3);
        system("cls");
    }
    return erros++;
}

int suerro(int fass1, int fass2, int mess1, int mess2, int diss1, int diss2, int erros, int dif) // Erro da Subtração
{
    if (dif == 1)
    {
        erros++;
        printf("\n\nResposta errada!\n");
        printf("\n\nA resposta correta seria: %d\n", fass1 - fass2);
        printf("\n\nVoc%c retornar%c ao In%ccio em 3 segundos!\n", 136, 160, 161);
        sleep(3);
        system("cls");
    }

    else if (dif == 2)
    {
        erros++;
        printf("\n\nResposta errada!\n");
        printf("\n\nA resposta correta seria: %d\n", mess1 - mess2);
        printf("\n\nVoc%c retornar%c ao In%ccio em 3 segundos!\n", 136, 160, 161);
        sleep(3);
        system("cls");
    }

    else
    {
        erros++;
        printf("\n\nResposta errada!\n");
        printf("\n\nA resposta correta seria: %d\n", diss1 - diss2);
        printf("\n\nVoc%c retornar%c ao In%ccio em 3 segundos!\n", 136, 160, 161);
        sleep(3);
        system("cls");
    }
    return erros++;
}

int muerro(int famd1, int famd2, int memd1, int memd2, int dimd1, int dimd2, int erros, int dif) // Erro da Multiplicação
{
    if (dif == 1)
    {
        erros++;
        printf("\n\nResposta errada!\n");
        printf("\n\nA resposta correta seria: %d\n", famd1 * famd2);
        printf("\n\nVoc%c retornar%c ao In%ccio em 3 segundos!\n", 136, 160, 161);
        sleep(3);
        system("cls");
    }

    else if (dif == 2)
    {
        erros++;
        printf("\n\nResposta errada!\n");
        printf("\n\nA resposta correta seria: %d\n", memd1 * memd2);
        printf("\n\nVoc%c retornar%c ao In%ccio em 3 segundos!\n", 136, 160, 161);
        sleep(3);
        system("cls");
    }

    else
    {
        erros++;
        printf("\n\nResposta errada!\n");
        printf("\n\nA resposta correta seria: %d\n", dimd1 * dimd2);
        printf("\n\nVoc%c retornar%c ao In%ccio em 3 segundos!\n", 136, 160, 161);
        sleep(3);
        system("cls");
    }
    return erros++;
}

int dierro(int fadv1, int fadv2, int medv1, int medv2, int didv1, int didv2, int erros, int dif) // Erro da Divisão
{
    if (dif == 1)
    {
        erros++;
        printf("\n\nResposta errada!\n");
        printf("\n\nA resposta correta seria: %d, e resto: %d\n", (fadv1 / fadv2), (fadv1 % fadv2));
        printf("\n\nVoc%c retornar%c ao In%ccio em 3 segundos!\n\n", 136, 160, 161);
        sleep(3);
        system("cls");
    }

    else if (dif == 2)
    {
        erros++;
        printf("\n\nResposta errada!\n");
        printf("\n\nA resposta correta seria: %d, e resto: %d\n", (medv1 / medv2), (medv1 % medv2));
        printf("\n\nVoc%c retornar%c ao In%ccio em 3 segundos!\n\n", 136, 160, 161);
        sleep(3);
        system("cls");
    }

    else
    {
        erros++;
        printf("\n\nResposta errada!\n");
        printf("\n\nA resposta correta seria: %d, e resto: %d\n", (didv1 / didv2), (didv1 % didv2));
        printf("\n\nVoc%c retornar%c ao In%ccio em 3 segundos!\n\n", 136, 160, 161);
        sleep(3);
        system("cls");
    }
    return erros;
}