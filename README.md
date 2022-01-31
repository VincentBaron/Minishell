# Minishell
## Project overview

This one of the hardest group project of the 42 common core. Why? Because we have to code from scratch a bash command line in C. The end product should reproduce identically the behaviour of a bash command line. Obviously not all of it had to be implemented since it would take years to reproduce. You can see below the basic behaviour of the program with some typicall bash commands.

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
