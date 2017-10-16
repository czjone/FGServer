CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
SET(FG_LIBS_DIR "${CMAKE_CURRENT_SOURCE_DIR}/FGLibs")

#=========================check system and set system platform macros ====================
MESSAGE(STATUS "Set platform system variable.")
IF (WIN32)
	SET(FG_PLATFORM_FOLDER "Win")
	ADD_DEFINITIONS(-DFG_MS_WIN)
	MESSAGE(STATUS "Current System windows.")

ELSEIF (APPLE)
	SET(FG_PLATFORM_FOLDER "Mac")
	ADD_DEFINITIONS(-DFG_APPLE_MAC)
	MESSAGE(STATUS "Current System Mac")

ELSEIF (UNIX)
	SET(FG_PLATFORM_FOLDER "Linux")
	ADD_DEFINITIONS(-DFG_LINUX)
	MESSAGE(STATUS "Current System  is UNIX-like OS's. Including aPPLE os x  and CygWin")

ELSE()
	MESSAGE(FATAL_ERROR "unsupports system.")

ENDIF ()
# ========================= end check system and set system platform macros  =============

#SET server node macros
ADD_DEFINITIONS(-DFG_SERVER_NODE)

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  ${FG_LIBS_DIR}/FGCore/include
)

#libs search path
link_directories(
 	"${FG_LIBS_DIR}/FGCore/libs/${FG_PLATFORM_FOLDER}/"
)

#static libs
link_libraries(
	"libFGCore.a"
)

AUX_SOURCE_DIRECTORY(src SRC_LIST)
ADD_EXECUTABLE(FGSNode ${SRC_LIST})