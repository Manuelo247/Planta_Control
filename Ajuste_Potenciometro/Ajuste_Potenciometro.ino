int IN3 = 5;    // Input3 conectada al pin 5 -> bomba
int IN4 = 4;    // Input4 conectada al pin 4 -> bomba
int ENB = 3;    // ENB conectada al pin 3 de Arduino -> Enable de bomba
int VALV = 8;
int SENS = A0;
int POTEN = A1;

int sensor;
int medicion;
int potencimetro;
int margen = 20;
int margenSuperior;
int margenInferior;

void setup()
{
  pinMode(ENB, OUTPUT); 
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(VALV, OUTPUT);

  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, LOW);
  
  Serial.begin(9600);
  

 
}


void loop()
{
  potencimetro = analogRead(POTEN);

  potencimetro = map(potencimetro,70,950,60,320);
  
  Serial.print("Potenciometro: ");
  Serial.println(potencimetro);
  delay(100);
}
