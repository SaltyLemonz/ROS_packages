# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_4wd-robot_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED 4wd-robot_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(4wd-robot_FOUND FALSE)
  elseif(NOT 4wd-robot_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(4wd-robot_FOUND FALSE)
  endif()
  return()
endif()
set(_4wd-robot_CONFIG_INCLUDED TRUE)

# output package information
if(NOT 4wd-robot_FIND_QUIETLY)
  message(STATUS "Found 4wd-robot: 0.0.0 (${4wd-robot_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package '4wd-robot' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT 4wd-robot_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(4wd-robot_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${4wd-robot_DIR}/${_extra}")
endforeach()
