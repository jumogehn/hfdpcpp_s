# CmakeLists.txt in ducks dir

INCLUDE_DIRECTORIES(${Ducks_SOURCE_DIR}/include)

# Adds a library called duck (libduck.a under Linux) from the source file Duck.cpp
ADD_LIBRARY( duck Duck )
ADD_LIBRARY( duckadapter DuckAdapter )
ADD_LIBRARY( mallardduck MallardDuck )
ADD_LIBRARY( turkey Turkey )
ADD_LIBRARY( turkeyadapter TurkeyAdapter )
ADD_LIBRARY( wildturkey WildTurkey )

