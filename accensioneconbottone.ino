// CODICE BOTTONE CON LED


const int pinButton = 2;
const int pinLed = 11;
int valButton=LOW;
int valButtonOld=LOW;
int ledState=LOW;

void setup() { 
    pinMode(pinButton,INPUT);
    pinMode(pinLed,OUTPUT);
    Serial.begin(9600);
}

void loop() { 
    valButton=digitalRead(pinButton);
    if(valButton==HIGH && valButtonOld==LOW)
    { 
        ledState =! ledState;
    }

    if (ledState==HIGH)
    { 
     Serial.println("il led è acceso");

    }
    else
    { 
        Serial.println("il led è spento");
    }

digitalWrite(pinLed, ledState);
valButtonOld=valButton;
}