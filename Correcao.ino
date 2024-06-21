void giroF(){
  anguloZ = mpu6050.getAngleZ();
  
  // VERIFICA SE GIROU NO EIXO Z
  if (anguloZ >= 50){
    moverEsquerda(V);
    Serial.println("Correção esq frente");
    delay(800);  
  }
  if (anguloZ <= -50){
    moverDireita(V);
    Serial.println("Correção dir frente");
    delay(800);
  } else {
    moverFrente(V);
    Serial.println("tudo ok frente");
    delay(800);
  }
}

//GIRAR PARA TRAS
void giroT(){
  anguloZ = mpu6050.getAngleZ();
  
  // VERIFICA SE GIROU NO EIXO Z
  if (anguloZ <= -50){
    moverEsquerda(V);
    Serial.println("Correção esq tras");
    delay(800);
  }
  if (anguloZ >= +50){
    moverDireita(V);
    Serial.println("Correção dir tras");
    delay(800);
  } else {
    moverTras(V);
    Serial.println("tudo ok tras");
    delay(800);
  }
}