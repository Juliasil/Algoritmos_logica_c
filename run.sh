#!/bin/bash
# Script para compilar e executar um arquivo C++

if [ -z "$1" ]; then
    echo "Uso: ./run.sh <arquivo.cpp>"
    exit 1
fi

arquivo=$1
nome_executavel="${arquivo%.*}"

echo "Compilando $arquivo..."
g++ $arquivo -o $nome_executavel

if [ $? -eq 0 ]; then
    echo "Executando $nome_executavel..."
    ./$nome_executavel
else
    echo "Erro ao compilar $arquivo."
fi
