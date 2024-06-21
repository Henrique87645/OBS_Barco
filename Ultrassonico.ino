void ultra(){
  media();
  distanciaF = ultrasonicF.read();
  distanciaT = ultrasonicT.read();

  if((distanciaF > 25) && (distanciaT < 25) && (controle == false)){
    moverFrente(V);
    Serial.print("Frente");
  } 
  if((distanciaF < 25) && (distanciaT > 25) && (controle == false)) {
    moverTras(V);
    Serial.print("Tras");
    controle = true;
  } 
  // if ((distanciaT < 5)  && (controle == true)){
  //   pararMotor(V);
  //   Serial.print("Parou");
  // }
}