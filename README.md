# angr ctf android

This project base on [angr_ctf](https://github.com/jakespringer/angr_ctf), but  modify it to compile into AMR64 arch using Android NDK, and use [Jupyter](https://jupyter.org/) notebook to analyze them.


## Requirement

Create a python venv and install all dependencies in it:
```
$ python -m venv venv
$ source venv/bin/active

(venc) $ pip install angr
(venc) $ pip install jupyter
```

## Build

Modify the `ANDROID_NDK` to your local path in the `build.sh` file and run it to compile:
```
$ ./build.sh
```
all output files will be localed in the `build/<arch>/` directory.

## Run

```
(venc) $ jupyter notebook
```

## Test

You can test these binary executable files by pushing them to your Android phone and run them.

```
$ adb push build/arm64-v8a/04_angr_symbolic_stack /data/local/tmp
$ adb shell
android:/ $ cd /data/local/tmp
android:/ $ chmod +x 04_angr_symbolic_stack
android:/ $ ./04_angr_symbolic_stack
Enter the password:
```