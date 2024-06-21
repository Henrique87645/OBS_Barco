void media(){
 somaDistanciasF = 0; // reinicia a soma a cada ciclo de média
  for (int i = 0; i < numeroDeLeiturasF; i++) {
    somaDistanciasF += distanciaF; // Adiciona a distância à soma total
    delay(50);
  }
  mediaDistanciaF = somaDistanciasF / numeroDeLeiturasF;
//-------------------------------------------------------------------------------
  somaDistanciasT = 0; // reinicia a soma a cada ciclo de média
  for (int i = 0; i < numeroDeLeiturasT; i++) {
    somaDistanciasT += distanciaT; // Adiciona a distância à soma total
    delay(50);
  }
  mediaDistanciaT = somaDistanciasT / numeroDeLeiturasT;
}