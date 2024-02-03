#include "main.h"


void cleanup(va_list args, buffer_t *output);
int run_printf(const char *format, va_list args, buffer_t *output);
int _printf(const char *format, ...);

/**
 * cleanup - Performs cleanup for _printf
 * @args: a va_list of arguments to _printf
 *@output: A buffer_t struct
 * cleanup - Peforms cleanup operations for _printf.
 * @args: A va_list of arguments provided to _printf.
 * @output: A buffer_t struct.
 */

void cleanup(va_list args, buffer_t *output)
{
	va_end(args);
	write(1, output->start, output->len);
	free_buffer(output);
}



/**
 * run_printf - Reads through the format string for _printf
 * @format: Character string to print - may contain directives
 * @output: A buffer_t struct containing a buffer
 * @args:A va_list of arguments
 * run_printf - Reads through the format string for _printf.
 * @format: Character string to print - may contain directives.
 * @output: A buffer_t struct containing a buffer.
 * @args: A va_list of arguments.
 *
 * Return: The number of characters stored to output
 * Return: The number of characters stored to output.
 */

int run_printf(const char *format, va_list args, buffer_t *output)
{
	int i, wid, prec, ret = 0;
@@ -69,17 +64,12 @@ int run_printf(const char *format, va_list args, buffer_t *output)
	return (ret);
}




/**
*_printf -  a function that produces output according to a format.
*@format:is a character string. The format string is composed of
*zero or more directives.
*Return: the number of characters printed
* (excluding the null byte used to end output to strings)
*/

 * _printf - Outputs a formatted string.
 * @format: Character string to print - may contain directives.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	buffer_t *output;
