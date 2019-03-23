int PULSADOR = 2;
int LED = 3;
int ESTADO = LOW;

void setup (){ 
    pinMode(PULSADOR, INPUT);               //Pin 2 IN
    pinMode(LED, OUTPUT);                   //Pin 3 OUT
}

void loop(){
    while(digitalRead(PULSADOR) == LOW){    //Espero a que el pulsador se presione

    }
    ESTADO = digitalRead(LED);              //Leo estado del LED
    digitalWrite(LED, !ESTADO);             //Escribo valor contrario
    while(digitalRead(PULSADOR) == HIGH){

    }
}