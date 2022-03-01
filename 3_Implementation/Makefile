#Target : Dependencies
#<TAB>commands

PROJ_NAME= advcalculator
SRC=src/main.c\
src/advcalculator.c\

TEST_SRC=test/Test_project.c\
unity/unity.c\
src/advcalculator.c\
#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

INC=-Iinc\
-Iunity\

Build :
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

run :Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

Build_test :
	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

run_test:Build_test
	./$(call FixPath,$(PROJ_NAME).$(EXEC)) 

staticcheck:
	cppcheck --enable=all -iunity .
dynamiccheck: Build
	valgrind ./$(call FixPath,$(PROJ_NAME).$(EXEC))
coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
	gcov -a $(call FixPath,$(PROJ_NAME).$(EXEC))      