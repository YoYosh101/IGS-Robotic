// Du Kannst auch die Knöpfe auf dem Roboter programmieren !
// Mit ButtonPressed(?) kannst du nachschauen ob ein knopf gedrückt ist.
// Dabei musst du eine Zahl von 1 bis 3 angeben. 
// Diese Zahl steht für einen bestimmten Knopf steht.
// 		1 : Rechter Pfeil Knopf
// 		2 : Linker Pfeil Knopf
// 		3 : Oranger Knopf
// Beispiel Code: Wenn du den Orangenen KnopfDrückst fährt der Roboter.
 task main(){
	while(true){
		if(ButtonPressed(3,false)){	// Wenn ( Der Knopf 3 gedrückt ist ){ mach das hier}	
			Fwd(OUT_ABC,100);
			Wait(100);
			Off(OUT_ABC);
		}
	}
 }
 
// Aufgabe 1: Entscheide selbst was der Roboter Auf Knopfdruck machen soll.
//			 Dabei kannst du entscheiden welcher Knopf benutzt wird. (siehe oben)
  task main(){
	while(true){
		if(ButtonPressed(?,false)){	// Wenn ( Der Knopf  Gedrückt ist ){ mach das hier}		
			// Hier muss du Programmieren was der Roboter machen soll.
		}
	}
 }
 
// Aufgabe 2: Alle Knöpfe benutzen.
// Erstelle ein Programm das Alle 3 Knöfe Benutzt. 
// Dabei kannst du natürlich deinen Code aus Aufgabe 1 bnutzen und Kopieren.
