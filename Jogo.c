// Bibliotecas
// Libraries
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

int main() // Jogo Matemático // Math game
{

    SetConsoleTitle("Jogo Matematico"); // Colocar o Nome do Jogo no Console // Put the Game Name in the Console

    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // op        = Opções Início  
    // odf       = Opções de Dificuldade e Finalização 
    // odg       = Opção do Gabarito
    // op = Home Options
    // odf = Difficulty and Finishing Options
    // odg = Template Option
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // fass      = Número Aleatório Fácil - Soma e Subtração
    // mess      = Número Aleatório Médio - Soma e Subtração
    // diss      = Número Aleatório Dificil - Soma e Subtração
    // fass = Easy Random Number - Addition and Subtraction
    // mess = Average Random Number - Add and Subtract
    // diss = Difficult Random Number - Addition and Subtraction
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // famd      = Número Aleatório Fácil - Multiplicação
    // famd      = Número Aleatório Médio - Multiplicação
    // famd      = Número Aleatório Difícil - Multiplicação
    // famd = Easy Random Number - Multiplication
    // famd = Mean Random Number - Multiplication
    // famd = Hard Random Number - Multiplication
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // fadv      = Número Aleatório Fácil - Divisão
    // medv      = Número Aleatório Médio - Divisão
    // didv      = Número Aleatório Difícil - Divisão
    // resto     = Resto da Divisão
    // fadv = Easy Random Number - Division
    // medv = Mean Random Number - Division
    // didv = Hard Random Number - Division
    // remainder = Remainder of Division
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // resp      = Resposta
    // acertos   = Adiciona um Acerto para o Placar
    // erros     = Adiciona um Erro para o Placar
    // limp      = Limpeza
    // vcont     = Muda a Coluna do Vetor
    // dif       = Diz a Dificuldade que Foi Jogada
    // resp = Answer
    // hits = Adds a Hit to the Scoreboard
    // errors = Adds an Error to the Scoreboard
    // limp = Cleanup
    // vcont = Change Vector Column
    // dif = Tells the Difficulty Played
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // vscerto   = Vetor da Resposta Certa em Soma
    // vsresp    = Vetor da Resposta do Usuário em Soma
    // vscerto = Right Answer Vector in Sum
    // vsresp = Vector of User Response in Sum
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // vsucerto  = Vetor da Resposta Certa em Subtração
    // vsuresp   = Vetor da Resposta do Usuário em Subtração
    // vsucerto = Right Answer Vector in Subtraction
    // vsuresp = Subtraction User Response Vector
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // vmucerto  = Vetor da Resposta Certa em Multiplicação
    // vmuresp   = Vetor da Resposta do Usuário em Multiplicação
    // vmucerto = Right Answer Vector in Multiplication
    // vmuresp = Multiplication User Response Vector
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // vdicerto  = Vetor da Resposta Certa em Divisão
    // vdiresp   = Vetor da Resposta do Usuário em Divisão
    // vdicerto = Right Answer Vector in Division
    // vdiresp = User Response Vector in Division
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // vdircerto = Vetor do Resto Certo em Divisão
    // vdirresp  = Vetor da Resposta do Resto do Usuário em Divisão
    // vdircerto = Right Remainder Vector in Division
    // vdirresp = User Remainder Response Vector in Division
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // gdisom    = Grava a Dificuldade Jogada na Modalidade de Soma para Mostrar no Gabarito
    // gdisub    = Grava a Dificuldade Jogada na Modalidade de Subtração para Mostrar no Gabarito
    // gdimul    = Grava a Dificuldade Jogada na Modalidade de Multiplicação para Mostrar no Gabarito
    // gdidiv    = Grava a Dificuldade Jogada na Modalidade de Divisão para Mostrar no Gabarito
    // gdisom = Saves Difficulty Played in Sum Mode to Display in Feedback
    // gdisub = Saves Difficulty Played in Subtraction Mode to Display in Feedback
    // gdimul = Saves Difficulty Played in Multiply Mode to Display in Template
    // gdidiv = Saves Difficulty Played in Split Mode to Display in Template
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
    // csoma     = Mostra se o Jogador Já Jogou o Jogo da Soma
    // csub      = Mostra se o Jogador Já Jogou o Jogo da Subtração
    // cmul      = Mostra se o Jogador Já Jogou o Jogo da Multiplicação
    // cdiv      = Mostra se o Jogador Já Jogou o Jogo da Divisão
    // csoma = Shows if the Player has already played the Sum Game
    // csub = Shows if the Player has already played the Subtraction Game
    // cmul = Shows if the Player has already played the Multiplication Game
    // cdiv = Shows if the Player has already played the division game
    //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//

    loading(); // Carregamento do Jogo // Game Loading

    do
    {

        //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
        srand((unsigned)time(NULL));
        fass1 = 1 + (rand() % 100);
        fass2 = 1 + (rand() % 100);
        mess1 = 101 + (rand() % 400); // Gerando Números Aleatórios// // Generating Random Numbers //
        mess2 = 101 + (rand() % 400);
        diss1 = 501 + (rand() % 900);
        diss2 = 501 + (rand() % 900);
        //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
        famd1 = 1 + (rand() % 10);
        famd2 = 1 + (rand() % 10);
        memd1 = 10 + (rand() % 15); // Gerando Números Aleatórios// // Generating Random Numbers //
        memd2 = 10 + (rand() % 15);
        dimd1 = 20 + (rand() % 30);
        dimd2 = 20 + (rand() % 30);
        //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
        fadv1 = 10 + (rand() % 90);
        fadv2 = 1 + (rand() % 10);
        medv1 = 25 + (rand() % 225); // Gerando Números Aleatórios// // Generating Random Numbers //
        medv2 = 1 + (rand() % 25);
        didv1 = 50 + (rand() % 950);
        didv2 = 1 + (rand() % 50);
        //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//

        // Placar // Scoreboard
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

                odf = dificult(); // Escolha da Dificuldade // Choose Difficulty

                if (odf == 1) // Soma - Fácil // // Sum - Easy //
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

                            cinvalido(); // Opção Inválida para Conta // Invalid Option for Account

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

                        acertos = acerto(acertos); // Acertos // Hits
                    }
                } // Fim - Soma - Fácil // // End - Sum - Easy //

                if (odf == 2) // Soma - Médio // // Soma - Médio //
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

                            cinvalido(); // Opção Inválida para Conta // Invalid Option for Account

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

                        acertos = acerto(acertos); // Acertos // Hits
                    }
                } // Fim - Soma - Médio // // End - Sum - Middle //

                if (odf == 3) // Soma - Difícil // // Sum - Hard //
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

                            cinvalido(); // Opção Inválida para Conta // Invalid Option for Account

                    } while (limp2 == 0);

                    gdisom[vcont] = 3;
                    csoma++;
                    vsresp[vcont] = resp;
                    vscerto[vcont] = diss1 + diss2;
                    dif = 3;

                    if (resp != (diss1 + diss2))
                    {

                        erros = serro(fass1, fass2, mess1, mess2, diss1, diss2, erros, dif); // erros // errors
                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos // Hits
                    }
                } // Fim - Soma - Difícil //  
                  // End - Sum - Hard //

                if (odf == 4) // Voltar // Come back
                    system("cls");

                if (odf > 4 || odf < 1) // Opção Inválida // Invalid option

                    invalido(); // Opção inválida // Invalid option

            } while (odf > 4 || odf < 1);

            break; // Parar // Stop

        } // Fim do Case 1 // End of Case 1 //

        case 2:
        {
            system("cls");
            do
            {

                odf = dificult(); // Escolha da Dificuldade // Choose difficulty

                if (odf == 1) // Subtração - Fácil // 
                             // Subtraction - Easy //
                {
                    system("cls");
                    do
                    {

                        printf("Voc%c escolheu a dificuldade: F%ccil\n", 136, 160);

                        printf("\n\nA resposta da conta %c: \n", 130);
                        printf("\n%d - %d = ", fass1, fass2);
                        limp2 = scanf("%d", &resp);
                        fflush(stdin); // Limpeza // Clean

                        if (limp2 == 0)

                            cinvalido(); // Opção Inválida para Conta // Invalid Option for Account

                    } while (limp2 == 0);

                    gdisub[vcont] = 1;
                    dif = 1;
                    vsuresp[vcont] = resp;
                    vsucerto[vcont] = fass1 - fass2;
                    csub++;

                    if (resp != (fass1 - fass2))
                    {

                        erros = suerro(fass1, fass2, mess1, mess2, diss1, diss2, erros, dif); // erros // errors
                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos 
                                                  // Hits
                    }
                } // Fim - Subtração - Fácil // // End - Subtraction - Easy //

                if (odf == 2) // Subtração - Médio // // Subtraction - Average //
                {
                    system("cls");
                    do
                    {

                        printf("Voc%c escolheu a dificuldade: M%cdio\n", 136, 130);

                        printf("\n\nA resposta da conta %c: \n", 130);
                        printf("\n%d - %d = ", mess1, mess2);
                        limp2 = scanf("%d", &resp);
                        fflush(stdin); // Limpeza // Clean

                        if (limp2 == 0)

                            cinvalido(); // Opção Inválida para Conta // Invalid Option for Account

                    } while (limp2 == 0);

                    gdisub[vcont] = 2;
                    dif = 2;
                    vsuresp[vcont] = resp;
                    vsucerto[vcont] = mess1 - mess2;
                    csub++;

                    if (resp != (mess1 - mess2))
                    {

                        erros = suerro(fass1, fass2, mess1, mess2, diss1, diss2, erros, dif); // erros // errors
                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos // Hits
                    }
                } // Fim - Subtração - Médio // // End - Subtraction - Middle //

                if (odf == 3) // Subtração - Difícil // // Subtraction - Hard //
                {
                    system("cls");
                    do
                    {

                        printf("Voc%c escolheu a dificuldade: Dif%ccil\n", 136, 161);

                        printf("\n\nA resposta da conta %c: \n", 130);
                        printf("\n%d - %d = ", diss1, diss2);
                        limp2 = scanf("%d", &resp);
                        fflush(stdin); // Limpeza // Clean

                        if (limp2 == 0)

                            cinvalido(); // Opção Inválida para Conta // Invalid Option for Account

                    } while (limp2 == 0);

                    gdisub[vcont] = 3;
                    dif = 3;
                    vsuresp[vcont] = resp;
                    vsucerto[vcont] = diss1 - diss2;
                    csub++;

                    if (resp != (diss1 - diss2))
                    {

                        erros = suerro(fass1, fass2, mess1, mess2, diss1, diss2, erros, dif); // erros // errors

                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos // Hits
                    }
                } // Fim - Subtração - Difícil // // End - Subtraction - Hard //

                if (odf == 4) // Voltar // Come Back
                    system("cls");

                if (odf > 4 || odf < 1) // Opção Inválida 
                                       // Invalid option

                    invalido(); // Opção inválida 
                               // Invalid option 

            } while (odf > 4 || odf < 1);

            break; // Parar // Stop

        } // Fim do case 2 // 
          // End of case 2 //

        case 3:
        {
            system("cls");
            do
            {

                odf = dificult(); // Escolha da Dificuldade // Choose Difficulty

                if (odf == 1) // Multiplicação - Fácil // // Multiplication - Easy //
                {
                    system("cls");
                    do
                    {

                        printf("Voc%c escolheu a dificuldade: F%ccil\n", 136, 160);

                        printf("\n\nA resposta da conta %c: \n", 130);
                        printf("\n%d x %d = ", famd1, famd2);
                        limp2 = scanf("%d", &resp);
                        fflush(stdin); // Limpeza // Clean

                        if (limp2 == 0)

                            cinvalido(); // Opção Inválida para Conta // Invalid Option for Account

                    } while (limp2 == 0);

                    gdimul[vcont] = 1;
                    dif = 1;
                    vmuresp[vcont] = resp;
                    vmucerto[vcont] = famd1 * famd2;
                    cmul++;

                    if (resp != (famd1 * famd2))
                    {

                        erros = muerro(famd1, famd2, memd1, memd2, dimd1, dimd2, erros, dif); // erros // errors 
                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos // Hits
                    }
                } // Fim - Multiplicação - Fácil // 
                  // End - Multiplication - Easy //

                if (odf == 2) // Multiplicação - Médio // // Multiplication - Average //
                {
                    system("cls");
                    do
                    {

                        printf("Voc%c escolheu a dificuldade: M%cdio\n", 136, 130);

                        printf("\n\nA resposta da conta %c: \n", 130);
                        printf("\n%d x %d = ", memd1, memd2);
                        limp2 = scanf("%d", &resp);
                        fflush(stdin); // Limpeza // Clean

                        if (limp2 == 0)

                            cinvalido(); // Opção Inválida para Conta // Invalid Option for Account

                    } while (limp2 == 0);

                    gdimul[vcont] = 2;
                    dif = 2;
                    vmuresp[vcont] = resp;
                    vmucerto[vcont] = memd1 * memd2;
                    cmul++;

                    if (resp != (memd1 * memd2))
                    {

                        erros = muerro(famd1, famd2, memd1, memd2, dimd1, dimd2, erros, dif); // erros // errors
                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos // Hits
                    }
                } // Fim - Multiplicação - Médio // // End - Multiplication - Middle //

                if (odf == 3) // Multiplicação - Difícil // // Multiplication - Hard //
                {
                    system("cls");
                    do
                    {

                        printf("Voc%c escolheu a dificuldade: Dif%ccil\n", 136, 161);

                        printf("\n\nA resposta da conta %c: \n", 130);
                        printf("\n%d x %d = ", dimd1, dimd2);
                        limp2 = scanf("%d", &resp);
                        fflush(stdin); // Limpeza // Clean

                        if (limp2 == 0)

                            cinvalido(); // Opção Inválida para Conta // Invalid Option for Account

                    } while (limp2 == 0);

                    gdimul[vcont] = 3;
                    dif = 3;
                    vmuresp[vcont] = resp;
                    vmucerto[vcont] = dimd1 * dimd2;
                    cmul++;

                    if (resp != (dimd1 * dimd2))
                    {

                        erros = muerro(famd1, famd2, memd1, memd2, dimd1, dimd2, erros, dif); // erros // errors
                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos // Hits 
                    }
                } // Fim - Multiplicação - Dificil // // End - Multiplication - Hard //
 
                if (odf == 4) // Voltar // Come Back
                    system("cls");

                if (odf > 4 || odf < 1) // Opção Inválida // Invalid option

                    invalido(); // Opção inválida // Invalid option

            } while (odf > 4 || odf < 1);

            break; // Parar // Stop

        } // Fim do case 3// // End of case 3 //

        case 4:
        {
            system("cls");
            do
            {

                odf = dificult(); // Escolha da Dificuldade // Choose Difficulty

                if (odf == 1) // Divisão - Fácil // // Division - Easy //
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
                        fflush(stdin); // Limpeza // Clean

                        if (limp2 == 0 || limp3 == 0)

                            cinvalido(); // Opção Inválida para Conta // Invalid Option for Account

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

                        acertos = acerto(acertos); // Acertos // Hits
                    }
                } // Fim - Divisão - Fácil // 
                 // End - Division - Easy //

                if (odf == 2) // Divisão - Médio // // Division - Medium //
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

                            cinvalido(); // Opção Inválida para Conta // Invalid Option for Account

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

                        erros = dierro(fadv1, fadv2, medv1, medv2, didv1, didv2, erros, dif); // erros // erors
                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos // Hits
                    }
                } // Fim - Divisão - Médio // // End - Division - Middle //

                if (odf == 3) // Divisão - Difícil // // Division - Hard //
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
                        fflush(stdin); // Limpeza // Clean

                        if (limp2 == 0 || limp3 == 0)

                            cinvalido(); // Opção Inválida para Conta // Invalid Option for Account

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

                        erros = dierro(fadv1, fadv2, medv1, medv2, didv1, didv2, erros, dif); // erros // errors 
                    }
                    else
                    {

                        acertos = acerto(acertos); // Acertos // Hits
                    }
                } // Fim - Divisão - dificil // // End - Division - hard //

                if (odf == 4) // Voltar // Come Back
                    system("cls");

                if (odf > 4 || odf < 1) // Opção Inválida 
                                        // Invalid option

                    invalido(); // Opção inválida 
                               // Invalid option

            } while (odf > 4 || odf < 1);

            break; // Parar // Stop

        } // Fim do case 4 // 
         // End of case 4 //

        case 5: // Gabarito // Feedback
        {
            system("cls");

            do
            {

                odg = gabarito(); // Menu do Gabarito 
                                  // Feedback Menu

                if (odg == 1) // Soma // Sum
                {
                    system("cls");

                    do
                    {

                        if (csoma == 0)

                            printf("Nenhum n%cmero foi registrado no momento\n", 163); // O Jogador Ainda Não Jogou Nenhuma Vez // The Player Hasn't Played Once

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

                        odg = voltar(); // Menu de Voltar // Back Menu

                    } while (odg != 5);
                    system("cls");
                    odg = 6;
                }

                if (odg == 2) // Subtração // Subtraction 
                {
                    system("cls");

                    do
                    {

                        if (csub == 0)

                            printf("Nenhum n%cmero foi registrado no momento\n", 163); // O Jogador Ainda Não Jogou Nenhuma Vez 
                                                                                       // The Player Hasn't Played Once

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

                        odg = voltar(); // Menu de Voltar // Back Menu

                    } while (odg != 5);
                    system("cls");
                    odg = 6;
                }

                if (odg == 3) // Multiplicação // Multiplication
                {
                    system("cls");

                    do
                    {

                        if (cmul == 0)

                            printf("Nenhum n%cmero foi registrado no momento\n", 163); // O Jogador Ainda Não Jogou Nenhuma Vez // The Player Hasn't Played Once
 
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

                        odg = voltar(); // Menu de Voltar // Back Menu

                    } while (odg != 5);
                    system("cls");
                    odg = 6;
                }

                if (odg == 4) // Divisão // Division
                {
                    system("cls");

                    do
                    {

                        if (cdiv == 0)
                            printf("Nenhum n%cmero foi registrado no momento\n", 163); // O Jogador Ainda Não Jogou Nenhuma Vez // The Player Hasn't Played Once

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

                        odg = voltar(); // Menu de Voltar // Back Menu

                    } while (odg != 5);
                    system("cls");
                    odg = 6;
                }

            } while (odg > 5 || odg < 1);

            system("cls");

            break; // Parar // Stop

        } // Fim do case 5 // // End of case 5 //

        case 6: // Opção de Finalizar // End option
        {
            system("cls");
            do
            {

                odf = final(); // Menu de Finalização // End menu


                if (odf == 1) // Fim do Jogo // End of the game
                    fim();

                if (odf == 2) // Voltar para o Menu // Return to the Menu
                    system("cls");

                if (odf != 1 && odf != 2) // Opção Inválida // Invalid option

                    invalido(); // Opção inválida // Invalid option

            } while (odf != 1 && odf != 2);

            break; // Parar // Stop

        } // Quit Game // 
         // Quit Game //

        default: // Opção Inválida do Menu // Invalid Menu Option
        {
            invalido(); // Opção inválida // Invalid Option

            break; // parar // stop

        } // Fim do default // // end of default //

        } // Fim Switch // // End Switch //

        vcont++; // Gravar na Próxima Coluna do Vetor // Write to Next Column of Vector

    } while (op != 6 || odf == 2); // Voltar para o Menu // // Return to the Menu //
    return 0;

} // Fim do código // // End of code //
