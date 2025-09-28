cmake -S . -B _cmake_build -G "Unix Makefiles" -D LANG=C

cmake --build _cmake_build

./_cmake_build/sandbox/sandbox.exe

