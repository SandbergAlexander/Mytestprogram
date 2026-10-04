// c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
 
/*

C-övningar

Nybörjare:

Skriv ut "Hello World!"
klar
Läs in två tal och skriv ut summan.

Räkna ut arean av en cirkel.

Kontrollera om ett tal är positivt, negativt eller noll.

Kontrollera om ett tal är jämnt eller udda.

Hitta det största av tre tal.

Skriv ut talen 1–100 med en loop.

Beräkna fakulteten (n!).

Skriv ut en multiplikationstabell.

Beräkna summan av talen 1–n.

Arrayer och strängar:

Hitta det största talet i en array.

Beräkna medelvärdet av en array.

Vänd en array.

Räkna antalet jämna tal i en array.

Sök efter ett specifikt tal i en array.

Räkna antalet vokaler i en sträng.

Vänd en sträng.

Kontrollera om en sträng är ett palindrom.

Funktioner och pekare:

Skriv en funktion som kontrollerar om ett tal är primtal.

Skriv en funktion som beräknar största gemensamma delare.

Byt värden mellan två variabler med pekare.

Skriv en egen version av strlen().

Skriv en egen version av strcpy().

Svårare:

Implementera linjär sökning.

Implementera binär sökning.

Implementera bubble sort.

Skapa en enkel miniräknare.

Skapa en menybaserad kontaktlista.

Läs och skriv data till en fil.

Skapa ett enkelt textbaserat spel.
*/
#include <stdio.h>
void skiva() {

    FILE* fil = fopen("data.bin", "wb");

    if (fil == NULL) {
        printf("Kunde inte öppna filen.\n");
        return 1;
    }

    int tal = 12345;

    fwrite(&tal, sizeof(int), 1, fil);

    fclose(fil);
}
void öpnna() {
    int tal;

    FILE* fil = fopen("data.bin", "rb");

    if (fil == NULL) {
        printf("Kunde inte öppna filen.\n");
        return 1;
    }

    fread(&tal, sizeof(int), 1, fil);

    printf("Talet är: %d\n", tal);

    fclose(fil);
 
}
int main()
{
 

    printf("Hello World\n");
    printf("Räkna ut arean av en cirkel.\n");
    printf("Det gör vi genom pi * 5 * 5\n");
    float pi = 3.14;
    float areanavencirkel = pi * 5 * 5;
    printf("Svaret är %f\n", areanavencirkel);

    return 0;
}
