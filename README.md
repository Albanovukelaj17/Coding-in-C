## **Database-C**

Dieses Projekt ist eine einfache relationale Datenbank, die in C implementiert ist. Die Datenbank unterstützt grundlegende SQL-Befehle wie INSERT und SELECT. Diese Anwendung basiert auf dem Tutorial von CodeCrafters.

## **Features**

-Speicherung von Einträgen in einer binären Datei. <br><br>
-Unterstützung von grundlegenden SQL-Operationen (INSERT, SELECT).<br><br>
-Einfacher B-Baum zum Speichern und Abrufen von Datensätzen.<br><br>
-Unterstützung von Paging und effizienter Speicherverwaltung.<br><br>
## **Anforderungen**

-Ein Unix-ähnliches Betriebssystem (macOS oder Linux) <br><br>
-GCC oder Clang zur Kompilierung<br><br>
-CMake (optional)<br><br>
-Git<br><br>

## **Installation**

 ## **1. Repository klonen **
 Um das Projekt lokal zu klonen, führe folgendes Kommando im Terminal aus:

```bash
git clone https://github.com/dein-username/Database-C.git
cd Database-C
```

## **2. Kompilieren des Projekts **
Navigiere in das Projektverzeichnis und führe folgendes Kommando aus, um das Projekt zu kompilieren:

```bash
gcc -o db main.c
```

## **3. Starten der Anwendung**
Nachdem du das Programm kompiliert hast, kannst du es mit folgendem Kommando ausführen:

```bash
./db mydb.db
```
Dabei ist mydb.db die Datei, die als Datenbank fungiert. Sie wird automatisch erstellt, wenn sie noch nicht existiert.

## **Verwendung**

**SQL-Befehle**<br><br>
Du kannst SQL-Befehle in die Konsole eingeben, um Daten einzufügen und abzufragen. Die Anwendung unterstützt derzeit folgende Befehle:

-INSERT <id> <username> <email>: Fügt einen neuen Datensatz in die Datenbank ein.<br><br>
-SELECT: Gibt alle Datensätze in der Datenbank aus.<br><br>
Beispiel:

```bash
db > insert 1 alice alice@example.com
Executed.
db > select
(1, alice, alice@example.com)
```
**Zusätzliche Befehle** <br><br>
Die Anwendung unterstützt auch einige Meta-Befehle, die mit einem Punkt (.) beginnen:

.exit: Beendet die Anwendung.<br><br>
.constants: Zeigt die Konstanten der Datenbank an, z.B. die Größe der Zeilen und Knoten.<br><br>
.btree: Zeigt die Baumstruktur der Datenbank an.<br><br>
## **Weitere Informationen**

Dieses Projekt wurde mit Hilfe des Tutorials "Build Your Own Database" von CodeCrafters erstellt.

