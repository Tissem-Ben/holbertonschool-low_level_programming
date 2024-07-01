#include "main.h"
/**
 * _memset - Remplit les premiers 'n' octets de la zone mémoire 's' avec 'b'.
 * @s: Pointeur vers la zone mémoire à remplir
 * @b: Octet à écrire dans la zone mémoire
 * @n: Nombre d'octets à remplir
 *
 * Return: pointeur vers la zone mémoire `s`
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
