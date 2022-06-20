# ft_printf 

**Project Objectives** : to understand va_arg structure and when are they used. to understand to handle string, hex and decimal variables and how to use them with write command. to understand basics of printf command. 

| Specs  | Explanation |
| ------------- | ------------- |
| Program name | libftprintf.a |
| Turn in files | Makefile, *.h, */*.h, *.c, */*.c |
| Makefile | NAME, all, clean, fclean, re |
| External functs. | malloc, free, write, va_start, va_arg, va_copy, va_end |
| Libft authorized | Yes |
| Description | Write a library that contains ft_printf(), a function that will mimic the original printf() |

<details>
  <summary>Project Instructions</summary>
  
    You have to recode the printf() function from libc.
  
    The prototype of ft_printf() is:
  
    ```
    int  ft_printf(const char *, ...);
    ```
  
    Here are the requirements:
    - Don't implement the buffer management of the original printf().
    - Your function has to handle the following conversions: cspdiuxX%
    - Your function will be compared against the original printf().
    - You must use the command ar to create your library. <br/> Using the libtool command is forbidden.
    - Your libftprintf.a has to be created at the root of your repository.

</details>
