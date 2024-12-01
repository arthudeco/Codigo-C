#include <stdio.h>
#include <stdlib.h>

//Função para limpar a tela dependendo do sistema operacional
void limpartela() {
    #ifdef _WIN32
    system("cls"); // Limpa a tela no Windows
    #elif defined(_APPLE_)
    system("clear"); // Limpa a tela no macOS
    #else
    system("clear"); // Limpa a tela em sistemas Unix-like (Linux, etc.)
    #endif
}

//funcao para condiçoes do codigo
void exibirregras() {

    printf("-------------------------------------------------\n");
    printf("          REGRINHAS DO CODIGO       \n");
    printf("          -------------------                 \n");
    printf(" \n");
    printf("1. Digite apenas em minusculo. \n");
    printf(" \n");
    printf("2. Responda da maneira indicada na mensagem. \n");
    printf(" \n");
    printf("3. Responda logo apos a printagem da tela. \n");
    printf(" \n");
    printf("4. Divirta-se.\n");
    printf("--------------------------------------------------\n");
    printf(" \n");
    printf("PRESSIONE 'ENTER' PARA O INICIO \n");
    printf(" \n");
    printf("==================================================\n");

}

//funcao para scanear nome
void identificarnome(char nome[30]){

    printf("Ooi, qual o seu nome: ");
    scanf(" %s", nome);
    getchar();

    printf("Entao, voce eh o %s.\n", nome);
    getchar();
    limpartela();

    printf("Bom. \n");
    getchar();
    limpartela();

    printf("Isso eh bom. \n");

    getchar();
    limpartela();
}

//funçao para saber de mecanica
void loopmec(char respmec){
    printf("=====\n");
    printf("Voce\n");
    getchar();
    limpartela();

    printf("=============\n");
    printf("Voce da tela\n");

    getchar();
    limpartela();
    printf("==========================\n");
    printf("Que esta vendo esse codigo\n");

    getchar();
    limpartela();
    printf("==========================================\n");
    printf("Voce cursa engenharia mecanica [s/n]: ");

    while (1) {
        scanf("%c", &respmec); // Lê a resp

        if (respmec == 's') {
            getchar();
            limpartela();
            printf("uaaau, esse eh um curso mega hiper super foda\n");
            getchar();
            printf("Que bom que esse codigo eh para a pessoa certa.\n");
            getchar();
            limpartela();
            break; // Sai do loop quando a resp estiver correta

        } else {
            printf("Sinto muito, esse codigo eh para outra pessoa.\n");
            getchar();
        }
    }
}

//funçao para primeiro loop
void loopcic(char respcic){
    printf("======================================================================\n");
    printf("samuel, Voce conhece alguem que faz Ciencia da Computacao? [s/n]: ");
    while (1) {
        scanf("%c", &respcic); // Lê a senha do usuário

        if (respcic == 's') {

            getchar();
            limpartela();
            printf("--------\n");
            printf("Otimo!\n");

            getchar();
            limpartela();

            printf("--------------------\n");
            printf("Otimo saber disso!\n");
            getchar();
           limpartela();
            break; // Sai do loop quando a resp estiver correta

        } else {
            printf("Conhece sim, tente de novo!\n");
            getchar();


        }
    }
}

//loop até a pessoa disser legal
void looplegal(char respchata) {
    printf("==================================================================\n");
    printf("samuel, Essa pessoa que faz CIC, eh alguem muito legal? [s/n]: ");
     while (1) {
        scanf("%c", &respchata); // Lê a resp

        if (respchata == 's') {

            getchar();
            limpartela();
            printf("-----------------\n");
            printf("Muito bom saber!\n");

            getchar();
            limpartela();


            break; // Sai do loop quando a resp estiver correta

        } else {
            printf("eh legal sim, pode digitar a verdade!\n");
            getchar();

        }
    }
}

//loop ate a pessoa dizer incrivel
void loopmuitolegal(char respmuitolegal) {
    printf("====================================================\n");
    printf("Mas essa pessoa eh muito incrivel mesmo? [s/n]: ");
     while (1) {
        scanf("%c", &respmuitolegal); // Lê a resp

        if (respmuitolegal == 's') {
            getchar();
            limpartela();
            printf("----------------------------\n");
            printf("Feliz que saiba disso!\n");
            getchar();


            printf("Voce tambem eh bastante <3\n");
            getchar();
            limpartela();

            break; // Sai do loop quando a resp estiver correta

        } else {
            printf("resposta erradissima!!!\n");
            getchar();

        }
    }
}

//comentario de resposta
void loopfofo(){
    printf("Bom, ja que voce entendeu que a pessoa que voce conhece:\n");
    getchar();
    printf("eh incrivel\n");
    getchar();
    printf("eh maravilhosa\n");
    getchar();
    printf("eh inteligente\n");
    getchar();
    printf("Ela tambem te acha isso tudo e muito mais!\n");
    getchar();
    limpartela();
}

//loop para perguntar de quem fez o codigo
void loopperguntanome(char respnomeart){
    printf("=================================================================\n");
    printf("a pessoa que fez esse codigo, se chama arthur, nao eh[s/n]: ");
    while (1) {
        scanf("%c", &respnomeart); // Lê a resp

        if (respnomeart == 's') {
            getchar();
            printf("Ouvi dizer que ele esta comecando a fazer programas\n");
            getchar();
            printf("Quero dizer...\n");
            getchar();
            printf("programas de computador\n");
            getchar();
            limpartela();
            break; // Sai do loop quando a resp estiver correta

        } else {
            printf("Apenas existe uma pessoa no mundo com demasiadas caracteristicas.\n");
            getchar();

        }
    }
}

//loop para falar que gosta do usuario
void loopaskmusic(char respmusic){
    printf("---------------------------------------------\n");
    printf("O arthur me disse que gosta de um garoto\n");
    getchar();
    printf("Que se chama samuel\n");
    getchar();
    printf("Que faz engenharia mecanica\n");
    getchar();
    printf("E que gosta de lana, clairo e mais.\n");
    getchar();
    printf("Nao eh verdade[s/n]? ");


    while (1) {
        scanf("%c", &respmusic); // Lê a resp

        if (respmusic == 's') {
            getchar();
            limpartela();
            printf("Que incrivel\n");
            getchar();
            printf("Voce realmente tem um otimo gosto musical.\n");
            getchar();
            limpartela();
            break; // Sai do loop quando a resp estiver correta

        } else {
            printf("gosta sim, para de mentir.\n");
            getchar();

        }
    }
}

//loop do namoro
void loopasknamoro(char respnamoro){
    printf("-------\n");
    printf("samuel\n");
    getchar();
    limpartela();

    printf("------------------------------------\n");
    printf("O arthur quer te fazer uma pergunta\n");
    getchar();
    limpartela();

    printf("-------------------\n");
    printf("ele quer saber se\n");
    getchar();
    limpartela();

    printf("------------\n");
    printf("Voce quer\n");
    getchar();
    limpartela();

    printf("------------\n");
    printf("voce sabe\n");
    getchar();
    limpartela();

    printf("----------------------\n");
    printf("nao me faz perguntar\n");
    getchar();
    limpartela();

    printf("---------------------\n");
    printf("eu to com vergonha\n");
    getchar();
    limpartela();

    printf("---\n");
    printf("ai\n");
    getchar();
    limpartela();

    printf("--------\n");
    printf("ta bom\n");
    getchar();
    limpartela();

    printf("---------\n");
    printf("eu falo\n");
    getchar();
    limpartela();

    printf("=======\n");
    printf("Samuel\n");
    getchar();
    limpartela();

    printf("<3<3<3\n");
    printf("Voce quer namorar comigo[s/n]? \n");

    while (1) {
        scanf("%c", &respnamoro); // Lê a resp

        if (respnamoro == 's') {
            getchar();
            printf("uhhuuuuullll\n");
            getchar();
            limpartela();
            printf("estamos namorando.\n");
            getchar();
            limpartela();
            printf("acesse esse link\n");
            printf("https://www.youtube.com/watch?v=L9HYJbe9Y18 \n");
            getchar();
            limpartela();

            printf("BAGS - CLAIRO\nEvery second counts\ I dont wanna talk to you anymore and\nAll these little games\nYou can call me by the name I gave you\Every minute counts\nI Can you figure me out\nCan you see me Im waiting for the right time\nI cant read you, but if you want the pleasure's all mine\nCan you see me using everything to hold back\nI guess this could be worse\nWalkin out the door with your bags\nWalkin out the door with your bags\nWalkin out the door with your bags\nWalkin out the door with your bags\nPour your glass of wineMitchell told me I should be just fine, yeah\nCases under the bed\nSpill it open let it rush to my head\nI dont wanna be forward I don't wanna cut corners\nSavor this with everything I have inside of me\nIm not the type to run I know that we're having fun\nBut whats the rush Kissing then my cheeks are so flushed\nTell you how I felt\nSugar coated melting in your mouth\nPardon my emotions\nI should probably keep it all to myself\nKnow youd make fun of me\nKnow youd make fun of me\nKnow youd make fun of me\nKnow youd make fun of me\nCan you see me Im waiting for the right time\nI cant read you but if you want, the pleasures all mine\nCan you see me using everything to hold back\nI guess this could be worse\nWalkin out the door with your bags\nWalkin out the door with your bags\nWalkin out the door with your bags\nWalkin out the door with your bags\n");


            break; // Sai do loop quando a resp estiver correta

        } else {
            printf("voce vai namorar sim!\n");
            printf("responde certo!\n");
            getchar();

        }
    }
}






int main() {
    char respcic, nome[30], respchata, respmuitolegal, respnomeart, respmec, respmusic, respnamoro;

    exibirregras();

    getchar();
    limpartela();

    identificarnome(nome);

    loopmec(respmec);

    loopcic(respcic);

    looplegal(respchata);

    loopmuitolegal(respmuitolegal);

    loopfofo();

    loopperguntanome(respnomeart);

    loopaskmusic(respmusic);

    loopasknamoro(respnamoro);

    printf("...\n");

return 0;
}
