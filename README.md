# Minishell
## Project overview

This one of the hardest group project of the 42 common core. Why? Because we have to code from scratch a bash command line in C. It was extremely challenging and gratifying when completed. The end product had to reproduce identically the behaviour of a bash command line. Obviously not all of it had to be implemented since it would take years to reproduce. You can see below the basic behaviour of the program with some typicall bash commands. The prject will not be explained in it is entirety since it is very detailled but the main concepts are explained below.

1. Launching and executing "echo hello":

<p align="center">
<img src="gifs/shot1.gif">
</p>

2. Executing "ls" and "cat | ls":

<p align="center">
<img src="gifs/shot2.gif">
</p>

3. Executing "ls > test.txt" to redirect output of "ls" into "test.txt":

<p align="center">
<img src="gifs/shot3.gif">
</p>

This project can be divided into two main parts:

1. Parsing.
2. Execution.

### Parsing

Parsing was done using a tokenized lexer/parser. Each element of the command was stored into a linked list with each element having a specific type (e.g. CMD, REDIR, PIPE, etc.). All $ variables were also converted.

### Execution

Execution was done using an AST (Abstract Synthax Tree). The point of using an AST is to simplify the execution process and be able to implement levels of priority in the command interpreter easily. It was not necessary for this project but I thought it would be fun to understand and implement.

On one part we had to recode built-in functions such as "cd", "pwd", etc. On the other hand we had to use the standard library function "execve" to execute all executables from bash (e.g. ls, cat, wc, etc.).

## What I learned

1. In depth Bash --posix.
2. Advanced multi-processing.
3. Process communication with pipes.
4. How heredocs work ("<< redirections").
5. Advanced fd managment.
6. TDD.
7. Signals overload (Ctr C, Ctrl D, etc.).
8. Readline fucntion and history to create the command line entry.
9. Advanced debugging and leaks managment (the most painful part... :sob:).
10. Abstract Syntax Trees (loved it :sunglasses:).
11. Lexer / Parsers.
12. Tokenizers.
13. Pids and processes managment (painfully with the reimplementation of the "cat | ls" commands :satisfied:).
14. Environment variables.


