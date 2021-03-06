// цифровой штырь 8 имеет прикрепленную к нему кнопку. Дайте ему имя:
int pushButton = 8;

// процедура установки запускается один раз, когда вы нажимаете сброс:
void setup() {
  // инициализировать последовательную связь со скоростью 9600 бит в секунду:
  Serial.begin(9600);
  // сделайте вывод кнопки:
  pinMode(pushButton, INPUT);
}

// циклическая процедура работает снова и снова навсегда:
void loop() {
  // прочитайте входной контакт:
  int buttonState = digitalRead(pushButton);
  // распечатайте состояние кнопки:
  Serial.println(buttonState);
  delay(1);        //задержка между чтением для стабильности
}
