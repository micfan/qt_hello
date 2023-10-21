# CMakeList.txt : CMake project for QTHello, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("QtCMakeHelloWorld")

include("C:/work/vcpkg/scripts/buildsystems/vcpkg.cmake")

find_package(Qt5 REQUIRED Core Widgets)
#find_package(FFMPEG REQUIRED)

# Add source to this project's executable.
add_executable (QtHello
	WIN32
	"main.cpp"
	"main.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET QtHello PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.

target_link_libraries(QtHello 
	# PRIVATE	
	Qt5::Core
	Qt5::Widgets
	${FFMPEG_LIBRARIES}
)

message(STATUS "====" ${FFMPEG_LIBRARIES})


#target_include_directories(QtHello PRIVATE ${FFMPEG_INCLUDE_DIRS})
#target_link_directories(QtHello PRIVATE ${FFMPEG_LIBRARY_DIRS})
#target_link_libraries(QtHello PRIVATE ${FFMPEG_LIBRARIES})
