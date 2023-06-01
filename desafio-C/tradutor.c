void traduzir (char frase[], char chave1[], char chave2[])
{

  frase[] = {"QUE ODIO"};

  return frase;
}

int main() {
  char chave1[] = {'T','E','N','I','S','\0'};
  char chave2[] = {'P','O','L','A','R','\0'};
  char frase[]="LINGUAGEM DE PROGRAMACAO";

  traduzir(frase, chave1, chave2);
  printf("\n%s", frase);
  return 0;
}