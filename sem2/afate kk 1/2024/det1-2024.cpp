/*
1. (9 pikë) Të definohet klasa Database sipas pikave në vijim:
a. (1 pikë) Klasa të ketë anëtarët: hostname (private), port (private), tableName (public), dbType (public).
b. (1 pikë) Klasa të ketë të definuar një konstruktor pa parametra, i cili inicializon anëtarët privat të klasës me vlera paraprake (string të zbrazët dhe -1 për numra).
c. (2 pikë) Të definohen metodat set dhe get për anëtarët privat të klasës.
d. (2 pikë) Të definohet metoda connect, që simulon lidhjen me bazën e të dhënave duke caktuar nga tastiera vlerat e anëtarëve hostname dhe port dhe shtyp në ekran mesazhin “Lidhja është e suksesshme” pasi i cakton këto vlera.
e. (2 pikë) Të definohet metoda checkConnection, me tip kthyes bool, që kontrollon nëse janë vendosur vlerat e hostname dhe port-it. Nëse nuk janë, printon një mesazh “Lidhja është e pavlefshme” dhe kthen false.
f. (1 pikë) Brenda funksionit main, të deklarohet një instancë e klasës Database dhe të inicializohen anëtarët tableName dhe dbType me vlera të caktuara. Thirrni metodat connect dhe checkConnection.
*/