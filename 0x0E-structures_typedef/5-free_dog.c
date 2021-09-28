#include <stdlib.h>
#include "dog.h"
/**
 * main - check the code
 *@d: struct dog to free
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
