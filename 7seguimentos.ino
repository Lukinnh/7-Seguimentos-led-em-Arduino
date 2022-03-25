const int display_1_Pinout[7] = { 2, 3, 4, 5, 6, 7, 8 };
const byte anodeDisplay[10] =
 {
   0b1000000, //0
   0b1111001, //1
   0b0100100, //2
   0b0110000, //3
   0b0011001, //4
   0b0010010, //5
   0b0000010, //6
   0b1111000, //7
   0b0000000, //8
   0b0010000, //9
 };
 
/*********************************************************/
void setup()
 {
   for(int i = 0; i < 7; i++)
     {
       pinMode(display_1_Pinout[i], OUTPUT);
     }
 }
 /*************************************************************/
void Display_1_Write(int number)
 {
   byte numberBit = anodeDisplay[number];
  
   for (int i = 0; i < 7; i++)
     {
        int bit = bitRead(numberBit, i);
        digitalWrite(display_1_Pinout[i], bit);
     }
 }
 
/*******************************************************/
void loop()
 {
   for(int cnt=0; cnt<10; cnt++)
     {
       Display_1_Write(cnt);
       delay(1000);
     }
 }
