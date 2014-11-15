
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.println("Should be 6:");
 Serial.println(add(4,2));
 delay(2000);
 Serial.println("Should be 49");
 Serial.println(multiply(4,7));
 delay(2000);.
 Serial.println("Should be 10");
 Serial.println(divide(100/10)); 
 delay(2000);
 Serial.println("If you favorite number is not 7, should be not my favorite");
 Serial.println(bestNumber(7));
 delay(2000);
 Serial.println(robBot("Good Morning")); 
}

//write a function that adds two numbers and returns the sum
int add(int x, int y){
int sum;
sum = x + y
return sum;  
}

//write a function that multiplies two integers and returns the total
int multiply(int c, int b){
int product;
product = c * b;
return sum;   
}

//write a function that divides the first parameter by the second
int divide(int e, int r){
int quotient;
quotient = e / r;
return quotient;
}

//write a funtion that returns the string "Best number" if
// the number from the parameter matches your favorite number
String bestNumber(int myFavorite){
  
  String response;
  //complete the if statement
  if(myFavorite == 7){
    response = "Best number";
  }
  else{
    response = "Not my favorite, bad number";
  }
  return response;
}
//chatbot
String robBot(String message){
  
  String response;
  
  if(message == "How Ya Doing"){
    response = "Get me food or go away"){
}
else if(message == "How's You're Life"){
 response = "A chocolate macaroon and a big chicken avocado bacon sandwich. I'm hungry.");
}
else if(message == "Good Afternoon"){
  response = "I'm bored get me my phone and bring the charger"




