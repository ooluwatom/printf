# First team project
# Description
This team project is part of the first year curriculum of Holberton School. _printf replicates the C standard library printf() function.

What you should learn from this project:

How to use git in a team setting
Applying variadic functions to a big project
The complexities of printf
Managing a lot of files and finding a good workflow
# Prototype
int _printf(const char *format, ...);
# Usage
<ul>
<li>Prints a string to the standard output, according to a given format</li>
</li>All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with the command gcc -Wall -Werror -Wextra -pedantic *.c</li>
<li>Returns the number of characters in the output string on success, -1 otherwise</li>
<li>Call it this way: _printf("format string", arguments...) where format string can contain conversion specifiers and flags, along with regular characters</li>
</ul>

# Examples
<ul>
<li>_printf("Hello, Holberton\n") prints "Hello, Holberton", followed by a new line</li>
<li>_printf("%s", "Hello") prints "Hello"</li>
<li>_printf("This is a number: %d", 98) prints "This is a number: 98"</li>
</ul>
# Project Tasks
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
Write a function that produces output according to a format.
https://github.com/ooluwatom/printf/blob/main/_printf.c
<ul>
<li>Write a function that produces output according to format.</li>
c : converts input into a character
s : converts input into a string
% : is format identifier

<a href ="1. Education is when you read the fine print. Experience is what you get if you don't">1. Education is when you read the fine print. Experience is what you get if you don't</a>
<li>Handle the following conversion specifiers:</li>
d : converts input into a base 10 integer<br/>
i : converts input into an integer

<a href ="2. With a face like mine, I do better in print">2. With a face like mine, I do better in print</a>Handle the following custom conversion specifiers:
<li>b: the unsigned int argument is converted to binary</li>

<a href ="3. What one has not experienced, one will never understand in print">3. What one has not experienced, one will never understand in print</a>
<li>Handle the following conversion specifiers:</li>
u : converts the input into an unsigned integer
o : converts the input into an octal number
x : converts the input into a hexadecimal number
X : converts the input into a hexadecimal number with capital letters

<a href ="4. Nothing in fine print is ever good news">4. Nothing in fine print is ever good news</a>
<li>Use a local buffer of 1024 chars in order to call write as little as possible.</li>

<a href ="5. My weakness is wearing too much leopard print"5. My weakness is wearing too much leopard print">5. My weakness is wearing too much leopard print</a>
<li>Handle the following custom conversion specifier:</li>
S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

<a href ="6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print">6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print</a>
<li>Handle the following conversion specifier:p</li>
p : int input is converted to a pointer address

<a href ="7. The big print gives and the small print takes away">7. The big print gives and the small print takes away</a>
<li>Handle the following flag characters for non-m conversion specifiers:</li>
+ : adds a + in front of signed positive numbers and a - in front of signed negative numbers
space : same as +, but adds a space (is overwritten by +)
# : adds a 0 in front of octal conversions that don't begin with one, and a 0x or 0X for x or X conversions
<a href ="[8. Sarcasm if lost in print]">[8. Sarcasm is lost in print]"</a>
<li>Handle the following length modifiers for non-custom conversion specifiers:</li>
l : converts d, i, u, o, x, X conversions in short signed or unsigned ints
h : converts d, i, u, o, x, X conversions in long signed or unsigned ints
<a href ="9. Print some money and give it to us for the rain forests">9. Print some money and give it to us for the rain forests</a>
<li>Handle the field width for non-custom conversion specifiers.</li>

<a href ="10. The negative is the equivalent of the composer's score, and the print the performance">10. The negative is the equivalent of the composer's score, and the print the performance</a>
<li>Handle the precision for non-custom conversion specifiers.</li>
</ul>






