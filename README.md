# No Builtins Allowed

Code from my YouTube series implementing familiar built-in functions from scratch.

## Part 1: Filter

[`01-filter/`](01-filter/) implements `filter` in C using a predicate function, with examples that select adults and even numbers. JavaScript and Python examples show the equivalent behavior.

Run from the repository root:

```sh
gcc -std=c99 01-filter/filter_simple.c -o 01-filter/filter
./01-filter/filter
node 01-filter/script.js
python3 01-filter/script.py
```
