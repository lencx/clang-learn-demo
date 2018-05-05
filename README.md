# Clang

## keywords

|          |          |          |            |
| :------- | :------- | :------- | :--------- |
| auto     | double   | `int`    | `struct`   |
| break    | else     | long     | `switch`   |
| case     | `enum`   | register | `typeof`   |
| `char`   | `extern` | `return` | union      |
| const    | float    | short    | `unsigned` |
| continue | for      | signed   | `void`     |
| default  | `goto`   | `sizeof` | `volatile` |
| do       | if       | static   | `while`    |

## Priority of operations

* ! > && > ||
* !done && count > MAX

| Level | Operator                     | Note           |
| ----- | ---------------------------- | -------------- |
| 1     | ()                           |                |
| 2     | `!` `+` `-` `++` `--`        | unary: `+` `-` |
| 3     | `*` `/` `%`                  |                |
| 4     | `+` `-`                      |                |
| 5     | `<` `<=` `>` `>=`            |                |
| 6     | `==` `!=`                    |                |
| 7     | &&                           |                |
| 8     | \|\|                         |                |
| 9     | `=` `+=` `-=` `*=` `/=` `%=` |                |
