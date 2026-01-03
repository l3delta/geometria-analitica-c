#!/bin/sh

CC=gcc
CFLAGS="-Wall -Wextra -std=c11 -Iinclude"
SRC="src/*.c"
LIBS="-lm"

if [ $# -ne 2 ]; then
    echo "Uso:"
    echo "  ./compile.sh example nome_do_exemplo"
    echo "  ./compile.sh test nome_do_teste"
    exit 1
fi

TIPO=$1
NOME=$2

if [ "$TIPO" = "example" ]; then
    ARQ="examples/$NOME.c"
    OUT="examples/$NOME.out"
elif [ "$TIPO" = "test" ]; then
    ARQ="tests/$NOME.c"
    OUT="tests/$NOME.out"
else
    echo "Tipo inválido: use 'example' ou 'test'"
    exit 1
fi

if [ ! -f "$ARQ" ]; then
    echo "Arquivo não encontrado: $ARQ"
    exit 1
fi

# Compila e linka (note que $LIBS vem no final)
$CC $CFLAGS $SRC "$ARQ" -o "$OUT" $LIBS

# Exemplo de uso "./compile.sh test vetor2d ; ./tests/vetor2d.aut"
