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
d : converts input into a base 10 integer
i : converts input into an integer
</ul>
