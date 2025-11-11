
// Definim una constant per al pin on hem connectat el LED
const int LED_PIN = 22;
int tiempo=1000;
int apagada=1000;
// La funció setup() s'executa un cop quan la placa arrenca
void setup() {
  // Configurem el pin del LED com una SORTIDA (OUTPUT)
  pinMode(LED_PIN, OUTPUT);
}

// La funció loop() s'executa contínuament
void loop() {
  digitalWrite(LED_PIN, HIGH);  // Envia 3.3V al pin (encén el LED)
  delay(tiempo);                  // Espera 1000 mil·lisegons (1 segon)
  
  digitalWrite(LED_PIN, LOW);   // Envia 0V al pin (apaga el LED)
  delay(apagada);                  // Espera 1 segon
}
