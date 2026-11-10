# libft

My own implementation of a chunk of the C standard library, built from scratch for **42 School**'s first project. The goal is to re-write common libc functions (string, memory, list helpers) to fully understand how they work under the hood, then reuse this library as the foundation for every later 42 project. It also bundles two companion 42 projects (`get_next_line` and `ft_printf`) that are built directly on top of it.

**Status:** mandatory + bonus parts validated at 100%.

## Features

- **Libc re-implementations** — memory (`memset`, `memcpy`, `memmove`, `memchr`, `memcmp`, `bzero`), strings (`strlen`, `strdup`, `strchr`, `strrchr`, `strncmp`, `strnstr`, `strlcpy`, `strlcat`, `substr`, `strtrim`, `split`, `strjoin`, `strmapi`, `striteri`), ctype (`isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`), and conversions (`atoi`, `itoa`, `calloc`).
- **Linked lists (bonus)** — a `t_list` doubly-chained structure with full CRUD: `lstnew`, `lstadd_front/back`, `lstsize`, `lstlast`, `lstdelone`, `lstclear`, `lstiter`, `lstmap`, plus a stack-flavoured push/pop helper (`ft_push`, `ft_pop`, `ft_pop_end`) used for the Tower of Hanoi / Push_swap project.
- **`get_next_line`** — reads a file descriptor line by line regardless of `BUFFER_SIZE`, with no static-memory leaks.
- **`ft_printf`** — a minimal `printf` clone supporting `%c %s %p %d %i %u %x %X %%`.
- **Extra utilities (WIP, not yet linked in the Makefile)** — `ft_strspn`, `ft_strcspn`, `ft_strtok_r`, string concatenation and tab-freeing helpers, started while exploring features beyond the subject's requirements.

## Project structure

```
.
├── includes/            # libft.h, get_next_line.h, ft_printf.h
├── libft/
│   ├── mandatory/        # subject-required libc functions
│   ├── lst/              # bonus part: linked list + stack helpers
│   ├── calculs/          # misc helpers (e.g. median, used by Push_swap)
│   └── *.c               # WIP utilities not wired into the build yet
├── GNL/                  # get_next_line and its utils
├── ft_printf/             # ft_printf and its utils
└── Makefile
```

## Build

```sh
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files + libft.a
make re     # fclean + all
```

This produces `libft.a`, which you link against like any static library:

```sh
cc your_file.c -I includes -L. -lft -o your_program
```

## Usage

```c
#include "libft.h"

int main(void)
{
    char *dup = ft_strdup("Hello, 42!");
    ft_putendl_fd(dup, 1);
    free(dup);
    return (0);
}
```

## Testing

No test suite is bundled. During development this library was checked against:
- [Francinette](https://github.com/Tripouille/francinette)
- [libft-unit-test](https://github.com/alelievr/libft-unit-test)

## Tech

C (compiled with `clang`, flags: `-Wall -Wextra -Werror`), POSIX-only (`unistd.h`), no external dependencies.
