// Bibliotecas
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h" //Biblioteca Pessoal

//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=////-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=////-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
int op, odf, odg, fass1, fass2, mess1, mess2, diss1, diss2, famd1, famd2, memd1, memd2, dimd1, dimd2, resp, fadv1, medv1, didv1, fadv2, medv2, didv2, resto;

int erros = 0, acertos = 0; // Contador do Placar

int limp1, limp, limp2, limp3;

int vscerto[999], vsresp[999], vsucerto[999], vsuresp[999], vmucerto[999] = {0}, vmuresp[999] = {0}, vdicerto[999], vdiresp[999], vdirresp[999], vdircerto[999], vcont, vcont1;

int csoma = 0, csub = 0, cmul = 0, cdiv = 0;

int dif = 0, gdisom[999], gdisub[999], gdimul[999], gdidiv[999];

//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=////-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=////-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//

int main() // Jogo Matemático
{

    SetConsoleTitle("Jogo Matematico"); // Colocar o Nome do Jogo no Console

    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // op        = Opções Início
    // odf       = Opções de Dificuldade e Finalização
    // odg       = Opção do Gabarito
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // fass      = Número Aleatório Fácil - Soma e Subtração
    // mess      = Número Aleatório Médio - Soma e Subtração
    // diss      = Número Aleatório Dificil - Soma e Subtração
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // famd      = Número Aleatório Fácil - Multiplicação
    // famd      = Número Aleatório Médio - Multiplicação
    // famd      = Número Aleatório Difícil - Multiplicação
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // fadv      = Número Aleatório Fácil - Divisão
    // medv      = Número Aleatório Médio - Divisão
    // didv      = Número Aleatório Difícil - Divisão
    // resto     = Resto da Divisão
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // resp      = Resposta
    // acertos   = Adiciona um Acerto para o Placar
    // erros     = Adiciona um Erro para o Placar
    // limp      = Limpeza
    // vcont     = Muda a Coluna do Vetor
    // dif       = Diz a Dificuldade que Foi Jogada
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // vscerto   = Vetor da Resposta Certa em Soma
    // vsresp    = Vetor da Resposta do Usuário em Soma
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // vsucerto  = Vetor da Resposta Certa em Subtração
    // vsuresp   = Vetor da Resposta do Usuário em Subtração
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // vmucerto  = Vetor da Resposta Certa em Multiplicação
    // vmuresp   = Vetor da Resposta do Usuário em Multiplicação
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // vdicerto  = Vetor da Resposta Certa em Divisão
    // vdiresp   = Vetor da Resposta do Usuário em Divisão
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // vdircerto = Vetor do Resto Certo em Divisão
    // vdirresp  = Vetor da Resposta do Resto do Usuário em Divisão
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // gdisom    = Grava a Dificuldade Jogada na Modalidade de Soma para Mostrar no Gabarito
    // gdisub    = Grava a Dificuldade Jogada na Modalidade de Subtração para Mostrar no Gabarito
    // gdimul    = Grava a Dificuldade Jogada na Modalidade de Multiplicação para Mostrar no Gabarito
    // gdidiv    = Grava a Dificuldade Jogada na Modalidade de Divisão para Mostrar no Gabarito
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // csoma     = Mostra se o Jogador Já Jogou o Jogo da Soma
    // csub      = Mostra se o Jogador Já Jogou o Jogo da Subtração
    // cmul      = Mostra se o Jogador Já Jogou o Jogo da Multiplicação
    // cdiv      = Mostra se o Jogador Já Jogou o Jogo da Divisão
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//

    loading(); // Carregamento do Jogo

    do
    {

        //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
        srand((unsigned)time(NULL));
        fass1 = 1 + (rand() % 100);
        fass2 = 1 + (rand() % 100);
        mess1 = 101 + (rand() % 400); // Gerando Números Aleatórios//
        mess2 = 101 + (rand() % 400);
        diss1 = 501 + (rand() % 900);
        diss2 = 501 + (rand() % 900);
        //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
        famd1 = 1 + (rand() % 10);
        famd2 = 1 + (rand() % 10);
        memd1 = 10 + (rand() % 15); // Gerando Números Aleatórios//
        memd2 = 10 + (rand() % 15);
        dimd1 = 20 + (rand() % 30);
        dimd2 = 20 + (rand() % 30);
        //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
        fadv1 = 10 + (rand() % 90);
        fadv2 = 1 + (rand() % 10);
        medv1 = 25 + (rand() % 225); // Gerando Números Aleatórios//
        medv2 = 1 + (rand() % 25);
        didv1 = 50 + (rand() % 950);
        didv2 = 1 + (rand() % 50);
        //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//

        // Placar
        printf("\n  > Total de acertos: %d\n  > Total de erros: %d\n", acertos, erros);

        // Menu
        op = menu();

        switch (op)
        {

        case 1:
        {

            system("cls");
            do
            {

                odf = dificult(); // Escolha da Dificuldade

                if (odf == 1) // Soma - Fácil //
                {
                    system("cls");
                    do
                    {

                        printf("Voc%c escolheu a dificuldade: F%ccil\n", 136, 160);

                        printf("\n\nA resposta da conta %c: \n", 130);
                        printf("\n%d + %d = ", fass1, fass2);
                        limp2 = scanf("%d", &resp);
                        fflush(stdin); // Limpeza

                        if (limp2 == 0)

                            cinvalido(); // Opção Inválida para Conta

                    } while (limp2 == 0);

                    gdisom[vcont] = 1;
                    csoma++;
                    vsresp[vcont] = resp;
                    vscerto[vcont] = fass1 + fass2;
                    dif = 1;

                    if (resp != (fass1 + fass2))
                    {

                        erros = serro(fass1, fass2, mess1, mess2, diss1, diss2, erros, dif); // erros
                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos
                    }
                } // Fim - Soma - Fácil //

                if (odf == 2) // Soma - Médio //
                {
                    system("cls");
                    do
                    {

                        printf("Voc%c escolheu a dificuldade: M%cdio\n", 136, 130);

                        printf("\n\nA resposta da conta %c: \n", 130);
                        printf("\n%d + %d = ", mess1, mess2);
                        limp2 = scanf("%d", &resp);
                        fflush(stdin); // Limpeza

                        if (limp2 == 0)

                            cinvalido(); // Opção Inválida para Conta

                    } while (limp2 == 0);

                    gdisom[vcont] = 2;
                    csoma++;
                    vsresp[vcont] = resp;
                    vscerto[vcont] = mess1 + mess2;
                    dif = 2;

                    if (resp != (mess1 + mess2))
                    {

                        erros = serro(fass1, fass2, mess1, mess2, diss1, diss2, erros, dif); // erros
                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos
                    }
                } // Fim - Soma - Médio //

                if (odf == 3) // Soma - Difícil //
                {
                    system("cls");
                    do
                    {

                        printf("Voc%c escolheu a dificuldade: Dif%ccil\n", 136, 161);

                        printf("\n\nA resposta da conta %c: \n", 130);
                        printf("\n%d + %d = ", diss1, diss2);
                        limp2 = scanf("%d", &resp);
                        fflush(stdin); // Limpeza

                        if (limp2 == 0)

                            cinvalido(); // Opção Inválida para Conta

                    } while (limp2 == 0);

                    gdisom[vcont] = 3;
                    csoma++;
                    vsresp[vcont] = resp;
                    vscerto[vcont] = diss1 + diss2;
                    dif = 3;

                    if (resp != (diss1 + diss2))
                    {

                        erros = serro(fass1, fass2, mess1, mess2, diss1, diss2, erros, dif); // erros
                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos
                    }
                } // Fim - Soma - Difícil //

                if (odf == 4) // Voltar
                    system("cls");

                if (odf > 4 || odf < 1) // Opção Inválida

                    invalido(); // Opção inválida

            } while (odf > 4 || odf < 1);

            break; // Parar

        } // Fim do Case 1 //

        case 2:
        {
            system("cls");
            do
            {

                odf = dificult(); // Escolha da Dificuldade

                if (odf == 1) // Subtração - Fácil //
                {
                    system("cls");
                    do
                    {

                        printf("Voc%c escolheu a dificuldade: F%ccil\n", 136, 160);

                        printf("\n\nA resposta da conta %c: \n", 130);
                        printf("\n%d - %d = ", fass1, fass2);
                        limp2 = scanf("%d", &resp);
                        fflush(stdin); // Limpeza

                        if (limp2 == 0)

                            cinvalido(); // Opção Inválida para Conta

                    } while (limp2 == 0);

                    gdisub[vcont] = 1;
                    dif = 1;
                    vsuresp[vcont] = resp;
                    vsucerto[vcont] = fass1 - fass2;
                    csub++;

                    if (resp != (fass1 - fass2))
                    {

                        erros = suerro(fass1, fass2, mess1, mess2, diss1, diss2, erros, dif); // erros
                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos
                    }
                } // Fim - Subtração - Fácil //

                if (odf == 2) // Subtração - Médio //
                {
                    system("cls");
                    do
                    {

                        printf("Voc%c escolheu a dificuldade: M%cdio\n", 136, 130);

                        printf("\n\nA resposta da conta %c: \n", 130);
                        printf("\n%d - %d = ", mess1, mess2);
                        limp2 = scanf("%d", &resp);
                        fflush(stdin); // Limpeza

                        if (limp2 == 0)

                            cinvalido(); // Opção Inválida para Conta

                    } while (limp2 == 0);

                    gdisub[vcont] = 2;
                    dif = 2;
                    vsuresp[vcont] = resp;
                    vsucerto[vcont] = mess1 - mess2;
                    csub++;

                    if (resp != (mess1 - mess2))
                    {

                        erros = suerro(fass1, fass2, mess1, mess2, diss1, diss2, erros, dif); // erros
                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos
                    }
                } // Fim - Subtração - Médio //

                if (odf == 3) // Subtração - Difícil //
                {
                    system("cls");
                    do
                    {

                        printf("Voc%c escolheu a dificuldade: Dif%ccil\n", 136, 161);

                        printf("\n\nA resposta da conta %c: \n", 130);
                        printf("\n%d - %d = ", diss1, diss2);
                        limp2 = scanf("%d", &resp);
                        fflush(stdin); // Limpeza

                        if (limp2 == 0)

                            cinvalido(); // Opção Inválida para Conta

                    } while (limp2 == 0);

                    gdisub[vcont] = 3;
                    dif = 3;
                    vsuresp[vcont] = resp;
                    vsucerto[vcont] = diss1 - diss2;
                    csub++;

                    if (resp != (diss1 - diss2))
                    {

                        erros = suerro(fass1, fass2, mess1, mess2, diss1, diss2, erros, dif); // erros
                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos
                    }
                } // Fim - Subtração - Difícil //

                if (odf == 4) // Voltar
                    system("cls");

                if (odf > 4 || odf < 1) // Opção Inválida

                    invalido(); // Opção inválida

            } while (odf > 4 || odf < 1);

            break; // Parar

        } // Fim do case 2 //

        case 3:
        {
            system("cls");
            do
            {

                odf = dificult(); // Escolha da Dificuldade

                if (odf == 1) // Multiplicação - Fácil //
                {
                    system("cls");
                    do
                    {

                        printf("Voc%c escolheu a dificuldade: F%ccil\n", 136, 160);

                        printf("\n\nA resposta da conta %c: \n", 130);
                        printf("\n%d x %d = ", famd1, famd2);
                        limp2 = scanf("%d", &resp);
                        fflush(stdin); // Limpeza

                        if (limp2 == 0)

                            cinvalido(); // Opção Inválida para Conta

                    } while (limp2 == 0);

                    gdimul[vcont] = 1;
                    dif = 1;
                    vmuresp[vcont] = resp;
                    vmucerto[vcont] = famd1 * famd2;
                    cmul++;

                    if (resp != (famd1 * famd2))
                    {

                        erros = muerro(famd1, famd2, memd1, memd2, dimd1, dimd2, erros, dif); // erros
                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos
                    }
                } // Fim - Multiplicação - Fácil //

                if (odf == 2) // Multiplicação - Médio //
                {
                    system("cls");
                    do
                    {

                        printf("Voc%c escolheu a dificuldade: M%cdio\n", 136, 130);

                        printf("\n\nA resposta da conta %c: \n", 130);
                        printf("\n%d x %d = ", memd1, memd2);
                        limp2 = scanf("%d", &resp);
                        fflush(stdin); // Limpeza

                        if (limp2 == 0)

                            cinvalido(); // Opção Inválida para Conta

                    } while (limp2 == 0);

                    gdimul[vcont] = 2;
                    dif = 2;
                    vmuresp[vcont] = resp;
                    vmucerto[vcont] = memd1 * memd2;
                    cmul++;

                    if (resp != (memd1 * memd2))
                    {

                        erros = muerro(famd1, famd2, memd1, memd2, dimd1, dimd2, erros, dif); // erros
                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos
                    }
                } // Fim - Multiplicação - Médio //

                if (odf == 3) // Multiplicação - Difícil //
                {
                    system("cls");
                    do
                    {

                        printf("Voc%c escolheu a dificuldade: Dif%ccil\n", 136, 161);

                        printf("\n\nA resposta da conta %c: \n", 130);
                        printf("\n%d x %d = ", dimd1, dimd2);
                        limp2 = scanf("%d", &resp);
                        fflush(stdin); // Limpeza

                        if (limp2 == 0)

                            cinvalido(); // Opção Inválida para Conta

                    } while (limp2 == 0);

                    gdimul[vcont] = 3;
                    dif = 3;
                    vmuresp[vcont] = resp;
                    vmucerto[vcont] = dimd1 * dimd2;
                    cmul++;

                    if (resp != (dimd1 * dimd2))
                    {

                        erros = muerro(famd1, famd2, memd1, memd2, dimd1, dimd2, erros, dif); // erros
                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos
                    }
                } // Fim - Multiplicação - Dificil //

                if (odf == 4) // Voltar
                    system("cls");

                if (odf > 4 || odf < 1) // Opção Inválida

                    invalido(); // Opção inválida

            } while (odf > 4 || odf < 1);

            break; // Parar

        } // Fim do case 3//

        case 4:
        {
            system("cls");
            do
            {

                odf = dificult(); // Escolha da Dificuldade

                if (odf == 1) // Divisão - Fácil //
                {
                    system("cls");
                    do
                    {

                        printf("Voc%c escolheu a dificuldade: F%ccil\n", 136, 160);

                        printf("\n\nDetermine a divis%co (N%cmero Inteiro) da conta a seguir: \n", 198, 163);
                        printf("\n%d / %d = ", fadv1, fadv2);
                        limp2 = scanf("%d", &resp);
                        printf("\nAgora indique o resto: ");
                        limp3 = scanf("%d", &resto);
                        fflush(stdin); // Limpeza

                        if (limp2 == 0 || limp3 == 0)

                            cinvalido(); // Opção Inválida para Conta

                    } while (limp2 == 0 || limp3 == 0);

                    gdidiv[vcont] = 1;
                    dif = 1;
                    vdiresp[vcont] = resp;
                    vdicerto[vcont] = fadv1 / fadv2;
                    vdirresp[vcont] = resto;
                    vdircerto[vcont] = fadv1 % fadv2;
                    cdiv++;

                    if (resp != (fadv1 / fadv2) || resto != fadv1 % fadv2)
                    {

                        erros = dierro(fadv1, fadv2, medv1, medv2, didv1, didv2, erros, dif); // erros
                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos
                    }
                } // Fim - Divisão - Fácil //

                if (odf == 2) // Divisão - Médio //
                {
                    system("cls");
                    do
                    {

                        printf("Voc%c escolheu a dificuldade: M%cdio\n", 136, 130);

                        printf(
                            "\n\nDetermine a divis%co (N%cmero Inteiro) da conta a seguir: \n", 198, 163);
                        printf("\n%d / %d = ", medv1, medv2);
                        limp2 = scanf("%d", &resp);
                        printf("\nAgora indique o resto: ");
                        limp3 = scanf("%d", &resto);
                        fflush(stdin); // Limpeza

                        if (limp2 == 0 || limp3 == 0)

                            cinvalido(); // Opção Inválida para Conta

                    } while (limp2 == 0 || limp3 == 0);

                    gdidiv[vcont] = 2;
                    dif = 2;
                    vdiresp[vcont] = resp;
                    vdicerto[vcont] = medv1 / medv2;
                    vdirresp[vcont] = resto;
                    vdircerto[vcont] = medv1 % medv2;
                    cdiv++;

                    if (resp != (medv1 / medv2) || resto != medv1 % medv2)
                    {

                        erros = dierro(fadv1, fadv2, medv1, medv2, didv1, didv2, erros, dif); // erros
                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos
                    }
                } // Fim - Divisão - Médio //

                if (odf == 3) // Divisão - Difícil //
                {
                    system("cls");
                    do
                    {

                        printf("Voc%c escolheu a dificuldade: Dif%ccil\n", 136, 161);

                        printf(
                            "\n\nDetermine a divis%co (N%cmero Inteiro) da conta a seguir: \n", 198, 163);
                        printf("\n%d / %d = ", didv1, didv2);
                        limp2 = scanf("%d", &resp);
                        printf("\nAgora indique o resto: ");
                        limp3 = scanf("%d", &resto);
                        fflush(stdin); // Limpeza

                        if (limp2 == 0 || limp3 == 0)

                            cinvalido(); // Opção Inválida para Conta

                    } while (limp2 == 0 || limp3 == 0);

                    gdidiv[vcont] = 3;
                    dif = 3;
                    vdiresp[vcont] = resp;
                    vdicerto[vcont] = didv1 / didv2;
                    vdirresp[vcont] = resto;
                    vdircerto[vcont] = didv1 % didv2;
                    cdiv++;

                    if (resp != (didv1 / didv2) || resto != didv1 % didv2)
                    {

                        erros = dierro(fadv1, fadv2, medv1, medv2, didv1, didv2, erros, dif); // erros
                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos
                    }
                } // Fim - Divisão - dificil //

                if (odf == 4) // Voltar
                    system("cls");

                if (odf > 4 || odf < 1) // Opção Inválida

                    invalido(); // Opção inválida

            } while (odf > 4 || odf < 1);

            break; // Parar

        } // Fim do case 4 //

        case 5: // Gabarito
        {
            system("cls");

            do
            {

                odg = gabarito(); // Menu do Gabarito

                if (odg == 1) // Soma
                {
                    system("cls");

                    do
                    {

                        if (csoma == 0)

                            printf("Nenhum n%cmero foi registrado no momento\n", 163); // O Jogador Ainda Não Jogou Nenhuma Vez

                        else
                            printf("\tSuas Respostas\t\tRespostas Certas\t\tDificuldade\n");

                        for (vcont1 = 0; vcont1 <= vcont; vcont1++)
                        {

                            if (vsresp[vcont1] != 0 || vscerto[vcont1] != 0)
                                printf("\n\t-> %d\t\t\t-> %d", vsresp[vcont1], vscerto[vcont1]);

                            if (gdisom[vcont1] == 1)
                                printf("\t\t\t\t-> F%ccil\n", 160);

                            if (gdisom[vcont1] == 2)
                                printf("\t\t\t\t-> M%cdio\n", 130);

                            if (gdisom[vcont1] == 3)
                                printf("\t\t\t\t-> Dif%ccil\n", 161);

                            else
                                printf("");
                        }

                        odg = voltar(); // Menu de Voltar

                    } while (odg != 5);
                    system("cls");
                    odg = 6;
                }

                if (odg == 2) // Subtração
                {
                    system("cls");

                    do
                    {

                        if (csub == 0)

                            printf("Nenhum n%cmero foi registrado no momento\n", 163); // O Jogador Ainda Não Jogou Nenhuma Vez

                        else
                            printf("\tSuas Respostas\t\tRespostas Certas\t\tDificuldade\n");

                        for (vcont1 = 0; vcont1 <= vcont; vcont1++)
                        {

                            if (vsuresp[vcont1] != 0 || vsucerto[vcont1] != 0)
                                printf("\n\t-> %d\t\t\t-> %d", vsuresp[vcont1], vsucerto[vcont1]);

                            if (gdisub[vcont1] == 1)
                                printf("\t\t\t\t-> F%ccil\n", 160);

                            if (gdisub[vcont1] == 2)
                                printf("\t\t\t\t-> M%cdio\n", 130);

                            if (gdisub[vcont1] == 3)
                                printf("\t\t\t\t-> Dif%ccil\n", 161);

                            else
                                printf("");
                        }

                        odg = voltar(); // Menu de Voltar

                    } while (odg != 5);
                    system("cls");
                    odg = 6;
                }

                if (odg == 3) // Multiplicação
                {
                    system("cls");

                    do
                    {

                        if (cmul == 0)

                            printf("Nenhum n%cmero foi registrado no momento\n", 163); // O Jogador Ainda Não Jogou Nenhuma Vez

                        else
                            printf("\tSuas Respostas\t\tRespostas Certas\t\tDificuldade\n");

                        for (vcont1 = 0; vcont1 <= vcont; vcont1++)
                        {

                            if (vmuresp[vcont1] != 0 || vmucerto[vcont1] != 0)
                                printf("\n\t-> %d\t\t\t-> %d", vmuresp[vcont1], vmucerto[vcont1]);

                            if (gdimul[vcont1] == 1)
                                printf("\t\t\t\t-> F%ccil\n", 160);

                            if (gdimul[vcont1] == 2)
                                printf("\t\t\t\t-> M%cdio\n", 130);

                            if (gdimul[vcont1] == 3)
                                printf("\t\t\t\t-> Dif%ccil\n", 161);

                            else
                                printf("");
                        }

                        odg = voltar(); // Menu de Voltar

                    } while (odg != 5);
                    system("cls");
                    odg = 6;
                }

                if (odg == 4) // Divisão
                {
                    system("cls");

                    do
                    {

                        if (cdiv == 0)
                            printf("Nenhum n%cmero foi registrado no momento\n", 163); // O Jogador Ainda Não Jogou Nenhuma Vez

                        else
                            printf("\tSuas Respostas\t\tRestos Digitados\tRespostas Certas\tRestos Certos\tDificuldade\n");

                        for (vcont1 = 0; vcont1 <= vcont; vcont1++)
                        {

                            if (vdiresp[vcont1] != 0 || vdicerto[vcont1] != 0)
                                printf("\n\t-> %d\t\t\t-> %d\t\t\t->%d\t\t\t->%d", vdiresp[vcont1], vdirresp[vcont1], vdicerto[vcont1], vdircerto[vcont1]);

                            if (gdidiv[vcont1] == 1)
                                printf("\t\t-> F%ccil\n", 160);

                            if (gdidiv[vcont1] == 2)
                                printf("\t\t-> M%cdio\n", 130);

                            if (gdidiv[vcont1] == 3)
                                printf("\t\t-> Dif%ccil\n", 161);

                            else
                                printf("");
                        }

                        odg = voltar(); // Menu de Voltar

                    } while (odg != 5);
                    system("cls");
                    odg = 6;
                }

            } while (odg > 5 || odg < 1);

            system("cls");

            break; // Parar

        } // Fim do case 5 //

        case 6: // Opção de Finalizar
        {
            system("cls");
            do
            {

                odf = final(); // Menu de Finalização

                if (odf == 1) // Fim do Jogo
                    fim();

                if (odf == 2) // Voltar para o Menu
                    system("cls");

                if (odf != 1 && odf != 2) // Opção Inválida

                    invalido(); // Opção inválida

            } while (odf != 1 && odf != 2);

            break; // Parar

        } // Quit Game //

        default: // Opção Inválida do Menu
        {
            invalido(); // Opção inválida

            break; // parar

        } // Fim do default //

        } // Fim Switch //

        vcont++; // Gravar na Próxima Coluna do Vetor

    } while (op != 6 || odf == 2); // Voltar para o Menu //
    return 0;

} // Fim do código //