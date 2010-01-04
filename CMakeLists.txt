cmake_minimum_required(VERSION 2.6)
LIST(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}")
project ( wowsniffernew )
find_package(GTK2 REQUIRED )
include_directories(${GTK2_INCLUDE_DIRS} /usr/include/mysql++ /usr/include/mysql)

add_executable( main positiondrawer.cpp crypt.cpp  Dispatch.cpp  Main.cpp Thread.cpp  Utility.cpp Spells.cpp Chat.cpp tcpchecksum.cpp)
target_link_libraries( main pcap ${GTK2_LIBRARIES} SDL GL GLEW mysqlpp)
