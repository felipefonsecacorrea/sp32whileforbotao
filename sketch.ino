#define leds 4
#define button 15

int esquerda[leds] = {0, 2, 16, 5};
int direita[leds] = {19, 21, 22, 23};

void setup() {
  for(int i = 0; i < leds; i++){
    pinMode(esquerda[i], OUTPUT);
    pinMode(direita[i], OUTPUT);
  }

  pinMode(button, INPUT_PULLUP);
}

void loop() {
  
  while (digitalRead(button) == HIGH){
    int i = 0;
    while (i < leds){      
      digitalWrite(esquerda[i], HIGH);
      digitalWrite(direita[leds - 1 - i], HIGH);
      delay(250);
      digitalWrite(esquerda[i], LOW);
      digitalWrite(direita[leds - 1 - i], LOW);
      i++;
    }

    for (int i = 0; i < leds; i++){
        
      digitalWrite(esquerda[i], HIGH);
      digitalWrite(direita[i], HIGH);
      delay(250);
      digitalWrite(esquerda[i], LOW);
      digitalWrite(direita[i], LOW);
    }
  }
}
