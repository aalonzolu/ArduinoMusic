void playZelda(int buzzer,int tempo) {
int melody[] = {

  //Based on the arrangement at https://www.flutetunes.com/tunes.php?id=169
  
//  NOTE_AS4,-2,  NOTE_F4,8,  NOTE_F4,8,  NOTE_AS4,8,//1
//  NOTE_GS4,16,  NOTE_FS4,16,  NOTE_GS4,-2,
//  NOTE_AS4,-2,  NOTE_FS4,8,  NOTE_FS4,8,  NOTE_AS4,8,
//  NOTE_A4,16,  NOTE_G4,16,  NOTE_A4,-2,
//  REST,1, 

  NOTE_AS4,4,  NOTE_F4,-4,  NOTE_AS4,8,  NOTE_AS4,16,  NOTE_C5,16, NOTE_D5,16, NOTE_DS5,16,//7
  NOTE_F5,2,  NOTE_F5,8,  NOTE_F5,8,  NOTE_F5,8,  NOTE_FS5,16, NOTE_GS5,16,
  NOTE_AS5,-2,  NOTE_AS5,8,  NOTE_AS5,8,  NOTE_GS5,8,  NOTE_FS5,16,
  NOTE_GS5,-8,  NOTE_FS5,16,  NOTE_F5,2,  NOTE_F5,4, 

  NOTE_DS5,-8, NOTE_F5,16, NOTE_FS5,2, NOTE_F5,8, NOTE_DS5,8, //11
  NOTE_CS5,-8, NOTE_DS5,16, NOTE_F5,2, NOTE_DS5,8, NOTE_CS5,8,
  NOTE_C5,-8, NOTE_D5,16, NOTE_E5,2, NOTE_G5,8, 
  NOTE_F5,16, NOTE_F4,16, NOTE_F4,16, NOTE_F4,16,NOTE_F4,16,NOTE_F4,16,NOTE_F4,16,NOTE_F4,16,NOTE_F4,8, NOTE_F4,16,NOTE_F4,8,

//  NOTE_AS4,4,  NOTE_F4,-4,  NOTE_AS4,8,  NOTE_AS4,16,  NOTE_C5,16, NOTE_D5,16, NOTE_DS5,16,//15
//  NOTE_F5,2,  NOTE_F5,8,  NOTE_F5,8,  NOTE_F5,8,  NOTE_FS5,16, NOTE_GS5,16,
//  NOTE_AS5,-2, NOTE_CS6,4,
//  NOTE_C6,4, NOTE_A5,2, NOTE_F5,4,
//  NOTE_FS5,-2, NOTE_AS5,4,
//  NOTE_A5,4, NOTE_F5,2, NOTE_F5,4,
//
//  NOTE_FS5,-2, NOTE_AS5,4,
//  NOTE_A5,4, NOTE_F5,2, NOTE_D5,4,
//  NOTE_DS5,-2, NOTE_FS5,4,
//  NOTE_F5,4, NOTE_CS5,2, NOTE_AS4,4,
//  NOTE_C5,-8, NOTE_D5,16, NOTE_E5,2, NOTE_G5,8, 
//  NOTE_F5,16, NOTE_F4,16, NOTE_F4,16, NOTE_F4,16,NOTE_F4,16,NOTE_F4,16,NOTE_F4,16,NOTE_F4,16,NOTE_F4,8, NOTE_F4,16,NOTE_F4,8
  
};

// sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
// there are two values per note (pitch and duration), so for each note there are four bytes
int notes=sizeof(melody)/sizeof(melody[0])/2; 

// this calculates the duration of a whole note in ms (60s/tempo)*4 beats
int wholenote = (60000 * 4) / tempo;

int divider = 0, noteDuration = 0;


  play(buzzer, melody,noteDuration, wholenote, divider,notes);
  
}
