// HILFE: Ein Programm um den Lichtsensor und seine Werte zu verstehen.
task main (){
	SetSensorLight(IN_3);							// Der Sensor muss in diesem fall in den dritten Anschluss
	
	while(true){									// 		Endlosscheife beginn
	
		ClearScreen();								// Bildschirm löschen
		NumOut(0, LCD_LINE1, SENSOR_3);				// Den Wert vom Sensor auf dem Bildschirm Schreiben
		Wait(250);									// Firtel Sekunde warten, weil es sonst zu schnell wieder gelöscht wird
		
	}												// 		Endlosscheife ende und wieder zum anfang der schleife
}

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Aufgabe 1: Wenn der Sensor Schwarz erkennt soll der Roboter nach Rechts fahren.
#define SCHWARZWERT ?								// ab wann erkennt der sensor schwarz? Diesen wert musst du an stelle der Fragezeichens setzen

task main (){
	SetSensorLight(IN_3);							// Hier musst du angeben in welchen anschluss der Sensor steckt
	while(true){									// Endlosscheife beginn
	
		if(SENSOR_3 ? SCHWARZWERT ){				// Der Wert der den Sensor misst wird mit einem von dir gewählten Wert verglichen. Das Fragezeichen(?) muss Größer(>), kleiner(<), oder gleich(=) sein.
			OnFwd( ?, ?);							// Motor vorwärts fahren - OnFwd( Motoranschlüsse , Geschwindigkeit );								
		}else{										// wenn aktueller Sensorwert NICHT größer ist als ? dann die nächste zeile ausgeführt
			Off(?);									// Motoren aus machen. Off( Motoranschlüsse );
		}
	}												// Endlosscheife ende
}

// Aufgabe 2: Nun erweiter den Code so, dass du bei schwarz nach Rechts Fährst und bei weiß nach Links Fährst. Ich Helfe dir gerne dabei!
