cmake -S . -B build -G "Unix Makefiles" -D LANG=C -D BUILD_TESTING=OFF
if (!$?) { exit }

cmake --build build
if (!$?) { exit }

./build/sandbox/sandbox.exe

