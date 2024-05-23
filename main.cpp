//#include <iostream>
#include <stdio.h>
#include "queue.h"

void menu(void)
{
    printf("\n");
    printf("1 - Dodaj liczbe do kolejki (add)\n");
    printf("2 - Odczytaj pierwsza wartosc z kolejki (first)\n");
    printf("3 - Usun wartosc z z kolejki(remove)\n");
    printf("4 - Sprawdz czy kolejka jest pusty\n");
    printf("5 - Sprawdz czy kolejka jest pelny\n");
    printf("6 - Koniec programu\n");
    printf("\n");
}

int main()
{
    int temp = 0;
    int option = 0;
    printf("Kolejka - implementacja w tablicy statycznej\n");
    while (true)
    {
        menu();
        scanf("%d", &option);


        switch (option)
        {
            case 1:
                if ( !isQueueFull() ){
                    printf("Podaj wartosc: ");
                    scanf("%d", &temp);
                    add(temp);
                }
                else {
                    printf("operacja niedozwolona Kolejka pelna!!!\n\n");
                }

                break;

            case 2:
                if (!isQueueEmpty()) {
                    temp = first();
                    printf("Odczytana wartosc: %d", temp);
                }
                else {
                    printf("operacja niedozwolona Kolejka pusta!!!\n\n");
                }

                break;

            case 3:
                if (!isQueueEmpty()) {
                    temp = remove();
                    printf("Odczytana wartosc: %d", temp);
                }
                else {
                    printf("operacja niedozwolona Kolejka pusta!!!\n\n");
                }
                break;

            case 4:
                if (isQueueEmpty()) {
                    printf("Kolejka jest pusta.\n");
                }
                else {
                    printf("Kolejka nie jest pusta.\n");
                }
                break;

            case 5:
                if (isQueueFull()) {
                    printf("Kolejka jest pelna.\n");
                }
                else {
                    printf("Kolejka nie jest pelna.\n");
                }
                break;

            case 6:
                //zakonczenie programu
                return 0;

            default:
                printf("Wybierz wlasciwa opcje.\n\n");
                break;
        }
    }

    return 0;
}
