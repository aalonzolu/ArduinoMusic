// notes of the moledy followed by the duration.
// a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
// !!negative numbers are used to represent dotted notes,
// so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!
void playHarryPotter(int buzzer, int tempo) {
int melody[] = {


  // Hedwig's theme fromn the Harry Potter Movies
  // Socre from https://musescore.com/user/3811306/scores/4906610
  
  REST, 2, NOTE_D4, 4,
  NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4,
  NOTE_G4, 2, NOTE_D5, 4,
  NOTE_C5, -2, 
  NOTE_A4, -2,
  NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4,
  NOTE_F4, 2, NOTE_GS4, 4,
  NOTE_D4, -1, 
  NOTE_D4, 4,

  NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4, //10
  NOTE_G4, 2, NOTE_D5, 4,
  NOTE_F5, 2, NOTE_E5, 4,
  NOTE_DS5, 2, NOTE_B4, 4,
  NOTE_DS5, -4, NOTE_D5, 8, NOTE_CS5, 4,
  NOTE_CS4, 2, NOTE_B4, 4,
  NOTE_G4, -1,
  NOTE_AS4, 4,
     
//  NOTE_D5, 2, NOTE_AS4, 4,//18
//  NOTE_D5, 2, NOTE_AS4, 4,
//  NOTE_DS5, 2, NOTE_D5, 4,
//  NOTE_CS5, 2, NOTE_A4, 4,
//  NOTE_AS4, -4, NOTE_D5, 8, NOTE_CS5, 4,
//  NOTE_CS4, 2, NOTE_D4, 4,
//  NOTE_D5, -1, 
//  REST,4, NOTE_AS4,4,  
//
//  NOTE_D5, 2, NOTE_AS4, 4,//26
//  NOTE_D5, 2, NOTE_AS4, 4,
//  NOTE_F5, 2, NOTE_E5, 4,
//  NOTE_DS5, 2, NOTE_B4, 4,
//  NOTE_DS5, -4, NOTE_D5, 8, NOTE_CS5, 4,
//  NOTE_CS4, 2, NOTE_AS4, 4,
//  NOTE_G4, -1, 
  
};

// sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
// there are two values per note (pitch and duration), so for each note there are four bytes
int notes = sizeof(melody) / sizeof(melody[0]) / 2;

// this calculates the duration of a whole note in ms (60s/tempo)*4 beats
int wholenote = (60000 * 4) / tempo;

int divider = 0, noteDuration = 0;

play(buzzer, melody,noteDuration, wholenote, divider,notes);
}
