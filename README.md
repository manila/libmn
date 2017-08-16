# libmn

This is my take on the standard C library.

The code loosely follows the guidlines for the libft project that is a part of the 42 curriculum.

## Documentation
These functions mirror the behavior of the C standard library (https://en.wikipedia.org/wiki/C_standard_library).

The difference being my functions are prefixed with ```my_```, e.g. ```atoi``` becomes ```my_atoi```.

## Building

**clone the repo:**
```shell
git clone https://github.com/manila/libmn.git libmn && cd libmn
```

**compile the libmn.a file:**
```
make && make clean
```

## Usage

Complile *your* project with the ```libmn``` library,
be sure to include the ```libmn.h``` header file in your c file(s)

```c
#include "libmn.h"
```
