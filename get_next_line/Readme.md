_This project has been created as a part of the 42 curriculum by jabdujal._

# get_next_line - is a function that returns a string containing a text in a dedicated line of given file.

# Description

// using static variables
// Mental algorythm -> Read bytes(b_size) -> Append to the stash ->
// Extract line if newline is found ->
// Save the leftover data.

// Read function return types
// if >0 all bytes read
// if 0 EOF - end of file
// if -1 Error

// Common mistakes
// Memory leaks
// Losing stash data
// Mishandling eof
// Reading the whole file

The goal of the project is to learn about:

- **static variables**: data that survives between calls of the same function;
- **file descriptors and `read()`**: reading files and standard input in
  chunks whose size is chosen at compile time (`BUFFER_SIZE`);
- **dynamic memory management**: every allocation has exactly one owner and
  exactly one `free`, on every path (success, end of file, errors).
  Allowed external functions: `read`, `malloc`, `free`.
  Forbidden: `libft`, `lseek`, global variables.

### Files

| File                    | Content                                                           |
| ----------------------- | ----------------------------------------------------------------- |
| `get_next_line.h`       | Include guard, `BUFFER_SIZE` default, prototypes                  |
| `get_next_line.c`       | `get_next_line` and the static helper `fill_stash`                |
| `get_next_line_utils.c` | `len_please`, `find_nl`, `append_stash`, `extract`, `clean_stash` |

## Instructions

### Compilation

The function is compiled together with your own `main`, with the usual flags.
The read size is set with `-D BUFFER_SIZE=n`:

```sh
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 main.c get_next_line.c get_next_line_utils.c -o gnl
```

It also compiles without the flag. In that case `BUFFER_SIZE` defaults to
`42` (defined in `get_next_line.h`):

```sh
cc -Wall -Wextra -Werror main.c get_next_line.c get_next_line_utils.c -o gnl
```

### Usage

```c
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("file.txt", O_RDONLY);
	if (fd < 0)
		return (1);
	line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (0);
}
```
