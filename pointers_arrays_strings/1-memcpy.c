#include "main.h"

/**
 * simple_print_buffer - Affiche un tampon mémoire en hexadécimal.
 * @buffer: l'adresse de la mémoire à afficher
 * @size: la taille de la mémoire à afficher
 *
 * Return: Rien.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
