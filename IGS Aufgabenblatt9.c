task main(){
int x=10;
	while(true){
   TextOut(x, LCD_LINE1, "O");
   TextOut(x-4, LCD_LINE2, "-+-");  //10-4=6
   TextOut(x, LCD_LINE3, "|");
   TextOut(x, LCD_LINE4, "/\\");
   Wait(200);
   ClearScreen();
		if(ButtonPressed(1,false)){	// Wenn ( Der Knopf 3 gedrückt ist ){ mach das hier}
     x=x+5;
    }
    if(ButtonPressed(2,false)){	// Wenn ( Der Knopf 3 gedrückt ist ){ mach das hier}
     x=x-5;
    }
    if(ButtonPressed(3,false)){	// Wenn ( Der Knopf 3 gedrückt ist ){ mach das hier}
     x=20;
    }
	}
 }
