# Header / per array,

###### qui troverai **header** e le funzioni che utilizzo per lavorare con gli *array*, ogni **header** avrà presente un link per visualizzare tutte le funzionalità comprese (C++ reference)

###### Incide: <br /> 

- [Alghorithm](#Alghorithm) <br /> 
- [Array](#Array)


## Alghorithm

Alghorithm è un **header** molto utile da diversi punti di vista ed è in grado di salvare molto tempo... un avviso importante per poter utilizzare i codici qui di sotto si consiglia di includere anche **header** 'array'.

### [:paperclip: C++ reference](https://en.cppreference.com/w/cpp/header/algorithm)

###### sort cre

Per ordinare un array in modo crescente (0, 1, 2, 3, 4, 5)

```cpp
sort(nome_del_array.begin(), nome_del_array.end());
```

###### sort dec

Per ordinare un array in modo decrescente (5, 4, 3, 2, 1, 0)
Attenzione per poter utilizzare questo modo il vostro array dev'essere un "contenitore" per fare si che il vostro array lo diventi seguite seguente sintassi:
`
array<tipo_es_int. lunghezza_del_array> nome_del_array {valori_del_array};
`

###### per essere ancora più chiaro:
`
array<int, 6> aNumeri { 0, 1, 2, 3, 4, 5 };
`	

```cpp
sort(nome_del_array.begin(),nome_del_array.end(), greater<int>());
```

###### *max_element

Per trovare il massimo elemento, non scordatevi del asterisco!

```cpp
*max_element(nome_del_array.begin(), nome_del_array.end());
```

###### *min_element

Per trovare il minimo elemento, vi ricordo che l'asterisco è molto importante!
Per salvare questo valore in una variabile a vostro piacere bisogna fare in seguente modo:
`
*nome_della_vostra_variabile = min_element(nome_del_array.begin(), nome_del_array.end());
`

```cpp
*min_element(nome_del_array.begin(), nome_del_array.end());
```

###### accumulate

```cpp
accumulate(nome_del_array.begin(), nome_del_array.end(), da_dove_deve_calcolare);
```

## Array

###### begin

###### end

###### size


	