# Notes sur la configuration

## Thermistor

Nom utilisé par dagoma :

- 16 100K thermistor - Alternative ATC Semitec 104GT-2 (4.7k pullup) Dagoma.Fr version (measured/tested/approved)
- **17** 100K thermistor - Alternative ATC Semitec 104GT-2 (4.7k pullup) Dagoma.Fr - MKS_Base - version (measured/tested/approved)

R25=100k
B=4267K

  16;309
  18;307
  20;300
  22;293
  26;284
  29;272
  33;266
  36;260
  42;252
  46;247
  48;244
  51;241
  62;231
  73;222
  78;219
  87;212
  98;207
  109;201
  118;197
  131;191
  145;186
  160;181
  177;175
  203;169
  222;164
  256;156
  283;151
  312;145
  343;140
  377;131
  413;125
  454;119
  496;113
  537;108
  578;102
  619;97
  658;92
  695;87
  735;81
  773;75
  808;70
  844;64
  868;59
  892;54
  914;49
  935;42
  951;38
  967;32
  975;28
  1000;20
  1010;10
  1024;-273

Choisi qui semble équivalent au 17 :
therm 5   : thermistor_5.h

## Pins

Création de BOARD_DISCOEASY avec le branchement bizare par défaut + ma modif de z stop.
