
// Aufgabe: Robogreifarm
// Bau nach der Anleitung den Robotor so um das er 2 Greifarme bekommt.

// Test Programm (einfach Kopieren)
task main(){
	OnFwd(OUT_A,25);
	Wait(500);
	OnRev(OUT_A,25);
	Wait(500);
	Off(OUT_A);
}


// Programm um den Robotorarm zu steuern.
//Bennutze die Pfeiltasten.

task main(){
  while(true){
	if(ButtonPressed(1,false)){
		OnFwd(OUT_A,25);
	}
	if(ButtonPressed(2,false)){
		OnRev(OUT_A,25);
	}
	if(ButtonPressed(3,false)){
		break;
	}
	Wait(5);
	Off(OUT_A);
  }
}
