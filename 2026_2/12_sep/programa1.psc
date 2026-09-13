Proceso  programa1
	Definir  var1 Como Caracter;
	Definir contador,i, var3 Como Entero;
	Definir var4 Como Real;
	Definir var5 Como Logico;
	var3 <- 4;
	var4 <- -3.5;
	contador <- 1;
	
	Para i <- 1 Hasta 10 Con Paso 2 Hacer
		// hacer algo 
		contador <- contador*2;
		//i=1 , contador = 1
		//i=3 , contador = 2
		//i=5 , contador = 3
		//i=7 , contador = 4
		//i=9 , contador = 51
		
		Escribir contador;
	FinPara
	//1-10
	
	Si var3 < 3 Entonces
		Escribir "Es menor a 3";
	SiNo
		Si var3 <= 5 Entonces
			Escribir "Esta entre 3 y 5";
		SiNo
			Escribir "Es mayor a 5";
		FinSi
		
	FinSi
	Si var4 = 0 Entonces
		Escribir "No se puede divir por 0";
	FinSi
	
	
	
	
	var1 <- 'A';
	Escribir var1;
	
	
FinProceso