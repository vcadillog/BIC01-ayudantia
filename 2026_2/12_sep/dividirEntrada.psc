Proceso dividirEntrada
	Definir numerador, denominador Como Entero;
	Definir resultado Como Real;
	Escribir "Vamos a divir dos números";
	Escribir "Ingresa el numerador";
    Leer numerador;
	Escribir "Ingresa el denominador";
	Leer denominador;
	Si denominador=0 Entonces
		Escribir "No se puede dividir por 0";
	SiNo
		
		resultado <- numerador/denominador;
		
		Escribir "La división es:";
		Escribir resultado;
	FinSi
	
FinProceso