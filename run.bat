@echo off
::cd %~dp0
tcc -c Matrix.c
tcc -c test.c
tcc test.o Matrix.o
del test.o Matrix.o
test.exe
pause
