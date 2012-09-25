cmake_minimum_required(VERSION 2.8)

if(VERSION_TEXT_FILE)
	file(STRINGS ${VERSION_TEXT_FILE} VERSION_STRING LIMIT_COUNT 1)
endif()

if(VERSION_STRING MATCHES "[0-9]+\\.[0-9]+\\.[0-9]+\\.[0-9]+")
	string(REGEX REPLACE "([0-9])+\\.([0-9]+)\\.([0-9]+)\\.([0-9]+)" "\\1;\\2;\\3;\\4" VERSION_COMPONENTS ${VERSION_STRING})
elseif(VERSION_STRING MATCHES "[0-9]+\\.[0-9]+\\.[0-9]+")
	string(REGEX REPLACE "([0-9])+\\.([0-9]+)\\.([0-9]+)" "\\1;\\2;\\3" VERSION_COMPONENTS ${VERSION_STRING})
elseif(VERSION_STRING MATCHES "[0-9]+\\.[0-9]+")
	string(REGEX REPLACE "([0-9])+\\.([0-9]+)" "\\1;\\2" VERSION_COMPONENTS ${VERSION_STRING})
elseif(VERSION_STRING MATCHES "[0-9]+")
	string(REGEX REPLACE "([0-9])+" "\\1" VERSION_COMPONENTS ${VERSION_STRING})
endif()

set(VERSION_MAJOR 0)
set(VERSION_MINOR 0)
set(VERSION_PATCH 0)
set(VERSION_TWEAK 0)

list(LENGTH VERSION_COMPONENTS VERSION_LENGTH)
if(VERSION_LENGTH GREATER 0)
	list(GET VERSION_COMPONENTS 0 VERSION_MAJOR)
endif()
if(VERSION_LENGTH GREATER 1)
	list(GET VERSION_COMPONENTS 1 VERSION_MINOR)
endif()
if(VERSION_LENGTH GREATER 2)
	list(GET VERSION_COMPONENTS 2 VERSION_PATCH)
endif()
if(VERSION_LENGTH GREATER 3)
	list(GET VERSION_COMPONENTS 3 VERSION_TWEAK)
endif()

configure_file(${VERSION_INPUT_FILE} ${VERSION_OUTPUT_FILE})
