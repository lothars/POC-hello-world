void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Finished setup");
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = 2;
  int j = 3;
  Serial.println("i : ");
  Serial.print(i);
  Serial.println("j : ");
  Serial.print(j);
  int k;
  Serial.println("k : ");
  Serial.print(k);


  Serial.print("k = i * j");
  k = myMultiplyFunction(i, j); // k now contains 6
  Serial.println("k : ");
  Serial.print(k);
  delay(500);
}

int myMultiplyFunction(int x, int y){
  int result;
  result = x * y;
  return result;
}
