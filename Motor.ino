void moverDireita(unsigned char V)
{
 digitalWrite(IN1,LOW);
 digitalWrite(IN2,V+80);
 digitalWrite(IN3,LOW);
 digitalWrite(IN4,V-80);
} 

void moverEsquerda(unsigned char V)
{
 digitalWrite(IN1,LOW);
 digitalWrite(IN2,V-80);
 digitalWrite(IN3,LOW);
 digitalWrite(IN4,V+80);
} 
void moverFrente(unsigned char V)
{
 digitalWrite(IN1,LOW);
 digitalWrite(IN2,HIGH);
 digitalWrite(IN3,LOW);
 digitalWrite(IN4,HIGH);
} 

void moverTras(unsigned char V)
{
 digitalWrite(IN1,HIGH);
 digitalWrite(IN2,LOW);
 digitalWrite(IN3,HIGH);
 digitalWrite(IN4,LOW);
}

void pararMotor(unsigned char V)
{
 digitalWrite(IN1,HIGH);
 digitalWrite(IN2,HIGH);
 digitalWrite(IN3,HIGH);
 digitalWrite(IN4,HIGH);
}