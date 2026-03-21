# riverrun

riverrun. A small C program similar to Fortune that prints a random quote from James Joyce's Finnegans Wake. A way a lone a last a loved a long the
```
$ riverrun
The fall (bababadalgharaghtakamminarronnkonnbronntonner-   
ronntuonnthunntrovarrhounawnskawntoohoohoordenenthur-  
nuk!) of a once wallstrait oldparr is retaled early in bed and later  
on life down through all christian minstrelsy.
```

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

```
$ riverrun
```
