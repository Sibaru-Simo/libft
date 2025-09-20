Libft

Libft hiya library dyal C li katجمع مجموعة dyal functions standard mn libc plus functions custom li drna f project 1337. Hadi version li katشمل bonus functions.

📌 Description

Libft katوفر functions dyal strings, memory, characters, plus linked list (bonus) li kaynin f project.

🛠️ Features

Strings: ft_strlen, ft_strcpy, ft_strncmp, ...

Memory: ft_memset, ft_memcpy, ft_memalloc, ...

Character: ft_isalpha, ft_isdigit, ft_tolower, ...

Bonus (Linked List): ft_lstnew, ft_lstadd_front, ft_lstadd_back, ft_lstmap, ...

Others: ft_split, ft_itoa, ft_strmapi, ...

💻 Usage

Clone repo:

git clone <link-to-your-repo>
cd libft


Compile library:

make


Ghadi tخرج libft.a ready to use.

Include in your project:

#include "libft.h"


Link with:

gcc main.c -L. -lft -o main

📝 Example
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello 1337";
    printf("Length: %zu\n", ft_strlen(str));
    return 0;
}

🔧 Makefile

make → compile libft.a

make clean → delete object files

make fclean → delete libft.a + object files

make re → fclean + make

✨ Notes

All functions follow norm coding style.

Bonus linked list functions included.

Memory management tests in progress.
