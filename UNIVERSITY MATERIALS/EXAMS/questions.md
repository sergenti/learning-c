#####  Che cosa si intende per puntatore? A cosa serve?


##### Fare un esempio per dichiarare:
- un puntatore ad una lista. Specificare anche la struttura base della lista in modo che contenga
solo un campo di tipo intero.
- un puntatore ad una variabile char


##### Dato c, puntatore di tipo char:
- allocare la memoria necessaria per la variabile puntata da c (malloc)
- riempire la memoria puntata da c con il carattere ’a’



##### Spiegare che cosa si intende per iterazione e per ricorsione.
Quando e necessario, o conveniente usarle? In generale e più efficiente l’iterazione o la ricorsione?

##### Implementare una semplice funzione di esempio sia in versione iterativa che in versione ricorsione?



##### Illustrare la differenza tra linguaggio compilato e linguaggio interpretato

##### Riportare la porzione di codice in C e Matlab, per effettuare un ciclo for che sommi i primi 100 numeri.

```matlab
% MATLAB
c = 0;
for (i=1:1:100)
c = c+i;
end
```

```c
// C
int i;
int c = 0;
for (i=0; i<=100; i++)
c = c+1;
```



##### Si descriva brevemente le differenze tra la memoria centrale e la memoria di massa diun calcolatore. Si spieghi inoltre perché un calcolatore necessita di entrambe. (3 punti)


##### Illustrre le caratteristiche principali della memoria del calcolatore. In particolare spiegare:
- La differenza tra memoria centrale e memoria di massa
- Che cosa sono la memoria RAM e la memoria ROM; che ruolo hanno in un sistema di elaborazione, che cosa le differenzia.

##### Spiegare cosa si intende per allocazione dinamica della memoria. Quando e necessaria? 
Riportare un esempio di allocazione dinamica (ANSI C) per un array con dimensione N (N letto mediante una scanf).

##### Cosa sono i dangling reference (puntatori ciondolanti)? Riportarne un esempio.