const int pinEntrada1 = 11;
const int pinEntrada2 = 10;
const int pinEntrada3 = 9;
const int pinEntrada4 = 8;

const int pinSalida1 = 5;
const int pinSalida2 = 6;
const int pinSalida3 = 7;

void setup() {
  Serial.begin(9600);
  pinMode(pinEntrada1, INPUT);
  pinMode(pinEntrada2, INPUT);
  pinMode(pinEntrada3, INPUT);
  pinMode(pinEntrada4, INPUT);
  pinMode(pinSalida1, OUTPUT);
  pinMode(pinSalida2, OUTPUT);
  pinMode(pinSalida3, OUTPUT);
}

void loop() {
  int lectura1 = digitalRead(pinEntrada1);
  int lectura2 = digitalRead(pinEntrada2);
  int lectura3 = digitalRead(pinEntrada3);
  int lectura4 = digitalRead(pinEntrada4);

  // Muestra los valores en el monitor serie
  Serial.print("Entrada 1: ");
  Serial.println(lectura1);
  Serial.print("Entrada 2: ");
  Serial.println(lectura2);
  Serial.print("Entrada 3: ");
  Serial.println(lectura3);
  Serial.print("Entrada 4: ");
  Serial.println(lectura4);

  // Establece las salidas en función de las entradas
  digitalWrite(pinSalida1, lectura1);
  digitalWrite(pinSalida2, lectura2);
  digitalWrite(pinSalida3, lectura3);

  delay(1000);
}