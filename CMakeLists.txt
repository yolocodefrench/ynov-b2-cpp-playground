cmake_minimum_required(VERSION 3.9)

project(Initiation)



set(CMAKE_CXX_STANDARD 17)

set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")



add_executable(
	Initiation main.cpp 
	src/Carte.cpp 
	include/Carte.h 
	src/entity.cpp 
	include/entity.h 
	src/Game.cpp 
	include/Game.h 
	src/Lieu.cpp 
	src/Lieu.h
	src/Menu.cpp 
	src/Menu.h
	src/Monstre.cpp 
	src/Monstre.h
	src/Personnage.cpp 
	src/Personnage.h
	src/Salle.cpp 
	src/Salle.h
)