# 1
## Processo Zumbi

Um processo zumbi (ou zombie, chamado também de defunct) é um processo que finalizou a execução mas ainda possui uma entrada na tabela de processos, pois seu processo pai ainda não "tomou conhecimento" que ele terminou.

## Como usar
* Pré-Requisitos
  * editor de codigo
  * C (linguagem)
  * SO Linux
  * makefile

Compilando no terminal (sem usar o makefile) 

```bash

1. gcc "nome do arq".c -o "nome do executavel"

```
```bash

2. ./"nome do executavel"

```

Compilando no terminal (com o makefile)

```bash

1. make 
   - executa o - gcc "nome do arq".c -o "nome do executavel"

```
```bash

2. make run
   - executa o - ./"nome do executavel"

```
```bash

3. make clean
   - executa o -  rm 'nome do executável'

```



  

