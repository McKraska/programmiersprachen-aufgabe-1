#include <iostream>

void aufgabe1_2() {

	int z = 1;

	bool divisable = false; // Wir Kreieren eine variable des types bool, um zu checken wann ein wert von Z an einen wert von i angelangt welches nicht glatt Modulo teilbar ist

	while (divisable == false) {

		divisable = true; // Gehen davon aus das die erste zahl mindistens teilbar ist

		for (int i = 1; i <= 20; i++) {

			if (z % i != 0) { // check ob der wert teilbar ist mit i und 0 ergibt, wenn nicht wir z um einen wert erh�ht

				divisable = false; // wenn dieser fall auftritt ist divisable wieder false, sprich wenn wir raus breaken wird die While schleife weiter gef�hrt

				z++;

				break;

			}
		}
	}

	std::cout << "aufgabe 1.3 :";
	std::cout << z;
	std::cout << "\n";

}


void aufgabe1_4() {

	int a = 9; // Type :int; Variable:a; Wert:9;
	bool b = false; // Type :bool; Variable:b; Wert:false;
	char c = 'a'; // Type :char; Variable:c; Wert:'a';
	double d = 1.3; // Type :double; Variable:d; Wert:1.3;
	int const five = 5; // Type :int const; Variable:five; Wert:5;
	double e = a / five; // Type :double; Variable:e; Wert: (variable) a / (variable) five;

	// five = d; 

	/* Five kann sich nicht �ndern da five als const deklariert ist, dies bedeutet das der zeiger unmittelbar auf den wert in der speicheradresse von five zeigt, und sich nach der
	deklaration nich �ndern l�sst. Das stellen von five gleich zu d ist auch nicht valid, da d als double deklariert ist, und werte speichert in mantissenform, die five als int nicht speichern k�nnte.
	*/

	double z1 = 5.6;

	int y1 = 6;

	y1 = z1;

	/* Wir bekommen als ausgabe f�r y nur 5, dies ist im debugger auch promted as " Potential loss of information due to conversnion ". Dies ist eine versuchte Typenkonvertierung, die
	zum beispiel so fehl schlagen kann wie in meinem Beispeil, wo information verloren geht.*/

	std::cout << "aufgabe 1.4 :";
	std::cout << y1;
	std::cout << " bitte komentare unter der funktion aufgabe1_4 als loesung durchlesen, hier ist auch ein beispiel vorhanden \n";

}


void aufgabe1_5() {

	// eine Initialisierung ist das definieren und deklarieren einer variable mit Typ und Wert in der gleichen Zeile, sprich :

	char satz = 'satz'; // inizialisierung hier

	// eine Zuweisung ist wenn man eine vorher definierten Variable einen Wert an einem sp�teren Punkt zuweist, sprich :

	bool isempty;

	isempty = true; // zuweisung geschiet hier

	std::cout << "aufgabe 1.5 :";
	std::cout << "bitte komentare unter der funktion aufgabe1_5 als loesung durchlesen, hier sind auch beispiele vorhanden \n";

}

void aufgabe1_6() {

	/* eine deklaration ist die namensgebung und typenbestimmen einer entit�t, sprich man sagt "es exsistiert eine klasse, mit dem namen MyClass". Hier haben
	wir c++ gesagt, wir deklarieren das es eine klasse gibt die my class hat, welche werte, �bergaben oder funktionen sind noch nicht bekannt. Dies gilt ach f�r
	andere entit�ts type, wie auch einfache variablen und funktionen.*/

	int myint; // hier deklariere ich ein int mit dem namen myint

	class myclass; // hier deklariere ich eine klasse mit dem namen myclass

	void myfunction(); // hier deklariere ich eine funktion mit dem namen myfunction 

	/* eine definition ist die n�here beschreibung und werten angaben der entit�t, so das man die entit�t auch wirklich verwenden kann f�r irgendwelche auf�hrung*/

	myint = 6; // jetzt wei� c++ das wenn ich myint aufrufe, das ich die zahl 6 will, da myint als 6 difiniert ist

	class myclass {
	protected:int width = 5;
	protected:int height = 5;
	public:bool issquare = true; /* hiermit definiere ich die klasse etwas n�her, und zwar das alle abstamenden objekte eine h�he und breite von 5 haben, aber nur sie sehen das, alle anderen
								 wissen nur das myclasse vierecke kreeirt*/

	};

	void myfunction(int a, int z); // hier definiere ich n�her das an myfunction die parameter int a und int z �bergeben werden

	std::cout << "aufgabe 1.6 :";
	std::cout << "bitte komentare unter der funktion aufgabe1_6 als loesung durchlesen, hier sind auch beispiele vorhanden \n";

}

void aufgabe1_7() {

	/* zur signatur einer funktion geh�rt an erster stelle der wiedergabe Wert " void " " int " etc, dann der Name der funktion, in klammern die parameter
	die in die funktion �bergeben werden, und dann nat�rlich in den geschweiften klammern die eingentliche funktionalit�t.*/

	/*
	int var = 3;  : var ist f�r den gesampten bereich des ausdruckes g�ltig, muss aber als parameter angegeben werden um in einer funktion g�ltig zu sein;
	double sum(double a, double b) : a und b sind nur innerhalb dieser funktion g�ltig, da sie in der parameter liste deklarieert werden;
	{
		return a + b;

	}
	int square(int var)
	{
		return var * var;
	}
	int main()
	{

		for (int i = 0; i != 100; ++i) { : i ist nur in der main g�ltig da es hier initialisiert wird
			std::cout << "i^2 = " << square(i) << "\n";
			std::cout << "i+i = " << sum(i, i) << "\n";
		}
		return 0;
	}*/

	std::cout << "aufgabe 1.7 :";
	std::cout << "bitte komentare unter der funktion aufgabe1_7 als loesung durchlesen \n";
}

void aufgabe1_8() {

	std::cout << "aufgabe 1.8 :";
	std::cout << "bitte datei tests.cpp auf github als loesung lesen \n";
}

void aufgabe1_9() {

	std::cout << "aufgabe 1.9 :";
	std::cout << "bitte datei tests2.cpp auf github als loesung lesen \n";
}

void aufgabe1_10() {

	std::cout << "aufgabe 1.10 :";
	std::cout << "bitte datei tests3.cpp auf github als loesung lesen \n";
}

void aufgabe1_11() {

	std::cout << "aufgabe 1.11 :";
	std::cout << "bitte datei tests4.cpp auf github als loesung lesen \n";
}

void aufgabe1_12() {

	std::cout << "aufgabe 1.12 :";
	std::cout << "bitte datei tests5.cpp auf github als loesung lesen \n";
}

void aufgabe1_13() {

	std::cout << "aufgabe 1.13 :";
	std::cout << "bitte datei tests6.cpp auf github als loesung lesen \n";
}

void aufgabe1_14() {

	std::cout << "aufgabe 1.14 :";
	std::cout << "bitte datei tests7.cpp auf github als loesung lesen \n";
}

void aufgabe1_15() {

	std::cout << "aufgabe 1.15 :";
	std::cout << "bitte datei mile_to_:kilometer.cpp auf github als loesung lesen \n";
}

void aufgabe1_16() {

	std::cout << "aufgabe 1.16 :";
	std::cout << "bitte komentare unter der funktion aufgabe1_16 als loesung durchlesen \n";

	/*
	C++ : Eine programmiersprache welches mehr als nur objekt orientiert programmieren kann
	Quellcode : Menschen lesbares code in einer IDE, welches compiliert werden muss um computer lesbarer objekt code zu werden
	Compiler : Ein programm syste welches quellcode umwandelt
	Linker : Ein linker nimmt mehrere objekt datein, und verbindet sie zu einem programm
	Objektcode : Code der von computer lesbar ist
	Ausf�hrbare Datei : Eine datei die aufgerufen werden kann, so das sie eine funktion ausf�hrt
	main() : Die main funktion in c++ ist wo alle funktionen der satei ausgef�hrt werden
	#include : Das pr�fix einer Aussage die information oder funktionalit�t einer externen Datei aufruft
	Kommentar : Eine oder mehrzeiliger text der nicht von dem compiler gelesen wird, sondern nur f�r den menschen leser im Quellcode zu verf�gung steht
	Header : Eine datei die dazu bereit steht von einer anderen aufgerufen zu werden
	Programm : Eine ordnung an anweisung die von einem computersystem zur l�sung eines problemes ausf�hrbar ist
	Ausgabe : Das geben von information an einem anderen ort
	std::cout : Ausgabe in die konsole
	std::cin : Eingabe von der konsole
	<< : Infomations stream rein
	>> : Infomations stream raus
	Funktion : Benanntes und mit r�ckgabetyp definiertes system welches ein problem l�st
	Funktionssignatur : Die eingenschaften einer Funktion
	Deklaration : Die namensgebung und typenbestimmen einer entit�t
	Definition : Die n�here beschreibung und werten angaben der entit�t
	Typ : Welche art von werten eine entit�t speichert
	Typkonvertierung : Die umwandlung von einem typen zur anderen
	Variable : Der variable �nderbare name einer entit�t
	Name : Wie was hei�t
	Wert : Die information in einer entit�t gespeichert
	Initialisierung : Das geben von typ, namen und wert einer entit�t in einer zeile
	Zuweisung : Das geben von einem wert einer vorexistierenden eintit�t
	const : Ein typen pr�fix der besagt das der wert statisch ist
	G�ltigkeitsbereich : Der bereich indem eine entit�t ohne paramentrisierung aufgerufen werden kann
	*/
}



int main() {

	aufgabe1_2();
	aufgabe1_4();
	aufgabe1_5();
	aufgabe1_6();
	aufgabe1_7();
	aufgabe1_8();
	aufgabe1_9();
	aufgabe1_10();
	aufgabe1_11();
	aufgabe1_12();
	aufgabe1_13();
	aufgabe1_14();
	aufgabe1_15();
	aufgabe1_16();

}