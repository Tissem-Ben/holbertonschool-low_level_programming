#include <limits.h>
#include <stddef.h>

/**
 * _atoi - convertit une chaîne de caractères en un entier.
 * @s: la chaine à convertir.
 *
 * Return: la valeur entière de la chaîne.
 */
int _atoi(char *s)
{
	int signe = 1;
	int resultat = 0;
	int prev_result;

	if (s == NULL)
		return 0;

	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
		signe *= -1;
	s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		prev_result = resultat;

		resultat = resultat * 10 + signe * (*s - '0');
		if ((resultat / 10) != prev_result)
		{
			if (signe == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}
		s++;
	}
	return resultat;
}
