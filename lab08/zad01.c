//Jakie będą skutki rozwinięcia następującej makrodefinicji?
//Najpierw zgadnąć, a potem sprawdzić komendą
//gcc -E plik
//Na pewno wypisze ze W Polszy OBOWIAZUJE zloty podobnie z reszta krajow
#define INFO(kraj, waluta) W kraj OBOWIAZUJE waluta.
INFO(Polsce, zloty)
INFO(Rosji, rubel)
INFO(Slowacji, euro)
