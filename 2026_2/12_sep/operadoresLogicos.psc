Proceso operadoresLogicos
	// Haga un descuento para un cliente si el precio de lo que consume está entre 10-20 soles, si está entre 20-50 soles o 50 a mas soles, aplique un descuento de la siguiente forma:
	// 0-10: No hay descuento
	// 10-20: 2% de descuento
	// 20-30: 3% de descuento
	// 30-50: 2% de descuento
	// 50 a mas: 10% de descuento
	Definir pagoEfectuado, consumo Como Real;
	Escribir "Ingrese el consumo total: ";
	Leer consumo;
	
	Si consumo < 10 Entonces
		pagoEfectuado <- consumo;
		
	SiNo
		Si consumo < 20 O (consumo>30 Y consumo <50) Entonces
			pagoEfectuado <- consumo*0.98;
		SiNo
			Si consumo<30 Entonces
				pagoEfectuado <- consumo*0.97; 
			SiNo
				pagoEfectuado <- consumo*0.9;
			FinSi
		FinSi
		
	FinSi
	Escribir "El costo es: ", pagoEfectuado;
FinProceso
