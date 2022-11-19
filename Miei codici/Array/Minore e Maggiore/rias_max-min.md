# Riassunti,

###### qui troverai dei codici estratti per scegliere quel è il modo più adatto e in quanti modi si può farlo, se conviene e cet.

###### Incide: <br /> 

- [Sort](#Sort) <br /> 
- [Min/Max element](#Min-element-e-Max-element)


## Sort

```
sort(nome_del_array, nome_del_array + di_quanti_elementi_è_composto);
```

Utilizzando la funzione "sort" che si trova nel **HEADER** alghorithm (non scordatevi di includerlo) ordiniamo l'array in modo crescente (1,2,3,4...) facendo così l'elemento che si trova al indice [0] sarà più piccolo e quello che si trova all'ultimo indice sarà più grande. Per stampare l'ultimo elemento utilizziamo il codice che ha la seguente sintassi: <br /> 
`nome_del_array[di_quanti_elementi_è_composto - 1]`

###### Svantagi :thumbsdown:,

- riordina completamente l'array

###### [Esercizio svolto :articulated_lorry:]()



## Min element e Max element

```
tipo (int, double...) *nome_della_variabile_nella_cui_si_vuole_salvare_il_valore_massimo = max_element(begin(nome_del_array), end(nome_del_array)); <br /> 
```
```
tipo (int, double...) *nome_della_variabile_nella_cui_si_vuole_salvare_il_valore_minimo= min_element(begin(nome_del_array), end(nome_del_array));
```
###### ! non scordatevi del asterisco * è MOLTO importante

Sono due funzioni differenti ma con la stessa sintassi, il loro vantaggio è quello che indipendentemente dal ordine che ce nel array possono trovare l'elemento più grande e più piccolo senza nessuna modifica all'array è lo fanno creando un range in questo caso ho utilizzato *begin* e *end* ma potete usare il vostro metodo preferito. Queste funzioni si trovano nel **HEADER** alghorthm non scordatevi di includerlo, comunque header è come inizializzazione delle variabili, solo che in questo caso si inizializzano le funzioni aggiuntive comprese nei HEADER che sono delle raccolte di esse. Per stampare il valore più grande e più piccolo scriviamo questo codice con la seguente sintassi: <br /> 
`*nome_della_variabile_nella_cui_abbiamo_salvato_il_valore_minimo` <br /> 
`*nome_della_variabile_nella_cui_abbiamo_salvato_il_valore_massimo`

###### [Esercizio svolto :articulated_lorry:]()
