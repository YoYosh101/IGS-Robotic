// Aufgabe 1: Mach dir das Leben einfacher
// mit einem
//		#define NAME 10
// vor task main() !!!
// wird bei dem ausführen des Programms,
// werden alle stellen wo NAME steht mit 10 asugetauscht

#define NUMMER1 10
#define NUMMER2 20
task main(){
	 NumOut(0,LCD_LINE1, NUMMER1);
	 NumOut(0,LCD_LINE2, NUMMER2);
	 while(true){
		 Wait(1000);
	}
}


// Aufgabe 2: Microphone Sensor Anzeige
// 		In diesem Programm ist der Sensor im 2ten Anschluss
// Mit diesem Programm wird auf dem Display der Wert vom Sensor angezeigt

task main(){
	 SetSensorSound(IN_2);
	 while(true){
		NumOut(10, LCD_LINE4, SENSOR_2);
		Wait(200);
		ClearScreen();
	}
}


// Ausfgabe 3: Microphone Sensor benutzen
// 		In diesem Programm ist der Sensor im 2ten Anschluss!
// nun muss die GERÄUSCHGRENZE so gesetzt werden, 
// dass du den Roboter mit geräuschen AN und AUS schalten kannst.

#define GEREUSCHGRENZE ?
task main(){
	 SetSensorSound(IN_2);
	 while(true){
		 until(SENSOR_2 > GEREUSCHGRENZE);
		 OnFwd(OUT_?, 75);
		 Wait(300);
		 until(SENSOR_2 > GEREUSCHGRENZE);
		 Off(OUT_?);
		 Wait(300);
	}
}

// Als start hilfe kannst du den Wert 40 für GERÄUSCHGRENZE benutzen.
