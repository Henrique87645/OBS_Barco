#include <Ultrasonic.h>
#include <MPU6050_tockn.h>
#include <Wire.h>

//motor A
int IN1 = 2;
int IN2 = 3;

//motor B
int IN3 = 4;
int IN4 = 5;

//VELOCIDADE
int V = 110;

// DEFINIÇÕES
#define DEBUG
#define MPU6050_ADDR 0x68  // ENDEREÇO QUANDO O PINO AD0 ESTIVER LIGADO AO GND
//#define MPU6050_ADDR         0x69 // ENDEREÇO QUANDO O PINO AD0 ESTIVER LIGADO AO VCC

// INSTANCIANDO OBJETOS
MPU6050 mpu6050(Wire);
Ultrasonic ultrasonicF (9, 10);
Ultrasonic ultrasonicT (12, 13);

// DECLARAÇÃO DE VARIÁVEIS
bool controle = false;
float anguloZ;

double distanciaF = 0;
double somaDistanciasF = 0;
double mediaDistanciaF;
int numeroDeLeiturasF = 25; // quantidade de leituras para calcular a média

double distanciaT = 0;
double somaDistanciasT = 0;
double mediaDistanciaT;
int numeroDeLeiturasT = 25; // quantidade de leituras para calcular a média

void setup() {
  Serial.begin(9600);
  Wire.begin();
  mpu6050.begin();
  mpu6050.calcGyroOffsets(false);  // MUDAR PARA "true" SE QUISER VISUALIZAR INFORMAÇÕES DE CALIBRAÇÃO NO MONITOR SERIAL
#ifdef DEBUG
  Serial.println("Fim Setup");
#endif
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  //DEFINICOES
  mpu6050.update();
  distanciaF = ultrasonicF.read();
  distanciaT = ultrasonicT.read();
  
  //VOIDS
  ultra();
  media();
  giroF();
  giroT();

  
  Serial.print(mediaDistanciaT);
  Serial.print(" -|- ");
  Serial.println(mediaDistanciaF);
  delay(500);

  // Serial.print(distanciaT);
  // Serial.print(" -|- ");
  //Serial.println(distanciaF);
  //delay(500);

}