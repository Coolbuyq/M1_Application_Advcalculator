#Target : Dependencies
#<TAB>commands

Build : main.c advcalculator.c Test_project.c unity.c
	gcc main.c advcalculator.c Test_project.c unity.c -o advcalculator.out -lm

Run : Build
	./advcalculator.out

clean:
	rm -rf *.out *.gch	
