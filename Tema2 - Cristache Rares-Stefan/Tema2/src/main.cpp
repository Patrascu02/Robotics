#include <Arduino.h>

const int ledRosu = 6;
const int ledVerde = 5;
const int ledAlbastru = 4;
const int ButStart = 3;
const int ButLev = 2;

char* typeracer_words[] = {
    (char*)"apple", (char*)"banana", (char*)"cherry", (char*)"date", 
    (char*)"elephant", (char*)"fig", (char*)"grape", (char*)"honey", 
    (char*)"igloo", (char*)"jungle", (char*)"kite", (char*)"lemon", 
    (char*)"mango", (char*)"nest", (char*)"orange", (char*)"plum", 
    (char*)"quartz", (char*)"river", (char*)"star", (char*)"tree", 
    (char*)"unicorn", (char*)"violet", (char*)"water", (char*)"xylophone", 
    (char*)"yellow", (char*)"zebra"
};

void SelectareNivel();
void IntrerupereStart();
void Blink();
void CitireCuvinte();

unsigned int index = 0;
unsigned long lastDebounceTime = 0;
const int debounceDelay = 50;
volatile bool startFlag = false;
unsigned long startTime = 0;
unsigned long timeLimit = 5000;
unsigned int scor = 0;
bool gameActive = false;

void setup() {
  Serial.begin(9600);
  pinMode(ledRosu, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAlbastru, OUTPUT);
  pinMode(ButStart, INPUT_PULLUP);
  pinMode(ButLev, INPUT_PULLUP);
  digitalWrite(ledRosu, HIGH);
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledAlbastru, HIGH);
  attachInterrupt(digitalPinToInterrupt(ButStart), IntrerupereStart, FALLING);
  attachInterrupt(digitalPinToInterrupt(ButLev), SelectareNivel, FALLING);
}

void SelectareNivel() {
  if (millis() - lastDebounceTime > debounceDelay) {
    lastDebounceTime = millis();
    index = (index + 1) % 3;

    if (index == 0) {
      timeLimit = 5000;
      Serial.println("Easy mode ON!");
    } else if (index == 1) {
      timeLimit = 3000;
      Serial.println("Medium mode ON!");
    } else {
      timeLimit = 2000;
      Serial.println("Hard mode ON!");
    }
  }
}

void IntrerupereStart() {
  if (gameActive) {
    gameActive = false; 
    Serial.println("Joc oprit.");
    digitalWrite(ledRosu, HIGH);
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAlbastru, HIGH);
    scor = 0; 
  } else {
    startFlag = true; 
  }
}

void Blink() {
  unsigned long currentMillis = millis();
  static unsigned long lastBlinkTime = 0;
  static int count = 3;
  static bool ledState = false;

  if (currentMillis - lastBlinkTime >= 1000 && count > 0) {
    lastBlinkTime = currentMillis;
      while(count) {
        Serial.println(count);
        count--;
      }
    ledState = !ledState;
    digitalWrite(ledRosu, ledState);
    digitalWrite(ledVerde, ledState);
    digitalWrite(ledAlbastru, ledState);
  } else if (count == 0) {
    digitalWrite(ledRosu, HIGH);
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAlbastru, HIGH);
    count = 3;
    startTime = millis();
    gameActive = true; 
  }
}

void CitireCuvinte() {
  while (millis() - startTime < 30000 && gameActive) {
    int randomIndex = random(0, 25); 
    char* cuvant = typeracer_words[randomIndex];

    Serial.print("Scrie cuvantul: ");
    Serial.println(cuvant);

    char cuvantScris[20] = ""; 
    int i = 0;
    bool corect = true;
    unsigned long cuvantStartTime = millis();

    digitalWrite(ledRosu, LOW);
    digitalWrite(ledVerde, LOW);

    while (cuvant[i] != '\0' && (millis() - cuvantStartTime) < timeLimit && gameActive) {
      if (Serial.available() > 0) {
        char caracterTastat = Serial.read();

        if (caracterTastat == '\b') { 
          if (i > 0) {
            i--; 
            cuvantScris[i] = '\0'; 
            Serial.print("\b \b");
          }
        } else if (caracterTastat == cuvant[i]) {
          cuvantScris[i] = caracterTastat; 
          digitalWrite(ledRosu, LOW);
          digitalWrite(ledVerde, HIGH);
          Serial.print(caracterTastat);
          i++;
        } else {
          digitalWrite(ledRosu, HIGH);
          digitalWrite(ledVerde, LOW);
          corect = false;
        }
      }
    }

    if (corect && cuvant[i] == '\0') {
      scor++;
      Serial.println("\nCuvant corect!");
    } else {
      Serial.println("\nCuvant gresit sau timp expirat!");
      scor--;
    }
  }
  if(scor != 0 && scor!= 65533){
  Serial.print("Scor final: ");
  Serial.println(scor);
  scor = 0;
  }
  gameActive = false; 
}

void loop() {
  if (startFlag) {
    startFlag = false;
    Blink();
    CitireCuvinte();
  }
}
