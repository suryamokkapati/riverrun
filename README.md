# riverrun

A command-line utility that prints a random quote from James Joyce's *Finnegans Wake*.

```
$ riverrun
Three quarks for Muster Mark!
```

Every invocation draws a different fragment from the Wake — from thunderwords to lullabies, riddles to reveries.

## Install

```sh
make
sudo make install
```

This installs `riverrun` to `/usr/local/bin`. To install elsewhere:

```sh
sudo make install PREFIX=/usr
```

## Uninstall

```sh
sudo make uninstall
```

## Build manually

```sh
cc -std=c99 -Wall -O2 -o riverrun riverrun.c
```

No dependencies beyond a C99 compiler.

## Usage

Just type it:

```
$ riverrun
```

One quote. Then gone. Like the river.

## License

Public domain. Joyce's words are out of copyright. The code is yours.
