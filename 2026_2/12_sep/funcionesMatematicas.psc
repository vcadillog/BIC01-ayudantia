Proceso funcionesMatematicas
	Definir numero1, resultado Como Real;
	Escribir "Ingresa un numero";
    Leer numero1;
	
	resultado <-abs(numero1);
	Escribir "El absoluto del numero es:";
	Escribir  resultado;
	resultado <- trunc(numero1);
	
	Escribir "El truncado del numero es:";
	Escribir  resultado;
	resultado <- redon(numero1);	
	Escribir "El redondeo del numero es:";
	Escribir  resultado;
	
	Si numero1 < 0 Entonces
		Escribir "No se puede sacar raiz cuadrada a un negativo";
	SiNo
		resultado <- raiz(numero1);	
		Escribir "La raiz cuadrada del numero es:";
		Escribir  resultado;
	FinSi
FinProceso