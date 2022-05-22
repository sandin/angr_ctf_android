# angr ctf android

This project base on [angr_ctf](https://github.com/jakespringer/angr_ctf), but  modify it to compile into an AMR64 arch using Android NDK, and use [Jupyter](https://jupyter.org/) notebook to analyze them.


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
