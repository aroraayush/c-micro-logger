# c-micro-logger
Small utility for logging variables in C language

Currently, this is in early stage. I will work on it, to improve it, time to time. I ll try to keep it as lightweight as possible.

---

#### Usage
Please download and include the file `micro_logger.h` in the directory of the file where you need to get log outputs. In your file, add `#include "micro_logger.h"` in the beginning

Please look at the `test.c` file to see how to use the header file.

---

Example:

int num = 10;
char alphabet = 'b';
char str[10]="Alakazam";
float dec = 1.02f;
long big_number= 1234567890;
unsigned long u_long= 1234567890;

```
PR_I(num);
PR_F(dec);
PR_L(big_number);
PR_U_L(u_long);
```

> Output
> test.c - 17 | 10
> test.c - 18 | 1.020000
> test.c - 19 | 1234567890
test.c - 20 | 1234567890

```
PR_C(alphabet);
PR_S(str);
```
> Output
> test.c - 22 | b
> test.c - 23 | Alakazam

printf("\n\n****************************************************************************\n");
printf("Printing variable names and their values\n");
printf("****************************************************************************\n");

printf("\nSyntax: file_name - line_number | <variable_name> = <value>\n");
```
PR_V_I(num);
PR_V_F(dec);
PR_V_L(big_number);
PR_V_U_L(u_long);
```
> Output

> test.c - 31 | num = 10
> test.c - 32 | dec = 1.020000
> test.c - 33 | big_number = 1234567890
> test.c - 34 | u_long = 1234567890

```
PR_V_C(alphabet);
PR_V_S(str);
```
> Output
> test.c - 36 | alphabet = b
> test.c - 37 | str = Alakazam

