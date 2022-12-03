int botao = 3;
int ledVerde = 6;  
int ledAmarelo = 5;   
int ledVermelho = 4;   
int estadoBotao = 0;
void setup () { 
  pinMode(ledVerde,OUTPUT);  
  pinMode(ledAmarelo,OUTPUT);  
  pinMode(ledVermelho,OUTPUT);  
  pinMode(botao,INPUT); 
} 
void loop () { 
	estadoBotao = digitalRead(botao); 
    if (estadoBotao == HIGH) { 
      digitalWrite(ledVerde, HIGH); 
      digitalWrite(ledVermelho, LOW); 
      delay(4000); 
      digitalWrite(ledAmarelo, HIGH); 
      digitalWrite(ledVerde, LOW); 
      delay(4000); 
      digitalWrite(ledVermelho, HIGH);
      digitalWrite(ledAmarelo, LOW); 
      delay(4000); 

    } else { 
      digitalWrite(ledVermelho, LOW);  
      digitalWrite(ledVerde, LOW);
      digitalWrite(ledAmarelo, LOW); 
    }       
}