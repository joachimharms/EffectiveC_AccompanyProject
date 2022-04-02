/*
    Präprozessor Direktiven
    Die ersten zwei Zeilen bedeuten, dass hier die Präprozessor Direktiven verwendet werden,
    die sich so verhalten, als ob diese durch die spezifierten Dateien und deren Inhalt an der exakten Stelle
    ersetzt werden. Wir includieren die <stdio.h> und <stdlib.h> headers um Zugriff auf die 
    dort deklarierten Funktionen zu bekommen. Die puts Funktion ist deklariert in <stdio.h>
    und wir können sie nun aus unserem Programm heraus aufrufen. Das Makro EXIT_SUCCESS ist 
    in <stdlib.h> definiert. <stdio.h> enthält die Deklarationen für C Standard I/O Funktionen.
    <stdlib.h> enthält die Deklarationen für allgemeine Utility Funktionen. 
*/

/*
    Die main Funktion
    int main(void)

    Diese Zeile definiert die main Funktion die aufgerufen wird beim Start des Programms. Die 
    main Funktion definiert den Haupteinstiegspunkt für das Programm, welches in einer gehosteten
    Umgebung ausgeführt wird, und von der Kommando Zeile oder einem anderen Programm aus aufgerufen wird.

    Wir definieren main um einen Wert vom Type int zurückzugeben und platzieren ein void innerhalb 
    der runden Klammern um anzugeben, dass diese Funktion keine Argumente akzeptiert.

    Der int Typ ist eine vorzeichenbehaftete Integerzahl, welcher verwendet werden kann, um sowohl positive, als
    auch negative Integer Werte zu repräsentieren, als auch die 0. 

    Gleichweise zu anderen prozeduralen Programmiersprachen bestehen C Programme aus Prozeduren (in C als Funktionen
    ausgewiesen) die Argumente und Rückgabewerte akzeptieren. Jede Funktion ist eine wiederverwendbare Arbeitseinheit
    die du so häufig wie benötigt in deinem Programm aufrufen kannst. In diesem Fall zeigt der von main zurückgegebene
    Wert an, ob das Programm erfolgreich terminiert ist. Die tatsächlich ausgeführte Arbeit dieser einzelnen Funktion
    besteht darin die Zeile "Hello, world!" auszugeben.
*/

/*
    Die puts Funktion ist eine C Standard Bibliotheksfunktion, welche ein String Argument in std-out schreibt, was
    typischerweise die Konsole oder das Terminal bedeutet, und hängt ein newline Zeichen der Ausgabe an. "Hello, world!"
    ist ein String Literal das sich wie ein read-only string verhält. Dieser Funktionsaufruf gibt Hello, world am Terminal
    aus.
*/

/*
    Wenn dein Programm ausgeführt wurde möchtest du es beenden. Du kannst das Programm beenden indem du den return Befehl
    innerhalb von main verwendest um einen Integer Wert an die Hostumgebung zurückzugeben oder um das Skript

    return EXIT_SUCCESS;

    auszuführen.
*/

/*
    Ausführungsumgebungen
    C definiert zwei mögliche Ausführungsumgebungen:
    - freestanding (freistehend)
    - hosted (gehosted)

    Eine freistehende Umgebung wird möglicherweise kein Betriebssystem zur Verfügung stellen und
    wird typischerweise in der embedded Programmierung verwendet. Diese Implementierungen stellen einen
    minimalen Satz von Bibliotheksfunktionen zur Verfügung und der Name und Typ der beim Start aufgerufenen 
    Funktion hängt von der definierten Implementierung ab. TODO: Hier befindet ein Bug!!! :P

    Wir gehen in diesem Projekt hauptsächlich von einer gehosteten Umgebung aus! 
*/



#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    puts("Hello, world!");
    return EXIT_SUCCESS;
}

