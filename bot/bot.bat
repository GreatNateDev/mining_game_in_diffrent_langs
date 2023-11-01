@echo off
echo have the game and this file open close all other windows and then press any key on the batch file to start
echo press any key to start
pause>nul
nircmd sendkeypress alt+tab
timeout /T 1 >nul
:start
nircmd sendkeypress m+i+n+e
nircmd sendkeypress enter press
timeout /T 1 >nul
goto start