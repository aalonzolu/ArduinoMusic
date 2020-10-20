#include <avr/sleep.h>//this AVR library contains the methods that controls the sleep modes

#include"pitches.h"
#include"baby.h"
#include"harrypotter.h"
//#include"canonind.h"
#include"nokia.h"
#include"pacman.h"
#include"zelda.h"
//#include"zeldal.h"
#include"mario.h"
#include"navidad.h"


#define interruptPin 2 //Pin we are going to use to wake up the Arduino
#define buzzer 3

void setup() {
  Serial.begin(115200);//Start Serial Comunication
  pinMode(LED_BUILTIN,OUTPUT);//We use the led on pin 13 to indecate when Arduino is A sleep
  pinMode(interruptPin,INPUT_PULLUP);//Set pin d2 to input using the buildin pullup resistor
  digitalWrite(LED_BUILTIN,HIGH);//turning LED on

    pinMode(5,OUTPUT); // led pin
}

void loop() {
// delay(1000);//wait 5 seconds before going to sleep
// playBaby(buzzer,260);
 playMusicByCounter(random(0,6));
 Going_To_Sleep();
}

void Going_To_Sleep(){
  Serial.println("Sleeping...");
    digitalWrite(LED_BUILTIN,LOW);//turning LED off
    sleep_enable();//Enabling sleep mode
    attachInterrupt(0, wakeUp, LOW);//attaching a interrupt to pin d2
    set_sleep_mode(SLEEP_MODE_PWR_DOWN);//Setting the sleep mode, in our case full sleep
    delay(1000); //wait a second to allow the led to be turned off before going to sleep
    sleep_cpu();//activating sleep mode
    Serial.println("just woke up!");//next line of code executed after the interrupt 
    digitalWrite(LED_BUILTIN,HIGH);//turning LED on
  }

void wakeUp(){
  Serial.println("Interrrupt Fired");//Print message to serial monitor
  delay(500);
  sleep_disable();//Disable sleep mode
  detachInterrupt(0); //Removes the interrupt from pin 2;
 
}

void playMusicByCounter( int musicCounter){
  Serial.print("counter: ");
    Serial.println(musicCounter);
        if(musicCounter==0){
        playBaby(buzzer,260);
    }
    else if(musicCounter==1){
          playZelda(buzzer,150);
    }
    else if(musicCounter==2){
          playPacman(buzzer,200);
    }
    else if(musicCounter==3){
          playNokia(buzzer,200);
    }
    else if(musicCounter==4){
          playMario(buzzer,300);
    }
    else if(musicCounter==5){
            playHarryPotter(buzzer,200);
    }
    else if(musicCounter==6){
            playNavidad(buzzer,200);
    }
    else if(musicCounter==7){
            playBaby(buzzer,260);
    }
    else if(musicCounter==8){
            playPacman(buzzer,260);
    }
    delay(30);
}
