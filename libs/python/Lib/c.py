def include(lib):
    if lib=="bits/stdc++.h"
        defined=1
    elif lib=="iostream"
        defined=1
    elif lib=="cstdio"
        defined=1
    elif lib=="cstdlib"
        defined=1

def printf(thing):
    if defined!=1
        print("You haven't use the function include")
    else
        print(thing)

def scanf():
    if defined!=1
        print("You haven't use the function include")
    else
        i=input()
        return i
