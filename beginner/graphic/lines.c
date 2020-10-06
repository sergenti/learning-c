
// Visualizza la dimensione dello schermo e disegna delle linee che si intersecano

// #include <graphics.h> OUTDATED

int main(void)
{
    int bigX; /* coordinata x massima */

    int bigY; /* ccordinata y massima */

    bigX = getmaxwidth();  /* calcola coordinata x massima */
    bigY = getmaxheight(); /* calcola coordinata y massima */

    initwindow(bigX, bigY, "Full screen window - press a key to close");

    /* Disegna linee che si intersecano */

    line(0, 0, bigX, bigY); /* Disegna una linea bianca da (0,0) a (bigx, bigy) */

    setcolor("BLUE"); /* Canbia il colore in blu */

    line(bigX, 0, 0, bigY); /* Disegna una linea blu da (bigx, 0) a (o, bigy) */

    /* Visualizza la dimensione de la -inestra nella console */
    printf("Window size is %d X %d", bigX, bigY);

    // Chiudi la finestra alla fine

    getch();      /* attendi finché l'utente premc un tasto */
    closegraph(); /* chiudi la finestra */

    return (0);
}
