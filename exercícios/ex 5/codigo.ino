const int ledPin = 2; //led no pino 2
const int Botao = 12; //botao no pino 12
int estadoBotao=0; //Variavel para ler o status do pushbutton

void setup(){
    pinMode(ledPin, OUTPUT); //Pino do led será saída
    pinMode(Botao, INPUT); //Pino com botão será entrada
}

void loop(){
    estadoBotao = digitalRead(Botao); 
    if (estadoBotao == LOW){ 
      digitalWrite(ledPin, HIGH);
    }
    else{
      (estadoBotao == HIGH);
      digitalWrite(ledPin, LOW);
      }
      
    
} 
