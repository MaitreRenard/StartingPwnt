# StartingPwnt

## How to start

The recommended tools are :

* (Pwndbg)[https://github.com/pwndbg/pwndbg]
* (Pwntools)[https://github.com/Gallopsled/pwntools] with Python3 or higher ;)

In support of these you can use :

* (ROPgadget)[https://github.com/JonathanSalwan/ROPgadget]
* Objdump (`alias objdump="/usr/bin/objdump -M intel"`)

## Step n°1 : ROPchains

* `rop/pwna`

The start of the adventure

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

## Step n°2 : Format string

## Step n°3 : Heap discovery

* TODO

## Step n°4 : Windows discovery

* TODO
