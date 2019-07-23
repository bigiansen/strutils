echo "-- Initializing git submodules -- "
git submodule init
git submodule update
md build_release_win64
cd build_release_win64
cmake -DCMAKE_GENERATOR_PLATFORM=x64 -DCMAKE_BUILD_TYPE=Release .. -Wdev
cmake --build . --config Release
pause