void giroF(){
  anguloZ = mpu6050.getAngleZ();
  
  // VERIFICA SE GIROU NO EIXO Z
  if (anguloZ >= 25){
    Serial.println("Correção frente na rota para a direita...");
      moverDireita(V);
      delay(200);
    
  } if (anguloZ <= -25){
    Serial.println("Correção frente na rota para a esquerda...");
      moverEsquerda(V);
      delay(200);
    
  } if ((anguloZ < 24) && (anguloZ > -24)) {
    Serial.println("Nada detectado em frente...");
    moverFrente(V);
    delay(200);
  }
}

//GIRAR PARA TRAS
void giroT(){
  anguloZ = mpu6050.getAngleZ();
  
  // VERIFICA SE GIROU NO EIXO Z
  if (anguloZ >= 25){
    Serial.println("Correção tras na rota para a esquerda...");
      moverEsquerda(V);
      delay(200);

  } if (anguloZ <= -25){
    Serial.println("Correção tras na rota para a direita...");
      moverDireita(V);
      delay(200);

  } if ((anguloZ < 24) && (anguloZ > -24)) {
    Serial.println("Nada detectado à tras...");
    moverFrente(V);
    delay(200);
  }
}