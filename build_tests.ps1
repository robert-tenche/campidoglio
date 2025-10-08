cmake -S . -B build -G "Unix Makefiles" -D LANG=C -D BUILD_TESTING=ON
if (!$?) { exit }

cmake --build build
if (!$?) { exit }

Set-Location ./build/test
ctest
Set-Location ./../..
