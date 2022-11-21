# Riassunti,

###### qui troverai dei codici estratti per scegliere qual è il modo più adatto e in quanti modi si può farlo, se conviene e cet.

###### Incide: <br /> 

- [Valori del utente](#Del-utente) <br />
- [Valori uguali](#Uguali) <br />
- [Valori crescenti](#Crescenti) <br />
- [Valori casuali](#Casuali)

## Del utente



## Uguali

```

```

## Crescenti



## Casuali

Per riempire un array con dei valori casuali (ma limitati) bisogna innanzitutto dichiarare dei **HEADER** per la funzionalità rand e sono:
`
#include <stdlib.h>
#include <time.h>
`

Per fare si che i valori siamo veramente casuali scriviamo il seguente codice:

```
srand(time(NULL));
```

dopo di che assegnamo il nostro valore casuale ad un elemento nel array utilizziamo il ciclo for, per fare ciò creiamo il nostro ciclo che come incremento avrà posizione_del_elemento (solitamente è 'i') bene e per limitare i numeri casuali scriviamo %limite (dev'essere un numero intero)

```
nome_del_array[posizione_del_elemento] = rand()%limite;
```