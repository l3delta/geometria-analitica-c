#!/bin/sh



CC=gcc
CFLAGS="-Wall -Wextra -std=c11 -Iinclude"
SRC="src/*.c"

if [ $# -ne 2 ]; then
    echo "Uso:"
    echo "  ./compile.sh example nome_do_exemplo"
    echo "  ./compile.sh test nome_do_teste"
    exit 1
fi

TIPO=$1
NOME=$2

if [ "$TIPO" = "example" ]; then
    $CC $CFLAGS $SRC examples/$NOME.c -o examples/$NOME
elif [ "$TIPO" = "test" ]; then
    $CC $CFLAGS $SRC tests/$NOME.c -o tests/$NOME
else
    echo "Tipo inválido: use 'example' ou 'test'"
    exit 1
fi

# Exemplo de uso "./compile.sh test test_vetor2d ; ./tests/test_vetor2d"
