# CmakeLists.txt in driver dir

# Make sure the compiler can find include files from our Hello library.

INCLUDE_DIRECTORIES(${Ducks_SOURCE_DIR}/include)

# Add binary called "ducks" that is built from the source file "test.cc". 

# The extension is automatically found.

ADD_EXECUTABLE(ducks main)

# Link the executable to the Hello library.

TARGET_LINK_LIBRARIES(ducks duck duckadapter mallardduck turkey turkeyadapter wildturkey)

