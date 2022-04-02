Prüfung der Funktions Rückgabewerte

Funktionen werden häufig als Ergebnis einer Berechnung einen Wert zurückgegeben
welcher anzeigt ob die Funktion erfolgreich seine Aufgabe abgearbeitet hat.

Die Funktion puts die wir in unserem Hello, world Programm verwendet haben nimmt
einen String zur Ausgabe entgegen und gibt einen Wert von Typ int zurück. Die 
puts Funktion gibt einen Wert des Makros EOF (einen negativen Integer) zurück, falls
ein Schreibfehler auftritt, ansonsten gibt sie einen nichtnegativen Integer Wert
zurück.

Auch wenn es unwahrscheinlich ist, dass die puts Funktion scheitern wird und EOF
für unser einfaches Programm zurückgibt, ist es aber möglich. Da der Aufruf von
puts fehlschlagen kann und EOF zurückgegeben kann bedeutet dies, dass unser Programm
einen Bug hat oder zumindest verbessert werden kann.


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    if(puts("Hello, world!")==EOF)
    {
        return EXIT_FAILURE;
        // Code hier wird niemals ausgeführt.
    }
    else
    {
        return EXIT_SUCCESS;
        // Code hier wird niemals ausgeführt.
    }
}

Diese überarbeitete Version des "Hello world" Programms prüft ob der Aufruf von puts
den Wert EOF zurückgibt und damit einen Schreibfehler anzeigt. Wenn die Funktion EOF
zurückgibt, dann gibt sie den Wert des EXIT_FAILURE Makros zurück welches zu einem
Nicht-Null (non-zero) Wert ausgewertet wird. Im anderen Fall ist die Funktion erfolgreich
und das Programm gibt EXIT_SUCCESS zurück, welches nötigerweise 0 ist. Das Skript welches
das Programm aufgerufen hat, kann dann seinen Status prüfen, um herauszufinden ob es 
erfolgreich war.

Code welcher nach einer return Anweisung steht ist toter Code und wird niemals ausgeführt.
Dies wird auch als einzeiliger Kommentar angegeben. Alles was nach // folgt wird vom Compiler
ignoriert. 


