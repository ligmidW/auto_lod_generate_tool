@echo off
set UE_PATH=C:\Program Files\Epic Games\UE_5.5
cd /d %~dp0..
set PROJECT_PATH=%CD%\auto_lod_generate.uproject

REM Launch UE in true headless mode
"%UE_PATH%\Engine\Binaries\Win64\UnrealEditor-Cmd.exe" "%PROJECT_PATH%" -ExecutePythonScript="%~dp0launch.py" -stdout -Unattended -nullrhi -nosplash -nowrite
