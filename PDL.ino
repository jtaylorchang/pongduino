byte PDL_chars[67][8] = {
  {B11111, B11111, B11111, B11111, B11111, B11111, B00000, B00000},//0- paddle (0, 0)
  {B00000, B11111, B11111, B11111, B11111, B11111, B11111, B00000},//1- paddle (0, 1)
  {B00000, B00000, B11111, B11111, B11111, B11111, B11111, B11111},//2- paddle (0, 2)
  {B00000, B00000, B00000, B11111, B11111, B11111, B11111, B11111},//3- paddle (0, 3)
  {B00000, B00000, B00000, B00000, B11111, B11111, B11111, B11111},//4- paddle (0, 4)
  {B00000, B00000, B00000, B00000, B00000, B11111, B11111, B11111},//5- paddle (0, 5)
  {B00000, B00000, B00000, B00000, B00000, B00000, B11111, B11111},//6- paddle (0, 6)
  {B00000, B00000, B00000, B00000, B00000, B00000, B00000, B11111},//7- paddle (0, 7)
  {B11111, B00000, B00000, B00000, B00000, B00000, B00000, B00000},//8- paddle (0, 8)
  {B11111, B11111, B00000, B00000, B00000, B00000, B00000, B00000},//9- paddle (0, 9)
  {B11111, B11111, B11111, B00000, B00000, B00000, B00000, B00000},//10- paddle (0, 10)
  {B11111, B11111, B11111, B11111, B00000, B00000, B00000, B00000},//11- paddle (0, 11)
  {B11111, B11111, B11111, B11111, B11111, B00000, B00000, B00000},//12- paddle (0, 12)
  {B11000, B11000, B00000, B00000, B00000, B00000, B00000, B00000},//13- ball (0, 0)
  {B01100, B01100, B00000, B00000, B00000, B00000, B00000, B00000},//14- ball (1, 0)
  {B00110, B00110, B00000, B00000, B00000, B00000, B00000, B00000},//15- ball (2, 0)
  {B00011, B00011, B00000, B00000, B00000, B00000, B00000, B00000},//16- ball (3, 0)
  {B00001, B00001, B00000, B00000, B00000, B00000, B00000, B00000},//17- ball (4, 0)
  {B10000, B10000, B00000, B00000, B00000, B00000, B00000, B00000},//18- ball (5, 0)
  {B00000, B11000, B11000, B00000, B00000, B00000, B00000, B00000},//19- ball (0, 1)
  {B00000, B01100, B01100, B00000, B00000, B00000, B00000, B00000},//20- ball (1, 1)
  {B00000, B00110, B00110, B00000, B00000, B00000, B00000, B00000},//21- ball (2, 1)
  {B00000, B00011, B00011, B00000, B00000, B00000, B00000, B00000},//22- ball (3, 1)
  {B00000, B00001, B00001, B00000, B00000, B00000, B00000, B00000},//23- ball (4, 1)
  {B00000, B10000, B10000, B00000, B00000, B00000, B00000, B00000},//24- ball (5, 1)
  {B00000, B00000, B11000, B11000, B00000, B00000, B00000, B00000},//25- ball (0, 2)
  {B00000, B00000, B01100, B01100, B00000, B00000, B00000, B00000},//26- ball (1, 2)
  {B00000, B00000, B00110, B00110, B00000, B00000, B00000, B00000},//27- ball (2, 2)
  {B00000, B00000, B00011, B00011, B00000, B00000, B00000, B00000},//28- ball (3, 2)
  {B00000, B00000, B00001, B00001, B00000, B00000, B00000, B00000},//29- ball (4, 2)
  {B00000, B00000, B10000, B10000, B00000, B00000, B00000, B00000},//30- ball (5, 2)
  {B00000, B00000, B00000, B11000, B11000, B00000, B00000, B00000},//31- ball (0, 3)
  {B00000, B00000, B00000, B01100, B01100, B00000, B00000, B00000},//32- ball (1, 3)
  {B00000, B00000, B00000, B00110, B00110, B00000, B00000, B00000},//33- ball (2, 3)
  {B00000, B00000, B00000, B00011, B00011, B00000, B00000, B00000},//34- ball (3, 3)
  {B00000, B00000, B00000, B00001, B00001, B00000, B00000, B00000},//35- ball (4, 3)
  {B00000, B00000, B00000, B10000, B10000, B00000, B00000, B00000},//36- ball (5, 3)
  {B00000, B00000, B00000, B00000, B11000, B11000, B00000, B00000},//37- ball (0, 4)
  {B00000, B00000, B00000, B00000, B01100, B01100, B00000, B00000},//38- ball (1, 4)
  {B00000, B00000, B00000, B00000, B00110, B00110, B00000, B00000},//39- ball (2, 4)
  {B00000, B00000, B00000, B00000, B00011, B00011, B00000, B00000},//40- ball (3, 4)
  {B00000, B00000, B00000, B00000, B00001, B00001, B00000, B00000},//41- ball (4, 4)
  {B00000, B00000, B00000, B00000, B10000, B10000, B00000, B00000},//42- ball (5, 4)
  {B00000, B00000, B00000, B00000, B00000, B11000, B11000, B00000},//43- ball (0, 5)
  {B00000, B00000, B00000, B00000, B00000, B01100, B01100, B00000},//44- ball (1, 5)
  {B00000, B00000, B00000, B00000, B00000, B00110, B00110, B00000},//45- ball (2, 5)
  {B00000, B00000, B00000, B00000, B00000, B00011, B00011, B00000},//46- ball (3, 5)
  {B00000, B00000, B00000, B00000, B00000, B00001, B00001, B00000},//47- ball (4, 5)
  {B00000, B00000, B00000, B00000, B00000, B10000, B10000, B00000},//48- ball (5, 5)
  {B00000, B00000, B00000, B00000, B00000, B00000, B11000, B11000},//49- ball (0, 6)
  {B00000, B00000, B00000, B00000, B00000, B00000, B01100, B01100},//50- ball (1, 6)
  {B00000, B00000, B00000, B00000, B00000, B00000, B00110, B00110},//51- ball (2, 6)
  {B00000, B00000, B00000, B00000, B00000, B00000, B00011, B00011},//52- ball (3, 6)
  {B00000, B00000, B00000, B00000, B00000, B00000, B00001, B00001},//53- ball (4, 6)
  {B00000, B00000, B00000, B00000, B00000, B00000, B10000, B10000},//54- ball (5, 6)
  {B00000, B00000, B00000, B00000, B00000, B00000, B00000, B11000},//55- ball (0, 7)
  {B00000, B00000, B00000, B00000, B00000, B00000, B00000, B01100},//56- ball (1, 7)
  {B00000, B00000, B00000, B00000, B00000, B00000, B00000, B00110},//57- ball (2, 7)
  {B00000, B00000, B00000, B00000, B00000, B00000, B00000, B00011},//58- ball (3, 7)
  {B00000, B00000, B00000, B00000, B00000, B00000, B00000, B00001},//59- ball (4, 7)
  {B00000, B00000, B00000, B00000, B00000, B00000, B00000, B10000},//60- ball (5, 7)
  {B11000, B00000, B00000, B00000, B00000, B00000, B00000, B00000},//61- ball (0, 8)
  {B01100, B00000, B00000, B00000, B00000, B00000, B00000, B00000},//62- ball (1, 8)
  {B00110, B00000, B00000, B00000, B00000, B00000, B00000, B00000},//63- ball (2, 8)
  {B00011, B00000, B00000, B00000, B00000, B00000, B00000, B00000},//64- ball (3, 8)
  {B00001, B00000, B00000, B00000, B00000, B00000, B00000, B00000},//65- ball (4, 8)
  {B10000, B00000, B00000, B00000, B00000, B00000, B00000, B00000}///66- ball (5, 8)
};

void PDL_clear(int x, int y) {
  lcd.setCursor(x, y);
  lcd.print(" ");
}

int PDL_req[8] = {
  5,//paddleL 1
  6,//paddleL 2
  5,//paddleR 1
  6,//paddleR 2
  59,//ballTL
  60,//ballTR
  65,//ballBL
  66//ballBR
};

int PDL_oreq[8] = {
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
  -1
};

void PDL_request(int i, int loc) {
  PDL_req[loc] = i;
}

void PDL_setChars() {
  for(int i = 0; i < 8; i++) {
    if(PDL_oreq[i] != PDL_req[i]) {
      lcd.createChar(i, PDL_chars[PDL_req[i]]);
    }
  }
}

void PDL_renderChar(int c, int x, int y) {
  lcd.setCursor(x, y);
  lcd.write(byte(c));
}

void PDL_update() {
  PL_update();
  PR_update();
  Ball_update();
  PDL_setChars(); 
}

void PDL_render() {
  PL_render();
  PR_render();
  Ball_render();
}
