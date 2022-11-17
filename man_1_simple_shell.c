.TH hsh 1 "November 2022" 1.0 "Simple shell"

.SH NAME
.B Simple shell
- a simple command interpreter

.SH SYNOPSIS
command[-o option_name][command_file[argument ...]]

.SH DESCRIPTION
.B simple_shell
command line interpreter based on the first Unix shell 'sh',
created by Ken Thompson in 1971.
simple_shell is intentionally minimalistic and contains functionality for only
the most basic shell tasks - accepting input, parsing the input into a command
and its arguments, and executing that input. Error checking is simple
and follows Bash conventions.
.SH INVOCATION

if the strd input of the shell is connected to a term
shell is considered interactive
command line arguments besides the options have been specified,
then the shell treats the first argument as
the name of a file from which to read commands(a shell script),
and the remaining arguments are set as the posi‐
tional parameters of the shell($1, $2, etc)
Otherwise, the shell reads commands from its standard input.

.SH BUILTINS
.B env
.RS 6
Prints all of the environment variables
.RE

.B exit
[\fIEXIT_STATUS\fR]
.RS 6
Exits the shell with an optional integer exit status
.RE

.SH NOTES
Currently, the program does not support the following commands :

.B alias, bg, cd, eval, fg, hash, help, jobs, type
...among others

Control - C has been disabled

.SH KNOWN BUGS
If  you  find  a  bug  in simple shell,  you should report it,
and confirm it doesn't appear
in the latest version of simple shell.

ALL bug reports should include :

The version number of simple shell
The hardware and operating system
The compiler used to compile
A description of the bug behaviour
A short script or `recipe' which exercises the bug

Comments and bug reports concerning this manual page should be directed to
omitifranc@gmail.com or franblog7@gmail.com.

.SH AUTHORS
Francis Omiti
<omitifranc@gmail.com>

Francis Onyach
<franblog7@gmail.com>

.SH SEE ALSO
.B sh
