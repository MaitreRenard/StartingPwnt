# StartingPwnt

This repository aim to be a starting point for beginner to pwn. I've made a few challenges for each type of attack I know (only 2 types of attack available right now though).

## How to start

If you are using a debian based GNU/Linux distribution you can use [this setup script](./utils/setup.sh).

The recommended tools are :

* [Pwndbg](https://github.com/pwndbg/pwndbg)
* [Pwntools](https://github.com/Gallopsled/pwntools) with Python3 or higher ;)

Additionally you can use :

* [ROPgadget](https://github.com/JonathanSalwan/ROPgadget)
* Objdump (`alias objdump="/usr/bin/objdump -M intel"`)

## Step n°1 : ROPchains

In this category you will learn how to make ROPchain, if this word doesn't sounds familiar, you may want to read some articles or CTF write-ups about buffer overflow exploitation. The goal in every challenge of this category will be to get a shell.

* `rop/pwna`

The start of the adventure
||Try to 

* `rop/pwnb`

Pass the correct argument to win

* `rop/pwnc`

Pass the correct arguments to win

* `rop/pwnd`

Go to the libc `system`

* `rop/pwne`

Make the `execve` syscall and pass it the good string

* `rop/pwnf`

Write '/bin/sh' somewhere to make that `system` call useful.
`readelf -S the_binary` to find where to write ;)

* `rop/pwng`

The classical ROP without '/bin/sh' and `system` call

### Some litterature to go further

A few papers on the subject, ordered by reading complexity. These are not mandatory.

* [Blind ROP state of the art](www.scs.stanford.edu/brop/bittau-brop.pdf)
* 
*

## Step n°2 : Format string

## Step n°3 : Heap discovery

* TODO

## Step n°4 : Windows discovery

* TODO
