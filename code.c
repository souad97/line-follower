const char in1 = 8;
const char in2 = 9;
const char in3 = 10;
const char in4 = 11;
const char capteurgauche = 7;
const char capteurdroit = 6;
int etatgauche = 0;
int etatdroit = 0;
void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(capteurgauche, INPUT);
  pinMode(capteurdroit, INPUT);
  Serial.begin(9600);
}

void loop() {
  etatgauche = digitalRead(capteurgauche);
  etatdroit = digitalRead(capteurdroit);
  if((etatgauche)&&(!etatdroit))
  {
    Serial.println("gauuuuuuche ");
    droite();
  }
  else if((!etatgauche)&&(etatdroit))
  {
    Serial.println( "a droiiiiit ");
    gauche();
  }
  else
  {
    Serial.println("continu d'avancer");
    avant();
  }
  
}
void arriere()
{
    digitalWrite(in1,LOW); 
    digitalWrite(in2, HIGH);
    digitalWrite(in3,LOW); 
    digitalWrite(in4, HIGH);  
}
void avant()
{
  digitalWrite(in1,HIGH); 
  digitalWrite(in2, LOW);
  digitalWrite(in3,HIGH); 
  digitalWrite(in4, LOW);
}
void gauche()
{
  digitalWrite(in1,LOW); 
  digitalWrite(in2, HIGH);
  digitalWrite(in3,LOW); 
  digitalWrite(in4, LOW);  
}
void droite()
{
  digitalWrite(in1,LOW); 
  digitalWrite(in2, LOW);
  digitalWrite(in3,LOW); 
  digitalWrite(in4, HIGH);
}
void arret()
{
  digitalWrite(in1,LOW); 
  digitalWrite(in2, LOW);
  digitalWrite(in3,LOW); 
  digitalWrite(in4, LOW);  
}
