# Header / per array,

###### qui troverai **header** e le funzioni che utilizzo per lavorare con gli *array*, ogni **header** avrà presente un link per visualizzare tutte le funzionalità comprese (C++ reference). Prima di partire ce da specificare che la maggior parte delle funzionalità presenti si riferiscono agli **array** veri e propri detti anche contenitori.

> Array container is a sequential homogenous container and is of a fixed size. Actually, in programming, we rarely use such a static container as in real-time scenarios we need containers that can expand or shrink dynamically. <br />

# da quel che ho capito sono stato scamMmMmato a scuola, infatti gli array veri e propri non hanno nulla a che fare con array che si studiano a scuola quelli sono i vettori.


###### **Incide**: <br />

- [Alghorithm](#Alghorithm) <br />
- [Array](#Array)



## Alghorithm

Alghorithm è un **header** molto utile da diversi punti di vista ed è in grado di salvare molto tempo... un avviso importante per poter utilizzare i codici qui di sotto si consiglia di includere anche **header** 'array'

###### [:pencil2: C++ reference](https://en.cppreference.com/w/cpp/header/algorithm)

### sort cre

Per ordinare un array in modo crescente (0, 1, 2, 3, 4, 5)

```cpp
sort(nome_del_array.begin(), nome_del_array.end());
```


### sort dec

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


### *max_element

Per trovare il massimo elemento, non scordatevi del asterisco!

```cpp
*max_element(nome_del_array.begin(), nome_del_array.end());
```

###### per gli array "dinamici"
```cpp
*min/max_element(begin(nome_del_array), end(nome_del_array));
```


### *min_element

Per trovare il minimo elemento, vi ricordo che l'asterisco è molto importante!
Per salvare questo valore in una variabile a vostro piacere bisogna fare in seguente modo:
`
*nome_della_vostra_variabile = min_element(nome_del_array.begin(), nome_del_array.end());
`

```cpp
*min_element(nome_del_array.begin(), nome_del_array.end());
```


### accumulate

Con questa funzione siamo in grado di sommare tutti gli elementi del array, potendo indicare anche da dove iniziare a sommare *da_dove_deve_calcolare* solitamente è di valore 0 (calcola da 0)

```cpp
accumulate(nome_del_array.begin(), nome_del_array.end(), da_dove_deve_calcolare);
```



## Array

### begin

```cpp

```


### end


```cpp

```


### size

È una funzione in grado di sostituire il classico sizeof() ma... con un grande ma, anche questa funziona solo con i contenitori. Ovviamente potete assegnare il valore ad una variabile ad vostro piacere (solitamente di tipo int)

```cpp
nome_del_array.size();
```



	