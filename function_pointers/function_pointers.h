#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/**
 * array_iterator - bir fonksiyonu her dizi elemanına uygular
 * @array: tamsayı dizisi
 * @size: dizinin eleman sayısı
 * @action: uygulanacak fonksiyon işaretçisi
 *
 * Return: hiçbir şey döndürmez
 */
void array_iterator(int *array, size_t size,
		    void (*action)(int));

/**
 * print_elem - bir tamsayıyı yazdırır
 * @elem: yazdırılacak tamsayı
 *
 * Return: hiçbir şey döndürmez
 */
void print_elem(int elem);

#endif /* FUNCTION_POINTERS_H */

