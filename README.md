# cod
C implementation of Deadfish

Requires GCC to build, or you can use any other C compiler.

Deadfish Commands:
* `i` - Increment value by 1
* `d` - Decrement value by 1
* `s` - Square value
* `o` - Output ASCII value
cod Commands:
* `b` - Binary Two's Complement the value
* `q` - Square root the value
* `r` - Right shift value
* `l` - Left shift value
* `&` - Turn value into the value's pointer
* `n` - Print number
* 'e' - Erase the value
* '4' - Decrement the value to zero, while printing each ASCII value along the way
* '5' - Do the same as '4', except reset the value to it's original number afterwards
* '6' - Do the same as `4`, except go upwards to the square of the value

##Use
`build` cod. You can run the new `cod.exe` without any arguments to get a cli, or import a file use `cod file.df`. An example is in `hello.df`.
