Proceso determinarPrimos	
	Definir numero1, resto, i como Entero;
	Definir continuar, esPrimo Como Logico;
	continuar <- Verdadero;
	esPrimo <- Verdadero;
	//7 es primo
	//8
	i <- 2;
	Escribir "Ingrese un numero: ";
	Leer numero1;
	
	Mientras continuar Y i<numero1 Hacer
		resto <- numero1%i;
		Escribir resto;
		Si resto = 0 Entonces
			continuar <- Falso;
			esPrimo <- Falso;
			
		FinSi
	
		i <- i + 1;
		
	FinMientras
	
	Si esPrimo Entonces
		Escribir "Es primo";
	SiNo
		Escribir "No es primo";
	FinSi
	// numero = 9
	// i = 2 , resto = 9%2 = 1
	// i = 3 , resto = 9%3 = 0
	
	// numero = 7
	// i = 2 , resto = 7%2 = 1
	// i = 3 , resto = 7%3 = 1
	// i = 4, resto = 7%4 = 3
	// i = 5 , resto = 7%5 = 2
	// i= 6 , resto = 7%6 = 1
	
	
FinProceso

