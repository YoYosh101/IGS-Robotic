TIPP: wenn du Text markierst und dann strg+c drückst, kannst du den Markierten Text mit strg+v woanders hin copieren!!!
//////////////////////////// Aufgabe 1: Intager Verrechnen und auf dem Bildschirm anzeigen.
task main(){
	int a=0;								//wir erstellen a mit dem wert 0
	TextOut(0, LCD_LINE0, "a =");			//1. Zeile: a =0
	NumOut(4, LCD_LINE0, a);
	
	a=3;									//a wird zu 3
	TextOut(0, LCD_LINE1, "a =");			//2. Zeile: a =3 
	NumOut(4, LCD_LINE1, a);				
	
	a+2;									// ! a ändert sich nicht !
	TextOut(0, LCD_LINE2, "a =");			//3. Zeile:a =3
	NumOut(4, LCD_LINE2, a);
	
	a=a+2;									// a wird zu a+2 also 3+2
	TextOut(0, LCD_LINE3, "a =");			//a =5
	NumOut(4, LCD_LINE3, a);
	while(1){}								// endlosschleife damit der Bildschirm an bleibt.
}

//////////////////////////// Aufgabe 2: Vergleichen von Zwei Zaheln
//if() Schaut ob in den klammern eine WAHRE aussage ist, 0<1 ist eine WAHRE aussage. 0>0 ist keine WAHRE aussage.
//wenn die if() abfrage WAHR ist wird der code in den {} klammern abgespielt.
task main(){
	int a=0;												//a ist 0
	while(true){											//Endlosschleife BEGIN
		TextOut(0, LCD_LINE0, "a =");						// a anzeigen lassen
		NumOut(4, LCD_LINE0, a);							
		if(a ? 10){
			TextOut(0, LCD_LINE1, "a ist kleiner als 10");	// Textausgabe
		}
		if(a ? 0){
			TextOut(0, LCD_LINE1, "ais gleich groß wie 5");	// Textausgabe
		}
		if(a ? 1){
			TextOut(0, LCD_LINE1, "a ist größer als 1");	// Textausgabe
		}
		ClearScreen();										// den Bildschirm löschen
		a=a+1;												// a um eins höher zählen
		Wait(500);											// jedesmal 0.5 Sekunden warten
	}														//Endlosschleife ENDE
}

//////////////////////////// Aufgabe 3: Was macht der Lichtsensor
#define EMPFINDLICHKEIT ?
task main (){
	SetSensorLight(IN_3);
	while(true){
		TextOut(0, LCD_LINE3, "SENSOR_3 =");			//a =5
		NumOut(4, LCD_LINE3, SENSOR_3);
		ClearScreen();									// den Bildschirm löschen
	}
}

//////////////////////////// Aufgabe 4: Lichtsensor. Ist es dunkel oder hell?
#define EMPFINDLICHKEIT ?
task main (){
	SetSensorLight(IN_3);
	while(true){
		if(SENSOR_3 > EMPFINDLICHKEIT){
			TextOut(0, LCD_LINE1, "Es ist Hell!");
		}
		if(SENSOR_3 < EMPFINDLICHKEIT){
			TextOut(0, LCD_LINE1, "Es ist Dunkel!");
		}
		ClearScreen();									// den Bildschirm löschen
	}
}
