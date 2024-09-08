int sensorPin = A0;  // Broche à laquelle le capteur est connecté
int sensorValue = 0;  // Variable pour stocker la valeur lue

void setup() {
  Serial.begin(9600);  // Initialisation de la communication série
}

void loop() {
  sensorValue = analogRead(sensorPin);  // Lecture de la valeur du capteur
  float temperature = (sensorValue * 5.0 * 100.0) / 1024.0;  // Conversion en degrés Celsius
  Serial.print("Température : ");
  Serial.print(temperature);
  Serial.println(" °C");
  delay(1000);  // Attente de 1 seconde avant la prochaine lecture
}
