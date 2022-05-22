ANDROID_NDK=/Users/liudingsan/Library/Android/sdk/ndk/23.0.7599858
ABI=arm64-v8a
OUT_PATH=./build/$ABI

cmake \
    -H. \
    -B$OUT_PATH \
    -DANDROID_ABI=$ABI \
    -DANDROID_PLATFORM=19 \
    -DANDROID_NDK=$ANDROID_NDK \
    -DCMAKE_TOOLCHAIN_FILE=$ANDROID_NDK/build/cmake/android.toolchain.cmake \
    -DCMAKE_BUILD_TYPE=Debug \
    -G Ninja


cd $OUT_PATH
ninja
cd -