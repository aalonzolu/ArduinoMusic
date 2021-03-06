void playBaby(int buzzer, int tempo){
  
// notes of the moledy followed by the duration.
// a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
// !!negative numbers are used to represent dotted notes,
// so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!  
int melody[] = {
NOTE_C4, 2, NOTE_D4,  2, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  8, NOTE_F4,  4, NOTE_F4,  8, NOTE_F4,  4, NOTE_C4, 
  4, NOTE_D4,  4, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  8, NOTE_F4,  4, NOTE_F4,  8, NOTE_F4,  4, NOTE_C4, 
  4, NOTE_D4,  4, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  8, NOTE_F4,  4, NOTE_F4,  8, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  4, NOTE_E4,  2, 0, 
  2, NOTE_C4,  
    2, NOTE_D4,  2, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  8, NOTE_F4,  4, NOTE_F4,  8, NOTE_F4,  4, NOTE_C4, 
  4, NOTE_D4,  4, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  8, NOTE_F4,  4, NOTE_F4,  8, NOTE_F4,  4, NOTE_C4, 
  4, NOTE_D4,  4, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  8, NOTE_F4,  4, NOTE_F4,  8, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  4, NOTE_E4,  2, 0,  
    2, NOTE_A4,  
    2, NOTE_G4,  2, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  8, NOTE_F4,  4, NOTE_F4,  8, NOTE_F4,  4, NOTE_C4, 
  4, NOTE_D4,  4, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  8, NOTE_F4,  4, NOTE_F4,  8, NOTE_F4,  4, NOTE_C4, 
  4, NOTE_D4,  4, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  8, NOTE_F4,  4, NOTE_F4,  8, NOTE_F4,  4, NOTE_F4,  4, NOTE_F4,  4, NOTE_E4,  2,
};

// sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
// there are two values per note (pitch and duration), so for each note there are four bytes
int notes = sizeof(melody) / sizeof(melody[0]) / 2;

// this calculates the duration of a whole note in ms
int wholenote = (60000 * 4) / tempo;

int divider = 0, noteDuration = 0;

play(buzzer, melody,noteDuration, wholenote, divider,notes);
}
