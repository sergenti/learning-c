
// /*

// Si scriva una funzione, che ricevuto in ingresso una stringa DNA e una stringa PROT,
// verifichi se la proteina PROT è contenuta nel DNA fornito o meno.

// La funzione deve restituire valore 1 se la proteina è presente, 0 altrimenti unitamente all'indice nella stringa DNA ove l'occorrenza inizia.

// La stringa può ricevere in ingresso anche parametri accessori.

// Non è possibile usare le funzioni della libreria string.h: la ricerca va eseguita mediante
// cicli e condizioni.

// */

// #include <stdio.h>
// #include <string.h>

// // STRCMP could be implemented in this way
// int stringComparison(char *s1, char *s2, int length)
// {

//     for (int i = 0; i < length; i++)
//     {
//         if (s1[i] != s2[i])
//             return 0;
//     }

//     return 1;
// }

// int proteinInDNA(char *DNA, int lengthDNA, char *protein, int lengthProtein)
// {
//     int in = 0;
//     int out = lengthProtein + 1;
//     char DNATriple[lengthProtein + 1];

//     int isProteinIn = 0;

//    while [if (lengthProtein > lengthDNA)
//             isProteinIn = 0;

//         for (int i = 0; in < out; i++, in++) {
//             DNATriple[i] = DNA[in];
//         }

//         isProteinIn = stringComparison(DNATriple, protein, lengthProtein) ? 1 : 0;
//     ]
// }

// int main()
// {
//     char DNA[] = "ATGCGGTAAAATGCA";

//     char protein[] = "AAAAT";
//     int lengthProtein = strlen(protein);

//     proteinInDNA(DNA, protein, lengthProtein);
// }
