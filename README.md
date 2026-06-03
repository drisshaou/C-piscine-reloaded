# C_piscine_reload

*This project has been created as part of the 42 curriculum by drhaouha.*

# C Piscine Reloaded

## Description

C Piscine Reloaded is a refresher series of 28 exercises covering the core concepts of the C programming language introduced during the 42 C Piscine. The goal is to solidify foundational knowledge through practice: shell commands, functions, pointers, memory allocation, recursion, structures, macros, Makefiles, and function pointers.

Each exercise is self-contained and evaluated by Moulinette, the automated grading tool used at 42.

## Exercises overview

| Exercise | File(s) | Topic |
|---|---|---|
| ex00 | `exo.tar` | File permissions and `tar` |
| ex01 | `z` | File content |
| ex02 | `clean` | `find` command with deletion |
| ex03 | `find_sh.sh` | Shell scripting with `find` |
| ex04 | `MAC.sh` | Network — MAC addresses |
| ex05 | `"\?$*'MaRViN'*$?\"` | Special characters in filenames |
| ex06 | `ft_print_alphabet.c` | Loop + `ft_putchar` |
| ex07 | `ft_print_numbers.c` | Loop + `ft_putchar` |
| ex08 | `ft_is_negative.c` | Conditionals |
| ex09 | `ft_ft.c` | Pointer basics |
| ex10 | `ft_swap.c` | Pointer swap |
| ex11 | `ft_div_mod.c` | Integer division with pointers |
| ex12 | `ft_iterative_factorial.c` | Iterative factorial |
| ex13 | `ft_recursive_factorial.c` | Recursive factorial |
| ex14 | `ft_sqrt.c` | Integer square root |
| ex15 | `ft_putstr.c` | String output |
| ex16 | `ft_strlen.c` | String length |
| ex17 | `ft_strcmp.c` | String comparison |
| ex18 | `ft_print_params.c` | `argc`/`argv` — print args |
| ex19 | `ft_sort_params.c` | `argc`/`argv` — sort args (ASCII) |
| ex20 | `ft_strdup.c` | `malloc` + string duplication |
| ex21 | `ft_range.c` | `malloc` + int array |
| ex22 | `ft_abs.h` | Preprocessor macro |
| ex23 | `ft_point.h` | Struct definition in header |
| ex24 | `Makefile` | Build system — `libft.a` |
| ex25 | `ft_foreach.c` | Function pointer — apply to array |
| ex26 | `ft_count_if.c` | Function pointer — count matches |
| ex27 | `Makefile` + sources | File I/O — `open`/`read`/`write` |

## Instructions

### Compilation

Moulinette compiles with `cc -Wall -Wextra -Werror`. All files must pass `norminette` before submission.

```bash
# Example: compile and test a single exercise
cc -Wall -Wextra -Werror ft_strlen.c -o test_strlen
```

### Norminette

```bash
norminette <file.c>
```

### Repository structure

Each exercise lives in its own directory:

```
.
├── ex00/
│   └── exo.tar
├── ex01/
│   └── z
├── ex06/
│   └── ft_print_alphabet.c
...
└── ex27/
    ├── Makefile
    └── ft_display_file.c
```

Only the files specified in each exercise may be present in the corresponding directory. No extra files allowed.

### Notes

- Shell exercises (`ex00`–`ex05`) must be executable with `/bin/sh`.
- `ft_putchar` is provided by Moulinette when listed as an allowed function — do not redefine it.
- For `ex00`, generate the archive with `tar -cf exo.tar *` after setting up the correct files and permissions.
- For `ex27`, `malloc` is forbidden — use a fixed-size buffer on the stack.

## Resources

- [C man pages](https://man7.org/linux/man-pages/)
- [norminette](https://github.com/42School/norminette)
- [`find` manual](https://man7.org/linux/man-pages/man1/find.1.html)
- [`tar` manual](https://man7.org/linux/man-pages/man1/tar.1.html)
- [Understanding pointers in C — cs.yale.edu](https://www.cs.yale.edu/homes/aspnes/pinewiki/C(2f)Pointers.html)
- [Makefile tutorial](https://makefiletutorial.com/)

### Switching from HTTPS to SSH protocol.

To check what protocol you're using just run:

git config -l

and look at the line starting with remote.origin.url.

To switch your protocol run:

git config remote.origin.url git@github.com:your_username/your_project.git


