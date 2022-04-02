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
*/

/*
    Ausführungsumgebungen
    C definiert zwei mögliche Ausführungsumgebungen     
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    puts("Hello, world!");
    return EXIT_SUCCESS;
}