// 	   HEUTE: 	Was macht der Lichtsensor? wie kann man ihn benutzen?
// Aufgabe 1: 	Schwarz Weiß messen.
// 				Ein Lichtsensor muss an deinem Roboter sein! (siehe Bild)
// 				Wenn du das Programm startest sollte eine Zahl auf dem Bildschrim sein.
// 				Was passiert mit dieser Zahl wenn du den Lichtsensor auf verschiedene Farben richtest (z.b. auf der Rennstrecke)?
//				Schreibe dir auf welche Werte Schwarz und Weiß haben.
task main (){
	SetSensorLight(?);								// Hier musst du angeben in welchen anschluss der Sensor steckt
	
	while(true){									// Endlosscheife beginn
	
		ClearScreen();								// Bildschirm löschen
		NumOut(0, LCD_LINE1, SENSOR_3);				// Den Wert vom Sensor auf dem Bildschirm Scheiben
		Wait(250);									// Firtel Sekunde warten, damit man es auch lesen kann
		
	}												// Endlosscheife ende
}


// Aufgabe 2: 	Auf Schwarz vorwärts fahren
// 				Wähle einen Wert für "?HIERWERT?" ab dem der Roboter los fahren soll!
// 	  TIPPs!: 	Du musst nicht alles neu schreiben! 
//		 		Nimm deinen alten Code und ändere ihn!
//				Motoranschlüsse: z.b. OUT_AB oder OUT_AC	-	A B C müssen alphabetisch geordnet sein.
task main (){
	SetSensorLight(?);								// Hier musst du angeben in welchen anschluss der Sensor steckt
	while(true){									// Endlosscheife beginn
	
		if(SENSOR_3 <= ?HIERWERT? ){					// wenn aktueller Sensorwert  größer ist als ?HIERWERT? dann wir die nächste zeile ausgeführt
			OnFwd( ?, ?);							// Motor vorwärts fahren - OnFwd( Motoranschlüsse , Geschwindigkeit );								
		}esle{										// wenn aktueller Sensorwert NICHT größer ist als ?HIERWERT? dann die nächste zeile ausgeführt
			Off(?);									// Motoren aus machen. Off( Motoranschlüsse );
		}
	}												// Endlosscheife ende
}


//  Aufgabe 3:	Von "<" zu ">" ändern
// 				Ändere in deinem Code aus Aufgabe 2 das " < " Zeichen zu einem " > " Zeichen. 
//				Was Passiert?
//		Extra:  Wie könnte man auf einer Schwarzen Linie fahren?
