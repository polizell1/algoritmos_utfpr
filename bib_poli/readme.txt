Como usar a BibPoli

Se você quiser apenas testar as funções é compilar e executar a "main.c"

Mas caso queira usar em codigo própio, deve-se:

--Copiar o arquivo <bibpoli.h> na mesma pasta do seu codigo:
--Declarar a biblioteca com o seguinte comando <"bibpoli.h">

Funões e seus parametros:

int Fatorial()
-Retorna o fatorial de um numero inteiro positivo qualquer
Parametro: Um int positivo qualquer;
ex:
    int x = 5;
    Fatorial(x);


int Potencia()
-Retorna a potencia de um numero inteiro positivo qualquer
Parametro: Um int positivo qualquer como base; Um int positivo qualquer como expoente.
ex:
    int x = 5, y = 3;
    Potencia(x, y);

int SomaFibonacci()
-Retorna a soma de um determinado numero de termos na escala SomaFibonacci
Parametro: Um int positivo qualquer;

float MediaAltura()
-Pergunta a altura de cada individuo em float
-Retorna a media das alturas
Parametro: Um int positivo qualquer;
ex:
    int x = 3;
    MediaAltura(x);

fim--