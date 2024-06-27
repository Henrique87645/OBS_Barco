void ultra(){
  media();
  distanciaF = ultrasonicF.read();
  distanciaT = ultrasonicT.read();

  if((mediaDistanciaF > 25) && (mediaDistanciaT < 25) && (controle == false)){
    moverFrente(V);
    Serial.print("Frente");
  } 
  if((mediaDistanciaF < 25) && (mediaDistanciaT > 25) && (controle == false)) {
    moverTras(V);
    Serial.print("Tras");
    controle = true;
  } 
  if ((distanciaT < 5)  && (controle == true)){
    pararMotor(V);
    giroT();
    Serial.print("Parou");
  }
}