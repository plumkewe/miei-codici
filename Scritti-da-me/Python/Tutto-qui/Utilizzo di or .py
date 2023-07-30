eta=float(input("Scrivi la tua eta: "))
colore=input("Scrivi il tuo colore preferito: ")
classe=int(input("Scrivi la classe che stai frequentando in questo momento: "))
if eta >= 12 and colore == "blu" or colore == "verde" or colore == "arancione" and classe>=5:
    print("Sei pronto per giocare a questo gioco!")
else:
    print("Mi dispiace non puoi giocare a questo gioco, proba tra qualche anno!")
