#include <Wire.h>
#include <RTClib.h>

//Pins
// Led = R=1 V=2 A=3
// Altavoz = 5

#define LED_ROJO 1
#define LED_VERDE 2
#define LED_AZUL 3
#define ALTAVOZ 5

int activado;
int zumbador = 5;  // Pin del zumbador

// Definir notas musicales y sus frecuencias en Hertz
int doNota = 262;
int reNota = 294;
int miNota = 330;
int faNota = 349;
int solNota = 392;
int laNota = 440;
int siNota = 494;
int doAlta = 523;

void setup() {
    pinMode(LED_ROJO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AZUL, OUTPUT);
  pinMode(ALTAVOZ, OUTPUT);
  pinMode(zumbador, OUTPUT);  // Configurar el pin del zumbador como salida
  digitalWrite(LED_ROJO, LOW); // Encender LED rojo
  digitalWrite(LED_VERDE, LOW); // Encender LED rojo
  digitalWrite(LED_AZUL, LOW); // Encender LED rojo
  digitalWrite(ALTAVOZ, LOW); // Encender LED rojo
digitalWrite(LED_ROJO, HIGH); // Encender LED rojo
Serial.println("Iniciando ErikSistem");

  Serial.begin(9600);
 

  // Inicializa la comunicación serial a 9600 baudios
  
  Serial.begin(9600);
  Serial.println("Iniciando ErikSistem");
   delay(3000);
 digitalWrite(LED_ROJO, LOW); // Encender LED rojo
 Serial.println("ErikSistem iniciado");
 digitalWrite(LED_VERDE, HIGH); // Encender LED verde
   activado = 1;
   }




void loop() {
   if (activado == 1) {
  // Verifica si hay datos disponibles en el monitor serial
  if (Serial.available() > 0) {
    // Lee la entrada del monitor serial
    String input = Serial.readStringUntil('\n');

    // Elimina los espacios en blanco iniciales y finales
    input.trim();

    // Compara la entrada con la palabra "hola"
    if (input.equalsIgnoreCase("hola")) {
      // Responde con "Hola" si la entrada es "hola"
      Serial.println("Hola");
    }

          // Compara la entrada con la palabra "Adios"
    if (input.equalsIgnoreCase("Adios")) {
      // Responde con "Hola" si la entrada es "hola"
      Serial.println("Adios");
            Serial.println("Apagando Sistema");
            delay(3000);
  
            
    }
              // Compara la entrada con la palabra "Adios"
    if (input.equalsIgnoreCase("Creador")) {
      // Responde con "Hola" si la entrada es "hola"
      Serial.println("Creador de ErikSistem: Erik Ripoll");
            Serial.println("En 2019");
            
    }
                  // Compara la entrada con la palabra "Adios"
    if (input.equalsIgnoreCase("Reinicia Erik Sistem")) {
      // Responde con "Hola" si la entrada es "hola"
      Serial.println("Reiniciando ErikSistem");
            Serial.println(".");
            Serial.print("..");
            Serial.print("...");
            delay(2000);
            Serial.println("Iniciando ErikSistem");
            
    }
                  // Compara la entrada con la palabra "Adios"
    if (input.equalsIgnoreCase("Help")) {
      // Responde con "Hola" si la entrada es "hola"
      Serial.println("Commandos:");
      Serial.println("Hola");
      Serial.println("Adios");
      Serial.println("Reinicia Erik Sistem");
      Serial.println("Creador");
      Serial.println("Help");
      Serial.println("Que es ErikConect");
      Serial.println("Search");

            
    }
                      // Compara la entrada con la palabra "Adios"
    if (input.equalsIgnoreCase("Que es ErikConect")) {
      // Responde con "Hola" si la entrada es "hola"
      Serial.println("Es cosa que remplaza a el WIFY en los Erik Sistem");
            
    }
                      // Compara la entrada con la palabra "Adios"
    if (input.equalsIgnoreCase("Search")) {
      // Responde con "Hola" si la entrada es "hola"
      Serial.println("Sugerencias para buscar:");
      Serial.println("Que es un planeta");
      Serial.println("Que es ErikConect");
      Serial.println("Creador");
      Serial.println("Codigos secretos");
            
    }
                      // Compara la entrada con la palabra "Adios"
    if (input.equalsIgnoreCase("Que es un planeta")) {
      // Responde con "Hola" si la entrada es "hola"
      Serial.println("Un planeta es un objeto astronómico que orbita una estrella y que es lo suficientemente masivo");
      Serial.println("Codigos secretos");

            
    }
                      // Compara la entrada con la palabra "Adios"
    if (input.equalsIgnoreCase("Apagar")) {
      // Responde con "Hola" si la entrada es "hola"
      Serial.println("Apagando...");
         activado = 0;
      digitalWrite(LED_VERDE, LOW);  // Apagar LED verde
      digitalWrite(LED_ROJO, LOW); // Encender LED rojo
      digitalWrite(LED_AZUL, LOW); // Encender LED rojo
       digitalWrite(ALTAVOZ, LOW);  // Apagar altavoz
      delay(2000);
      
        Serial.println("Apagado, puede desconectar el dispositivo");
            
    }
        if (input.equalsIgnoreCase("/testsound")) {
      // Responde con "Hola" si la entrada es "hola"
      Serial.println("Probando sonido...");
        digitalWrite(LED_ROJO, HIGH); // Encender LED rojo
      digitalWrite(ALTAVOZ, HIGH); // Encender altavoz
  delay(500);                  // Esperar 500 ms
  digitalWrite(ALTAVOZ, LOW);  // Apagar altavoz
  delay(500);
  digitalWrite(ALTAVOZ, HIGH); // Encender altavoz
  delay(500);                  // Esperar 500 ms
  digitalWrite(ALTAVOZ, LOW);  // Apagar altavoz
    Serial.println("Sonido probado");
    digitalWrite(LED_VERDE, LOW);  // Apagar LED verde
            
    }      
           if (input.equalsIgnoreCase("/testlight")) {
      // Responde con "Hola" si la entrada es "hola"
      Serial.println("Probando la luz...");
        digitalWrite(LED_ROJO, HIGH); // Encender LED rojo
      digitalWrite(LED_AZUL, HIGH); // Encender altavoz
  delay(500);                  // Esperar 500 ms
  digitalWrite(LED_AZUL, LOW);  // Apagar altavoz
  delay(500);
  digitalWrite(LED_VERDE, HIGH); // Encender altavoz
  delay(500);                  // Esperar 500 ms
  digitalWrite(ALTAVOZ, LOW);  // Apagar altavoz
    Serial.println("Luz probada");
    digitalWrite(LED_VERDE, HIGH);  // Apagar LED verde
      digitalWrite(LED_VERDE, LOW);  // Apagar LED verde
        digitalWrite(LED_AZUL, LOW);  // Apagar LED verde
          digitalWrite(LED_ROJO, LOW);  // Apagar LED verde
           digitalWrite(LED_VERDE, HIGH);
            
    }              
      if (input.equalsIgnoreCase("/off")) {
      // Responde con "Hola" si la entrada es "hola"
      Serial.println("Apagando...");
         activado = 0;
      digitalWrite(LED_VERDE, LOW);  // Apagar LED verde
      digitalWrite(LED_ROJO, LOW); // Encender LED rojo
      digitalWrite(LED_AZUL, LOW); // Encender LED rojo
       digitalWrite(ALTAVOZ, LOW);  // Apagar altavoz
      delay(2000);
      
        Serial.println("Apagado, puede desconectar el dispositivo");
            
    }

        if (input.equalsIgnoreCase("Music 1")) {
    tone(zumbador, doNota, 500);  // Nota DO durante 500 ms
  delay(500);                   // Esperar 500 ms
  tone(zumbador, reNota, 500);  // Nota RE durante 500 ms
  delay(500);                   // Esperar 500 ms
  tone(zumbador, miNota, 500);  // Nota MI durante 500 ms
  delay(500);                   // Esperar 500 ms
  tone(zumbador, faNota, 500);  // Nota FA durante 500 ms
  delay(500);                   // Esperar 500 ms
  tone(zumbador, solNota, 500); // Nota SOL durante 500 ms
  delay(500);                   // Esperar 500 ms
  tone(zumbador, laNota, 500);  // Nota LA durante 500 ms
  delay(500);                   // Esperar 500 ms
  tone(zumbador, siNota, 500);  // Nota SI durante 500 ms
  delay(500);                   // Esperar 500 ms
  tone(zumbador, doAlta, 500);  // Nota DO alta durante 500 ms
  delay(500);                   // Esperar 500 ms       
    }

                      
  }
  

         
    
  }
}
