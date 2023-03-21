#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Description: prints a list of time
 * Return: Always 0.
 */

void jack_bauer(void)
{
    int hrs;
    int mns;

    for (hrs = 0; hrs < 24; hrs++)
    {
    for (mns = 0; mns < 60; mns++)
    {
    _putchar((hrs / 10) + '0');
    _putchar((hrs % 10) + '0');
    _putchar(':');
    _putchar((mns / 10) + '0');
    _putchar((mns % 10) + '0');
    _putchar('\n');
        }
    }
}
