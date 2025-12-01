#ifndef ALGORITMOS_H
#define ALGORITMOS_H

#include <string.h>
#include <time.h>
#include "tipos.h"

/**                            
 * @brief Função do algoritmo FIFO (First In First Out)
 * @param TabelaPagina -> Chama a struct table pagina
 * @param num_frames -> quantidade de frames a serem acessadas
 */
int algFIFO(TabelaPagina TP[], unsigned int num_frames);

/**                            
 * @brief Função do algoritmo CLOCK (Second Chance):
 * @param TabelaPagina -> Chama a struct table pagina
 * @param num_frames -> quantidade de frames a serem acessadas
 */
unsigned int algCLOCK(TabelaPagina TP[], unsigned int num_frames);

#endif