void playNavidad(int buzzer, int tempo){
  
int melody[] = {

  // We Wish You a Merry Christmas
  // Score available at https://musescore.com/user/6208766/scores/1497501
  
  NOTE_C5,4, //1
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,

  NOTE_F5,2, NOTE_C5,4, //8 
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,
  NOTE_F5,2, 
//  NOTE_C5,4,

//  NOTE_F5,4, NOTE_F5,4, NOTE_F5,4,//17
//  NOTE_E5,2, NOTE_E5,4,
//  NOTE_F5,4, NOTE_E5,4, NOTE_D5,4,
//  NOTE_C5,2, NOTE_A5,4,
//  NOTE_AS5,4, NOTE_A5,4, NOTE_G5,4,
//  NOTE_C6,4, NOTE_C5,4, NOTE_C5,8, NOTE_C5,8,
//  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,
//  NOTE_F5,2, NOTE_C5,4, 
//  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,
//  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,
  
//  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8, //27
//  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,
//  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,
//  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,
//  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,
//  NOTE_F5,2, NOTE_C5,4,
//  NOTE_F5,4, NOTE_F5,4, NOTE_F5,4,
//  NOTE_E5,2, NOTE_E5,4,
//  NOTE_F5,4, NOTE_E5,4, NOTE_D5,4,
  
//  NOTE_C5,2, NOTE_A5,4,//36
//  NOTE_AS5,4, NOTE_A5,4, NOTE_G5,4,
//  NOTE_C6,4, NOTE_C5,4, NOTE_C5,8, NOTE_C5,8,
//  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,
//  NOTE_F5,2, NOTE_C5,4, 
//  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,
//  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,
//  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8, 
//  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,
//  
//  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,//45
//  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,
//  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,
//  NOTE_F5,2, NOTE_C5,4,
//  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,
//  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,
//  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
//  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,
//  
//  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, //53
//  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,
//  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,
//  NOTE_F5,2, REST,4
};


// sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
// there are two values per note (pitch and duration), so for each note there are four bytes
int notes = sizeof(melody) / sizeof(melody[0]) / 2;

// this calculates the duration of a whole note in ms
int wholenote = (60000 * 4) / tempo;

int divider = 0, noteDuration = 0;

play(buzzer, melody,noteDuration, wholenote, divider,notes);
}
