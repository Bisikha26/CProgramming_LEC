# C Variables, Constants and Literals

# Variables

## 1. Variable is a container (storage area) to hold data.
## 2. Variable names are just the symbolic representation of a memory location.
## 3. The value of a variable can be changed, hence the name variable.
---
# **Note**
## * C is a strongly typed language. This means that the variable type cannot be changed once it is declared.
```
int number = 5;      // integer variable
number = 5.5;        // error
double number;       // error
```

---

# Rules for naming a variable
## 1. A variable name can only have letters (both uppercase and lowercase letters), digits and underscore.
## 2. The first letter of a variable should be either a letter or an underscore.
## 3. There is no rule on how long a variable name (identifier) can be. However, you may run into problems in some compilers if the variable name is longer than 31 characters.

---

# Literals
## Literals are data used for representing fixed values.

## 1. Integer Literal - Numbers without any fractional or floating point form
```
Decimal: 0, -9, 22 etc
Octal: 021, 077, 033 etc
Hexadecimal: 0x7f, 0x2a, 0x521 etc

**In C programming, octal starts with a 0, and hexadecimal starts with a 0x**
```

## 2. Floating Point Literal - fractional or floating point form
```
-2.0
0.0000234
-0.22E-5
**E-5 = 10-5**
```

## 3. Character Literal - Single Character within single quotation
```
'a', 'm', 'F', '2', '}'
```

## 4. String Literals - Sequence of characters enclosed in double-quote 
```
"good"                  //string constant
""                     //null string constant
"      "               //string constant of six white space
"x"                    //string constant having a single character.
"Earth is round\n"         //prints string with a newline
```

## 5. Escape Sequence - It is necessary to use characters that cannot be typed or has special meaning in C programming. For example: newline(enter), tab, question mark etc. In order to use these characters, escape sequences are used.

```
\n	Newline
\t	Horizontal tab
\\	Backslash
```
---
# Constants - Defining a variable whose value cannot be changed

```
const double PI = 3.14;
PI = 2.9; //Error
