#include <stdio.h>
#include <stdlib.h>

typedef struct jugador {
    char nombre[10];
    int checkpoint;
    int arma;
};

int guardado(jugador[]);
void limpiarBuffer();
int leerDatos(jugador[]);
void funcionInicio(jugador[]);
void ruta1(jugador[]);
void index(jugador[]);
void entrenamientoRuta1(jugador []);
void entrenamientoRutaV(jugador[]);

int opc;

void probarJuego(jugador  player[1]);

int main()
{
    jugador player[1];
    player[0].checkpoint = 0;
    probarJuego(player);
    
}

void probarJuego(jugador  player[])
{
    do {
        index(player);
    } while ((player[0].checkpoint !=3)&&(player[0].checkpoint!=202));
}//Termina en 3 y 202

int guardado(jugador player[]) {
    FILE* archivo;
    fopen_s(&archivo, "juego.txt", "w");
    fwrite(player, sizeof(jugador), 1, archivo);
    fclose(archivo);
    return 0;
}
void limpiarBuffer() {
    while (getchar() != '\n');
}
int leerDatos(jugador player[]) {
    FILE* archivo;
    fopen_s(&archivo, "juego.txt", "r");
    fread(player, sizeof(jugador), 1, archivo);
    fclose(archivo);
    return 0;
}
//checkpoint 0
void funcionInicio(jugador player[]){
    printf_s("Mi nombre es (Ingresa tu nombre): ");
    gets_s(player[0].nombre, 10);
    printf_s("Hoy es mi primer dia como aprendiz de de paladin en la gran ciudad de Arclight\n\n");
    system("pause");
    system("cls");
    printf_s("(Este juego es una aventura de texto, para avanzar tendras que escribir el numero de opcion correspondiente)");
    do {
        printf("\n\n(Que deseas saber ? )\n1.Que es un paladin ? \n2.Que es Arclight ? \n3.Que hace un paladin ?");
        printf_s("\n4.Continuar\n\nTu respuesta: ");
        scanf_s("%i", &opc);
        system("cls");
        switch (opc) {
        case 1:
            printf_s("Los paladines son guerreros benditos por un dios en especifico,\n");
            printf("peleamos en su nombre para proteger los ideales que profesan\n\n");
            system("pause");
            system("cls");
            break;
        case 2:
            printf_s("Ciudad que fue fundada por los elegidos de los dioses de la luz,\n");
            printf_s("solo los guerreros mas justos y puros de corazon pueden tomar el pacto de la luz\n");
            printf_s("con el fin de proteger a los debiles y erradicar la maldad que ronda por el mundo.\n\n");
            system("pause");
            system("cls");
            break;
        case 3:
            printf_s("Principalmente cumple con la voluntad del dios con el cual tiene pacto,\n");
            printf_s("en el caso de los paladines de la luz luchamos para proteger a quien lo necesite\n");
            printf_s("y erradicamos la obscuridad para evitar que lastime a los que no pueden defenderse.\n\n");
            system("pause");
            system("cls");
            break;
        case 4:
            system("cls");
            break;
        default:
            printf_s("(Esta no es una opcion valida)");
            break;
        }

    } while (opc != 4);
    player[0].checkpoint = 1;
}
//checpoint 1
void ruta1(jugador player[]) {
    do {
        printf_s("Nuestro primer dia de entrenamiento se llevara a cabo detras del templo central\n");
        printf_s("de la ciudad,tengo una hora disponible.\n\n");
        printf_s("Que deberia hacer?\n1.Buscar a alguien para conversar.\n2.Comprar comida\n3.Pide un deseo\n\n");
        printf_s("Tu respuesta: ");
        scanf_s("%i", &opc);
        system("cls");
        switch (opc) {
        case 1:
            printf_s("Te acercas a unos chicos que se encontraban sentados en la plaza,parece que\n");
            printf_s("hablan sobre el entrenamiento que habra mas tarde, asi que, es probable que\n");
            printf_s("se vean a menudo durante el entrenamiento.\n\n");
            system("pause");
            system("cls");
            printf_s("-Hola!, mi nombre es %s-\n", player[0].nombre);
            printf_s("-Yo soy Veronica,mucho gusto-\n");
            printf_s("-Yo soy Jeriko-\n");
            printf_s("Tras una larga charla los 3 jovenes caminaron juntos hasta el punto de encuentro.\n\n");
            system("pause");
            system("cls");
            player[0].checkpoint = 2;
            break;
        case 2:
            printf_s("*Muero de hambre y aun tengo tiempo, pasare a comprar comida antes del entrenamiento*\n");
            printf_s("La tienda de viveres estaba mas lejos de lo que esperabas,por lo que solo compras algunos\n");
            printf_s("panes y corriste al punto de encuentro.\n");
            printf_s("Llegas con unos minutos de sobra y te dispones a comer,pero antes de dar el primer mordisco\n");
            printf_s("Escuchas a una chica y un chico a tu lado quejarse de hambre y decides compartir tus alimentos\n\n");
            system("pause");
            system("cls");
            printf_s("-Me llamo %s-\n", player[0].nombre);
            printf_s("-Mucho gusto, soy Veronica-Dice la chica tras un gran trago de jugo\n");
            printf_s("-Yo soy Jeriko-Dice el chico aun con comida en la boca\n");
            printf_s("Tras terminar de comer se levantan y van juntos a entrenar\n\n");
            system("pause");
            system("cls");
            player[0].checkpoint = 2;
            break;
        case 3:
            printf_s("Te acercas a la fuente que esta en el centro de la plaza en la que te encuentras\n");
            printf_s("*Deseo que Arclight prospere y que los dioses siempre nos proejan* Piensas mientras\n");
            printf_s("arrojas tu moneda.\n");
            printf_s("-Deseo que el chico que arrojo esta moneda me compre un helado-Escuchas detras de ti\n");
            printf_s("Seguido por el sonido de la moneda cayendo al agua\n");
            printf_s("Al volver la vista atras,observas a una chica pelirroja parada junto a un joven alto\n");
            printf_s("y moreno.\n\n");
            system("pause");
            system("cls");
            printf_s("-Soy Veronica y tal parece que me debes un helado-Dice la chica con una voz dulce\n");
            printf_s("-Soy Jeriko-Agrega el joven sonriente\n");
            printf_s("-Yo soy %s,Y supongo que no puedo negarme, pero se me hace algo tarde ahora-\n", player[0].nombre);
            printf_s("lo dejamos para despues?-\n");
            printf_s("La chica asiente sonriente y se encaminan juntos al entrenamiento.\n\n");
            system("pause");
            system("cls");
            player[0].checkpoint = 201;
            break;
        default:
            printf_s("Esta no es una opcion valida\n");
            break;
        }
    } while ((opc < 1) || (opc > 3));
}//
//Recuerda actualizar index al terminar una ruta.Actual 2 y 201.
void index(jugador player[]) {
    switch (player[0].checkpoint) {
    case 0:
        funcionInicio(player);
        break;
    case 1:
        ruta1(player);
        break;
    case 2:
        entrenamientoRuta1(player);
        break;
    case 201:
        entrenamientoRutaV(player);
        break;
    }
}
//checkpoint 2
void entrenamientoRuta1(jugador player[]){
    do {
        printf_s("Comienza el primer dia de entrenamiento, todos parecen ser bastante jovenes,por lo que\n");
        printf_s("fue facil identificar al distinguir al maestro, un hombre de alto que portaba una\n");
        printf_s("imponente armadura blanca con detalles dorados alrededor de las hombreras.\n");
        printf_s("-Yo soy el Capitan Gael, sere su instructor encargado durante su entrenamiento,y asi sera\n");
        printf_s("hasta que ustedes sean dignos de realizar el pacto de la luz-\n\n");
        system("pause");
        system("cls");
        printf_s("El capitan extendio su brazo frente a el, su palma se ilumino a la vez que de el suelo \n");
        printf_s("emergian un par de bloques de marmol sobre un bloque hay multiplles armas.\n");
        printf_s("-Estos bloques contienen armas, las armas que los paladines hemos usado por siglos,usenlas.\n\n");
        printf_s("*Que arma deberia elegir para practicar?*.\n1.Espada\n2.Maza.\n\n");
        printf_s("Tu respuesta: ");
        scanf_s("%i", &opc);
        system("cls");
        switch (opc) {
        case 1:
            printf_s("Al tomar tu arma escuchas la voz de tu maestro -la espada es un arma que requiere \n");
            printf_s("destreza y concentracion, la mayor ventaja de la espada son los golpes fulminantes que\n");
            printf_s("puedes dar a tus enemigos, ya sea de forma cortante o perforante-\n\n");
            printf_s("Despues de un par de instrucciones del capitan logras moverte gracilmente con el arma, \n");
            printf_s("casi como si llevaras practicando hace mucho.\n\n");
            player[0].arma = 1;
            system("pause");
            system("cls");
            player[0].checkpoint = 3;
            break;
        case 2:
            printf_s("Al tomar tu arma escuchas la voz de tu maestro -El mazo es un arma que requiere de una gran\n");
            printf_s("fuerza, su mayor ventaja reside en los potentes golpes aturdidores que puede asestar a los \n");
            printf_s("enemigos pudiendo inhabilitar grandes enemigos de un golpe certero-\n\n");
            printf_s("Despues de un rato practicando con el mazo logras destruir grandes troncos con los golpes \n");
            printf_s("devastadores que ahora eres capaz de propinar.\n\n");
            player[0].arma = 2;
            system("pause");
            system("cls");
            player[0].checkpoint = 3;
            break;
        default:
            printf_s("Esta no es una opcion valida\n");
            break;
        }
    } while ((opc < 1) || (opc > 2));
}
//checkpoint 201
void entrenamientoRutaV(jugador player[]) {
    do {
        printf_s("Comienza el primer dia de entrenamiento, todos parecen ser bastante jovenes,por lo que\n");
        printf_s("fue facil identificar al distinguir al maestro, un hombre de alto que portaba una\n");
        printf_s("imponente armadura blanca con detalles dorados alrededor de las hombreras.\n");
        printf_s("-Yo soy el Capitan Gael, sere su instructor encargado durante su entrenamiento,y asi sera\n");
        printf_s("hasta que ustedes sean dignos de realizar el pacto de la luz-\n\n");
        system("pause");
        system("cls");
        printf_s("El capitan extendio su brazo frente a el, su palma se ilumino a la vez que de el suelo \n");
        printf_s("emergian un par de bloques de marmol sobre un bloque hay multiplles armas.\n");
        printf_s("-Estos bloques contienen armas, las armas que los paladines hemos usado por siglos,usenlas.\n\n");
        printf_s("*Que arma deberia elegir para practicar?*.\n1.Espada\n2.Maza.\n\n");
        printf_s("Tu respuesta: ");
        scanf_s("%i", &opc);
        system("cls");
        switch (opc) {
        case 1:
            printf_s("Al tomar tu arma escuchas la voz de tu maestro -la espada es un arma que requiere \n");
            printf_s("destreza y concentracion, la mayor ventaja de la espada son los golpes fulminantes que\n");
            printf_s("puedes dar a tus enemigos, ya sea de forma cortante o perforante-\n\n");
            printf_s("Despues de un par de instrucciones del capitan logras moverte gracilmente con el arma, \n");
            printf_s("casi como si llevaras practicando hace mucho.\n\n");
            player[0].arma = 1;
            system("pause");
            system("cls");
            player[0].checkpoint = 202;
            break;
        case 2:
            printf_s("Al tomar tu arma escuchas la voz de tu maestro lEl mazo es un arma que requiere de una gran\n");
            printf_s("fuerza, su mayor ventaja reside en los potentes golpes aturdidores que puede asestar a los \n");
            printf_s("enemigos pudiendo inhabilitar grandes enemigos de un golpe certero-\n\n");
            printf_s("Despues de un rato practicando con el mazo logras destruir grandes troncos con los golpes \n");
            printf_s("devastadores que ahora eres capaz de propinar.\n\n");
            player[0].arma = 2;
            system("pause");
            system("cls");
            player[0].checkpoint = 3;
            break;
        default:
            printf_s("Esta no es una opcion valida\n");
            break;
        }
    } while ((opc < 1) || (opc > 2));
}
